#include <stdio.h>
#include <math.h>

int main(){
    double x;                     //1.46749134
    printf("Enter x: ");
    scanf("%lf", &x);

    int a;                        //4
    printf("Enter decimal places upto which truncated to be done: ");
    scanf("%d", &a);

    long long int b = x * pow(10,a);
    
    double y = (double)b/pow(10,a);

    printf("Truncated value: %lf\n", y);

    double A_E = fabs(x-y);
    printf("Absolute Error: %lf\n", A_E);

    double R_E = fabs(A_E/x);
    printf("Relative Error: %lf\n", R_E);

    double P_E = R_E*100;
    printf("Percentage Error: %lf\n", P_E);

    return 0;
}