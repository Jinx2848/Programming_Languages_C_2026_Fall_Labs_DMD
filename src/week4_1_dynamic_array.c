/*
 * week4_1_dynamic_array.c
 * Author: Duru Melek Doğru
 * Student ID: 260ADB145
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Allocate memory for n integers, read them from the user,
 *   print their sum and average, and then free the memory.
 *
 *   Output must match the format in the Week 4 instructions exactly
 *   (it is checked by the autograder).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    arr = malloc(n * sizeof(int));

      
    if (arr == NULL){
        printf("Memory allocation failed.\n");
       return 1;}


    printf("Enter %d integers: \n", n);
    for(int i = 0; i < n; i++){
        int a = scanf("%d", &arr[i]);
        if(a!=1){
            free(arr);
            printf("Invalid input.\n");
            return 1;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];    
    }
    float avg = sum / n;

    printf("Sum = %d \n", sum);
    printf("Average = %.2f", avg);
    free(arr);

    return 0;
}
