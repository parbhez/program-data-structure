#include<stdio.h>
#include<math.h>
int main()
{
    int array[5] = {12,23,34,45,56};
    int key,position,i;
    printf("Enter the input :");
    scanf("%d",&key);
    position = -1;
    for(i=0; i < 5; i++){
        if(array[i] == key){
            position = i + 1;
            break;
        }
    }
    if(position == -1){
        printf("Data not found");
    }else {
        printf("The position of :%d\n",position);
    }
}
