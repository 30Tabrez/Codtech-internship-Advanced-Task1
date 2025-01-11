#include <stdio.h>
#include <stdlib.h>

void createFile(const char *filename);
void writeFile(const char *filename);
void readFile(const char *filename);
void appendFile(const char *filename);

int main() {
    char filename[50];
    int choice;

    printf("Enter the filename (with extension): ");
    scanf("%s", filename);

    do {
        printf("\n--- File Handling Operations ---\n");
        printf("1. Create a new file\n");
        printf("2. Write data to the file\n");
        printf("3. Read data from the file\n");
        printf("4. Append data to the file\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createFile(filename);
                break;
            case 2:
                writeFile(filename);
                break;
            case 3:
                readFile(filename);
                break;
            case 4:
                appendFile(filename);
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to create a new file
void createFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error creating file");
        return;
    }
    printf("File '%s' created successfully.\n", filename);
    fclose(file);
}

// Function to write data to the file
void writeFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char data[1000];
    printf("Enter data to write to the file (end with a newline):\n");
    getchar();  // Clear the newline from buffer
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);
    printf("Data written successfully.\n");
    fclose(file);
}

// Function to read data from the file
void readFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    printf("Contents of '%s':\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\nEnd of file.\n");
    fclose(file);
}

// Function to append data to the file
void appendFile(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char data[1000];
    printf("Enter data to append to the file (end with a newline):\n");
    getchar();  // Clear the newline from buffer
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);
    printf("Data appended successfully.\n");
    fclose(file);
}

