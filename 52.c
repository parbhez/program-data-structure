#include<stdio.h>
#include<math.h>
int main()
{
    /* declear variable */
    int i,sum=0;
    printf("\n Numbers between 100 to 200 which is divisible by 7 :");
    /* for loop start 101 and end 200 */
    for(i=101; i <200; i++){
            /* i %  7 is 0 */
            if(i%7 == 0){
                /* All integers number divisible by 7 */
                printf("\n %d", i);
         /* Sum of All integers number divisible by 7 */
                sum = sum + i;
            }
    }
    printf("\n Sum=%d",sum);
}
