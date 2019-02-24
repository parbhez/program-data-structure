#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100
int main()
{
    int array[MAX_SIZE];
    int i,j,temp,size;
    i=0;
    printf("Enter the input : ");
    scanf("%d",&size);
    printf("%d array element :", size);
    for(i=0; i < size; i++){
        scanf("%d",&array[i]);
    }

    for(i=0; i < size-1; i++){
     for(j=i+1; j < size; j++){
        if(array[i] > array[j]){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    }
    printf("Assending order: ");
    for(i=0; i < size;  i++){
        printf(" %d ", array[i]);
    }
}
