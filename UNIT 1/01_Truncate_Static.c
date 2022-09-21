#include <stdio.h>
#include <math.h>

int main(){
    double x = 1.46749134;
    double y = 1.4674;    // truncate

    double Absolute_E = fabs(x-y);
    printf("Absolute Error : %lf\n", Absolute_E);

    double Relative_E = fabs((x-y)/x);
    printf("Relative Error : %lf\n", Relative_E);

    double Percentage_E = Relative_E *100;
    printf("Percentage Error : %lf\n", Percentage_E);

}