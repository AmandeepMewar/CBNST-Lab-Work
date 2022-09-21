#include <stdio.h>
#include <math.h>

double function(double x){
    return x*x*x-4*x-9;
}

int main(){
    double a = 0, b = 0;

    for (int i = 0; i < 10; i++){
        if (function(i) > 0 && i > b){
            b = i;
            break;
        }
        else if (function(i) < 0 && i > a){
            a = i;
        }
    }

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