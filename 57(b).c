#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,N;
    /* input from users */
    printf("Enter the input :");
    scanf("%d",&N);
    /* nested loop */
    for(i=1; i <= N; i++){
        printf(" \n ");
        for(j=1; j <=i; j++){
                /* condition checked */
            if((i+j)%2 == 0){
                printf("1");
                }else {
                    printf("0");
                }
            }
        }

    return 0;
}
