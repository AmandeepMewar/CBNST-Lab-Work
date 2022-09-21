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

    double fx, fa, fb;
    double x;
    int step = 0;

    do{
        fa = function(a);
        fb = function(b);

        x = b - ((b-a)/(fb-fa))*(fb);

        fx = function(x);

        printf("Interation %d, x: %lf\n", ++step, x);

        a = b;
        b = x;
        
        fa = fb;
        fb = fx;

    }while(fabs(x-a) >= 0.0001 || fabs(x-b) >= 0.0001);

    printf("x : %lf", x);
}