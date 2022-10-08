#include <stdio.h>

int main(){
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    float arr[n][n+1];
    float ans[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n+1; j++){
            printf("Enter arr[%d][%d] : ",i+1,j+1);
            scanf("%f",&arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n+1; j++){
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }

    int iteration;
    printf("Enter iteration: ");
    scanf("%d",&iteration);
    float x1,y1,z1;
    x1=y1=z1=0.0;
    int i = 0;

    while(--iteration){
        x1 = (arr[0][3] - arr[0][2]*z1 - arr[0][1]*y1)/arr[0][0];
        y1 = (arr[1][3] - arr[1][2]*z1 - arr[1][0]*x1)/arr[1][1];
        z1 = (arr[2][3] - arr[2][0]*x1 - arr[2][1]*y1)/arr[2][2];
        printf("Iteration %d\n",++i);
        printf("x: %f\n",x1);
        printf("y: %f\n",y1);
        printf("z: %f\n",z1);
    }
    
    printf("Final Values: \n");
    printf("x: %f\n",x1);
    printf("y: %f\n",y1);
    printf("z: %f\n",z1);
}