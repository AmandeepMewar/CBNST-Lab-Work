#include <stdio.h>
#include <math.h>

double function(double x){
    //return x*x*x-4*x-9;
    return x*x-3;
    //return x*x*x-x-1;
    //return x*x*x-x*x-2;
    //return x*x*x-x-2;

}

int main(){
    int a, b;

    for (int i = -5; i <= 5; i++){
        a = i;
        b = i+1;
        if (function(a)*function(b) < 0){
            break;
        }
    }

    printf("a = %d , b = %d", a,b);
}