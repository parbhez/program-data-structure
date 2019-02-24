#include<stdio.h>
#include<math.h>
int main()
{
    int i,num,sum=0,value,count=0;
    printf("Enter the input :");
    scanf("%d",&num);
    printf("The number : ");
    for(i=0; i <num; i++){
        if(i%6 == 0 && i%4 != 0){
             value = i;
             count++;
            printf(" %d, ", value);
            sum= sum +i;
        }
    }
    printf("Sum = %d\n", sum);
    printf("Count = %d\n", count);

}
