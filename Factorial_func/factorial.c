#include <stdio.h>

/* A program with factorial function and test */

double factorial(double n){
    if (n == 1) {
        return 1;
    }

    else {
        return n*factorial(n-1);
    }

}

int main(){
    printf("Calculate factorial of what? ");
    double integer;
    scanf("%lf", &integer);
    double fac_int = factorial(integer);
    printf("%lf \n", fac_int);
}