//
//  algorithm3.c
//  
//
//  Created by WuZhouxing on 17/2/20.
//
//


#include "algorithm3.h"
   int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter number of rows (between 1 and 100):");
    scanf("%d",&c);
    printf("\nEnter elements of lst matrix:\n");
    
    for(i=0;i<r;i++)
    {
        for (j=0; j<c; j++) {
            printf("Enter element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter elements of 2nd matrix:\n");
    
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("Enter element a%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    
    for (i=0; i<r; ++i) {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    
    for (i=0; i<r; ++i) {
        for (j=0; j<c; j++) {
            printf("%d  ",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
    
}



