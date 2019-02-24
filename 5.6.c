#include<stdio.h>
#include<math.h>
int main()
{
    float i,j;
    printf("Square root table :\n");
    /* nested loop */
    for(i=0; i <10; i++){
        printf(" \n ");
        for(j=0; j <= 1; j=j+0.1){
            /* condition check */
              if(j == 0){
                printf("%.1f   |   ", i);
             }else if(i==0){
                printf("%.1f   |   ", j);
             }else if(j != 0 && i != 0){
                printf("%.1f   |   ", sqrt(i+j));
             }
        }
    }
return 0;
}

