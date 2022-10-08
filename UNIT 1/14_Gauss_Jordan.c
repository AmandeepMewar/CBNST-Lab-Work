#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    float A[n][n+1],c,x[n];

    for(i=0; i<n; i++){
        for(j=0; j<n+1; j++){
            printf("A[%d][%d]:", i+1,j+1);
            scanf("%f",&A[i][j]);
        }
    }

    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            if(i!=j){
                c=A[i][j]/A[j][j];
                for(k=0; k<n+1; k++){
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    for(i=0; i<n; i++){
        x[i]=A[i][n]/A[i][i];
        printf("x%d = %f\n",i,x[i]);
    }

}