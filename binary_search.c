#include<stdio.h>
#include<math.h>
int main()
{
    int a[13] = {12,23,30,32,38,42,50,60,65,70,85,90,100};
    int i,start,end,mid,key;
    printf("Enter the input key: ");
    scanf("%d",&key);
    start = 0;
    end=12;


    do {
        mid = (int) ((start + end)/2);
        /*printf("Start = %d\t End = %d\t Mid = %d\t key = %d\t a[mid] = %d\n",start,end,mid,key,a[mid]); */
        if(a[mid] == key){
            printf("Location find at : %d ",mid+1);
            break;
        }else if(a[mid] > key){
            end = mid-1;
        }else {
            start = mid + 1;
        }

    }
    while(start <= end);
    if(start > end){
        printf("Failed \n");
       /* printf("Start = %d\t End = %d\t Mid = %d\t key = %d\t a[mid] = %d\n",start,end,mid,key,a[mid]);*/
    }
    return 0;
}
