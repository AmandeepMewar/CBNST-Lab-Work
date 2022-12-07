#include <stdio.h>

float y(float x){
    return 1/(1+x*x);
}

int main(){
    float x0, x1, h;
    printf("Enter x0, x1 and h: ");
    scanf("%f%f%f",&x0,&x1,&h);

    float ans1 = y(x0) + y(x1);

    float n = (x1 - x0)/h;
    printf("y(%.2f): %f\n",x0 , y(x0));


    int i = 1;
    float j = x0 + h;
    float ans2 = 0;
    float ans3 = 0;

    while(i < n){
        if (i % 2 == 0){
            ans3 += y(j);
            printf("y(%.2f): %f\n",j , y(j));
            j += h;
            i++;
        }
        else{
            ans2 += y(j);
            printf("y(%.2f): %f\n",j , y(j));
            j += h;
            i++;
        }
    }
    printf("y(%.2f): %f\n",x1 , y(x1));

    ans2 = 4 * ans2;
    ans3 = 2 * ans3;

    float FinalAnswer = (h * (ans1 + ans2 + ans3))/3;

    printf("Answer: %f\n", FinalAnswer);

}