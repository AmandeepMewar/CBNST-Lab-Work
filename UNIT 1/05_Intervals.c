#include <stdio.h>
#include <math.h>

double function(double x){
    //return x*x*x-4*x-9;
    //return x*x-3;
    //return x*x*x-x-1;
    //return x*x*x-x*x-2;
    return x*x*x - 1;
    //return x*x*x-x-2;

}

int main(){
    int a=0,b=0;

    for (int i = 0; i < 10; i++){
        if (function(i) > 0 && i > b){
            b = i;
            break;
        }
        else if (function(i) < 0 && i > a){
            a = i;
        }
    }

    printf("a = %d , b = %d", a,b);
}