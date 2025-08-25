// Write a C program to perform Matrix Addition

#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&r);
    printf("Enter the number of columns\n");
    scanf("%d",&c);
    int mat1[100][100],mat2[100][100],sum[100][100];
    printf("Enter the elements of matrix 1\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Element [%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the elements of matrix 2");
      for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Element [%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
   for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
