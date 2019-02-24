/* C program to check even or odd number */
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    /* input number from user */
    printf("Enter the input :");
    scanf("%d",&num);
    /* Check if the number is divisible by 2 then it is even */
    if(num%2 == 0){
            /* num % 2 is 0 */
        printf("It is even number");
    }
    /*check if the number is not divisible by 2 then it is Odd number */
    if(num%2 != 0){
        /* num % 2 is 1 */
        printf("It is Odd number");
    }
    return 0;

}
