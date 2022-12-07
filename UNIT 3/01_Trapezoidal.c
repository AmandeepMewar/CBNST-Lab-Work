#include <stdio.h>

float y(float x){
    return 1/(1+x*x);

}

int main(){
    float x0, x1;
    float h;
    printf("Enter x0, x1, and h: ");
    scanf("%f%f%f",&x0,&x1,&h);

    float n = (x1-x0)/h;

    float ans1 = y(x0) + y(x1);
    printf("y(%.2f): %f\n",x0, y(x0));
    

    int i = 1;
    float j = x0 + h;
    float ans2 = 0;

    while(i < n){
        ans2 += y(j);
        printf("y(%.2lf): %f\n",j, y(j));
        j += h;
        i++;
    }
    printf("y(%.2f): %f\n",x1, y(x1));

    ans2 = 2 * ans2;

    float FinalAnswer = h * (ans1 + ans2)/2;

    printf("Answer: %f\n", FinalAnswer);
}