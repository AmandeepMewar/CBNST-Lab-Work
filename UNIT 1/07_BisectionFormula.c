#include <stdio.h>
#include <math.h>

double function(double x){
    return x*x*x-4*x-9;
}

int main(){
    double a, b;

    for (int i = -5; i <= 5; i++){
        a = i;
        b = i+1;
        if (function(a)*function(b) < 0){
            break;
        }
    }

/*
    printf("Enter the value of a: ");
    scanf("%lf",&a);
    printf("Enter the value of b: ");
    scanf("%lf",&b);
*/

    printf("a = %lf , b = %lf\n", a,b);
    
    double fx,fa,fb,x;
    int steps = 0;

    do{
        fa = function(a);
        fb = function(b);

        x = (a+b)/2;
        fx = function(x);

        printf("Interation %d, x = %.4lf\n", ++steps, x);
        if (fx*fb < 0){
            a = x;
        }
        else if (fx*fa < 0){
            b = x;
        }

    }while(fabs(x-a) >= 0.0001 || fabs(x-b) >= 0.0001);

    printf("Root is %.4lf\n", x);
}