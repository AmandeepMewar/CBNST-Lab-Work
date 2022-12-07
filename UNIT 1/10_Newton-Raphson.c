#include <stdio.h>
#include <math.h>

double function(double x){
    //return x*tan(x)+1;
    return x*x - 4* sin(x);
    //return x*x*x - 3*x -5;
    //return x*sin(x) + cos(x);
}

double derivative(double x){
    //return tan(x)+x*(1/(cos(x)*cos(x)));
    return 2*x - 4*cos(x);
    //return 3*x*x - 3;
    //return x*cos(x);
}

double ex(double x){
    return (x - (function(x)/derivative(x)));
}

int main(){
    double a, b;

    for (int i = 1; i <= 5; i++){
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

    printf("a : %lf ,  b : %lf\n", a, b);

    double x = (a+b)/2;
    double x1;
    int step = 0;

    do{
        x1 = x;
        x = ex(x);
        
        printf("Interation %d, x : %lf\n", ++step, x);

    }while(fabs(x-x1) >= 0.001);

    printf("x : %lf\n", x);
}