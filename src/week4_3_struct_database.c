/*
 * week4_3_struct_database.c
 * Author: Duru Melek Doğru
 * Student ID: 260ADB145
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Use malloc to allocate space for n Student records,
 *   read each record from the user, print them as a table,
 *   and then free the memory.
 *
 *   Output must match the format in the Week 4 instructions exactly
 *   (it is checked by the autograder).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    students = malloc(n * sizeof(struct Student));

    if (students == NULL){
        printf("Memory allocation failed.\n");
        return 1;}
        
    for (int i = 0; i < n; i++){
        printf("Enter data for student %d: ", i + 1);
        int a = scanf("%49s", students[i].name);
        int b = scanf("%d", &students[i].id);
        int c = scanf("%f", &students[i].grade);
        if(a != 1){
            free(students);
            printf("Invalid input.\n");
            return 1;
        }
        if(b!=1){
            free(students);
            printf("Invalid input.\n");
            return 1;
        }
        if(c!=1){
            free(students);
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("\n");
    printf("%-6s %-11s %s\n", "ID", "Name", "Grade");
    for (int i = 0; i < n; i++){
        printf("%-6d %-11s %.1f\n", students[i].id, students[i].name, students[i].grade);
    }
    // Optional (not autograded): after the table, print the average
    // grade or the top student
    // hehehehe fun sidequest :) picking the average grade option.
    float sum = 0.0;
    for (int i = 0; i < n; i++){
        sum += students[i].grade;
    }
    float average = sum / n;
    printf("\nAverage grade: %.2f\n", average);

    return 0;
}
