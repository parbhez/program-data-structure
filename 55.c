#include<stdio.h>
#include<math.h>
int main()
{
    int math,physics,chemistry,total,math_physics;
    /* input from users */
    printf("Enter the marks obtained in math,physics & chemistry : ");
    scanf("%d%d%d",&math,&physics,&chemistry);
/*nested if */
/* condition check*/
   if(math >=60){
    if(physics >= 50){
        if(chemistry >=40){
            if((math + physics + chemistry) >=200 || (math+ physics) >=150){
               printf("This candidate is eligible for Admission\n");
            }else {
               printf("This candidate is eligible for Admission\n");
            }
        }else {
              printf("This candidate is eligible for Admission\n");
        }
    }else {
          printf("This candidate is eligible for Admission\n");
    }
   }else {
         printf("This candidate is eligible for Admission\n");
   }
return 0;
}
