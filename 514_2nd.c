#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,count=0;
    printf("Enter the input :");
    scanf("%d",&num);

    for(i=2; i < num; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        printf("It is prime");
    }else {
        printf("Not prime");
    }
    return 0;
}
