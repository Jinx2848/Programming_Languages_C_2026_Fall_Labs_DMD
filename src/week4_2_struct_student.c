/*
 * week4_2_struct_student.c
 * Author: Duru Melek Doğru
 * Student ID: 260ADB145
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Define a 'Student' struct with name, id and grade, create two
 *   instances with the values from the instructions, and print them.
 *
 *   This program reads no input. Output must match the format in the
 *   Week 4 instructions exactly (it is checked by the autograder).
 */

#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    struct Student s1;
    struct Student s2;

    char *a = "Alice Johnson";
    char *b = "Bob Smith";
    strcpy(s1.name, a);
    s1.id = 1001;
    s1.grade = 9.1;
    strcpy(s2.name, b);
    s2.id = 1002;
    s2.grade = 8.7;

    // TODO: Print each student exactly as:
    //       Student <k>: <name>, ID: <id>, Grade: <grade with 1 decimal, %.1f>
    printf("Student: %s ", s1.name);
    printf("id: %d ", s1.id);
    printf("Grade: %.1f \n", s1.grade);
    printf("Student: %s ", s2.name);
    printf("id: %d ", s2.id);
    printf("Grade: %.1f \n", s2.grade);
    return 0;
}
