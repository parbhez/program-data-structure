#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100
int main()
{
    int num[MAX_SIZE];
    int size,i,first_count_range=0,second_count_range=0,third_count_range=0,fourth_count_range=0;
    printf("Enter the input size : ");
    scanf("%d",&size);
    printf("%d array element is :", size);
    for(i=0; i < size; i++){
        scanf("%d",&num[i]);
    }
    for(i=0; i < size; i++){
    if(num[i] > 80 && num[i] <=100){
        first_count_range++;
    }else if(num[i] > 60 && num[i] <= 80){
        second_count_range++;
    }else if(num[i] > 40 && num[i] <=60){
        third_count_range++;
    }else if(num[i] <=40){
        fourth_count_range++;
    }
    }
    printf("No of student in the range 81 to 100 = %d\n", first_count_range);
    printf("No of student in the range 61 to 80 = %d\n", second_count_range);
    printf("No of student in the range 41 to 60 = %d\n", third_count_range);
    printf("No of student in the range 0 to 40 = %d\n", fourth_count_range);
}
