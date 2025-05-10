#include<stdio.h>
int main()
{
    int A[2][2],B[2][2],i,j,k,C[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&A[i][j]);
        }
    }
    printf("\nMatrix A");
    for(i=0;i<2;i++)
    { 
        for(j=0;j<2;j++)
        {
    printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&B[i][j]);
        }
    }
     printf("\nMatrix B");
    for(i=0;i<2;i++)
    {
       
        for(j=0;j<2;j++)
        {
    printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=0;
            for(k=0;k<2;k++)
            {
                C[i][j]=A[i][k]*B[k][j];
            }
        }
    }
    printf("\nMatrix C");
     for(i=0;i<2;i++)
    {  
        for(j=0;j<2;j++)
        {
    printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}
