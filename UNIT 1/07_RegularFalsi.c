#include <stdio.h>
#include <math.h>

double function(double x){
    return x*x*x-2*x-5;
}

int main(){
    double a= 0;
    double b = 0;

    for (int i = 0; i < 10; i++){
        if (function(i) > 0 && i > b){
            b = i;
            break;
        }
        else if (function(i) < 0 && i > a){
            a = i;
        }
    }
    
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