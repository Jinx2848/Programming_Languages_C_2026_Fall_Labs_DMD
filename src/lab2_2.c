#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    long fact = 1;
    int a = 1;
    while (a <= n){
        fact *= a;
        a++;
    }
    return fact;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    // TODO: validate input, call function, print result
    if (n < 1){
        printf("Please enter a positive integer.");
        return 0;
    }
    else{
    int fact = factorial(n);
    printf("%d\n", fact);
    return 0;
    }
}
