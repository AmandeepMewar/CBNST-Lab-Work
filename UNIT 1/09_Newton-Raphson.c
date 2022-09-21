#include <stdio.h>
#include <math.h>

double function(double x){
    return (x*x*x*x - x - 10);
}

double derivative(double x){
    return (4*x*x*x - 1);
}

double ex(double x){
    return (x - (function(x)/derivative(x)));
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