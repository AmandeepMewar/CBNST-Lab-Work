#include <stdio.h>
#include <math.h>

int main(){
    double x;              //1.46749134
    printf("Enter x: ");
    scanf("%lf", &x);

    int a;                //4
    printf("Enter decimal places upto round off: ");
    scanf("%d", &a);

    long long int b = x*pow(10,a+1);     //146749
    int c = b%10;                        //9
    b= b/(float)10;                      //14674

    if (c>5){
        b++;
    } 

    double y = (float)b/pow(10,a);
    printf("Roundoff: %lf\n",y);

    double A_E = fabs(x-y);
    printf("Absolute Error: %lf\n", A_E);

    double R_E = fabs(A_E/x);
    printf("Relative Error: %lf\n", R_E);

    double P_E = R_E*100;
    printf("Percentage Error: %lf\n", P_E);

    return 0;

}