#include<stdio.h>
#include<math.h>
int main()
{
    int start,end,i,j,count,prime=0;
    printf("Enter the first input :");
    scanf("%d",&start);
    printf("Enter the 2nd input :");
    scanf("%d",&end);
    if(start  < 2){
                start = 2;
    }
    printf("All prime number : ");
    for(i=start; i <=end; i++)
    {
        count=0;
        for(j=2; j <=i/2; j++){
                if(i%j==0){
                    count++;
                    break;
                }
        }
        if(count==0){
                prime++;
            printf("%d, ",i);
        }
    }
    printf("Total prime number count :%d ", prime);
    return 0;
}

