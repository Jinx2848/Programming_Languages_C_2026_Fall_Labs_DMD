#include <stdio.h>
#include <math.h>
/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    // TODO: check if n is prime using loop up to sqrt(n)
    for (int i = 2; i < sqrt(n); i++){
        int a = n % i;
        if (a == 0){
            return 0;
        }
    } 
    return 1;
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    // TODO: validate input and print all primes up to n
    if (n < 2){
        printf("Please enter an integer greater than 2.");
        return 0;
    }
    for (int i = 2; i <= n; i++){
        if (is_prime(i) == 1){
            printf("%d\n", i);
        }
    }  
    return 0;  
}
