// week5_task1_file_io.c
// Name: Duru Melek  Surname: Doğru  Student ID: 260ADB145
//
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// Build: make lab5   Run: ./bin/week5_task1_file_io

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_FILENAME "data.txt"
#define LINE_LEN 256

int main(int argc, char *argv[]) {
    FILE *fp = NULL;
    const char *filename = DEFAULT_FILENAME;
    char line[LINE_LEN];
    int line_count = 0;

    printf("Printing lines to %s... \n", filename);
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        perror(filename);
        return EXIT_FAILURE;
    }
    fprintf(fp, "new text line! another line, please. \n");
    fprintf(fp, "this is the second one. \n");
    fprintf(fp, "third time's the charm! \n");
    fclose(fp);

    fp = fopen("data.txt", "r");
    printf("Reading contents: \n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
        line_count++;
    }
    fclose(fp);
    printf("Lines read: %d\n", line_count);

    return EXIT_SUCCESS;
}
