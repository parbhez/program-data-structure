#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100
int main()
{
    int array[MAX_SIZE];
    int i,start,end,mid,key,size;
    printf("Enter the input size :");
    scanf("%d",&size);
    printf("%d array element is :", size);
    for(i=0; i < size; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the key : ");
    scanf("%d",&key);
    start = 0;
    end = size - 1;
    do {
        mid = (int)((start + end)/2);
        if(array[mid] == key){
            printf("Location fount at :%d",mid+1);
            break;
        }else if(array[mid] > key){
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }
    while(start <= end);
    if(start > end){
        printf("Data not found");
    }
    return 0;
}
