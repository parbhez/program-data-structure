#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,end,k=1;
    printf("Enter the input :");
    scanf("%d",&end);

    for(i=1; i <= end; i++){
        printf(" \n ");
        for(j=1; j <= i; j++,k++){
            printf(" %d ",  k);
        }

    }

}
