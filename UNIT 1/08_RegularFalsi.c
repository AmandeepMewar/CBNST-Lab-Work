#include <stdio.h>
#include <math.h>
#define e 2.71828182

double function(double x){
    return x*x*x-2*x-5;
    //return x*x*x - x*x - 2;
    //return x*x - log(x) -12;
    //return x*pow(e,x)-3;
    //return x*pow(e,x) - cos(x);
    //return x*pow(e,x) - sin(x);
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

    printf("a : %lf, b : %lf\n",a,b);

    double fx, fa, fb, x, x1;
    int step = 0;

    do{
        fa = function(a); 
        fb = function(b);

        x = (a*fb - b*fa)/(fb-fa);
        fx = function(x);

        printf("Iteration %d, x = %lf\n", ++step, x);
  
        if (fx < 0){
            x1 = a;
            a = x;
        }

        else if(fx > 0){
            x1 = b;
            b = x;
        }

    }while(fabs(x-x1) >= 0.0001);

    printf("x : %lf\n", x);
    
}