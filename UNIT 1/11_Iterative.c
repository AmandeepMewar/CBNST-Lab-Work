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