#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the three input :");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b>c) && (b+c>a) && (c+a>b)){
        printf("It is valid Triangle");
    }else {
        printf("Not valid triangle");
    }
    return 0;
}
