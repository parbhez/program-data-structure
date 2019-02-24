/* C program to check Even or Odd number */
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    /* input from users */
    printf("Enter the input :");
    scanf("%d",&num);
    /* check if the number is divisible by 2 then it is even */
    if(num % 2 == 0)
    {
        /* num % 2 is 0 */
        printf("It is Even number");
    }else {
                /* num % 2 is 1 */
        printf("It is Odd number");
    }
    return 0;
}
