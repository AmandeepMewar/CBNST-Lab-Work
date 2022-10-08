#include <stdio.h>

int main(){
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    float arr[n][n+1];

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

    float a;
    for (int i = 0; i<n-1; i++){
        if (arr[i][i] == 0.0){
            printf("Error\n");
            return 0;
        }
        for (int j = i+1; j < n; j++){
            a = arr[j][i]/arr[i][i];
            for (int k = 0; k < n+1;k++){
                arr[j][k] = arr[j][k] - a*arr[i][k];
            }
        }
    }

    float ans[n];
    ans[n-1] = arr[n-1][n]/arr[n-1][n-1];

    for (int i = n-2; i >=0; i--){
        ans[i] = arr[i][n];
        for (int j = i+1; j < n; j++){
            ans[i] = ans[i] - arr[i][j]*ans[j];
        }
        ans[i] = ans[i]/arr[i][i];
    }

    for (int i = 0; i < n; i++){
        printf("x%d : %f\n", i+1, ans[i]);
    }
}