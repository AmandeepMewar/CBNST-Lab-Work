#include <stdio.h>
#include <math.h>

double function(double x){
    return (x*x*x - 2*x*x - 4);
}

double ex(double x){
    return cbrt(2*x*x + 4);
}

double derivative(double x){
    return ((4*x)/(3*cbrt((2*x*x + 4)*(2*x*x + 4))));
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