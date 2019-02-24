#include<stdio.h>
#include<conio.h>
void main()
{
 int ch,pa;
 float net;
 printf("enter 1.if it is millcloth\n 2. if it is handloom");
 scanf("%d",&ch);
 printf("\n enter purchased amount");
 scanf("%d",&pa);
 switch(ch)
 {
  case 1:
         if(pa>=1&&pa<=100)
         net=pa;
         if(pa>=101&&pa<=200)
         net=pa-(5.00/100.00)*pa;
         if(pa>=201&&pa<=300)
         net=pa-(7.5/100.00)*pa;
         if(pa>300)
         net=pa-(10.00/100.00)*pa;
         break;
  case 2:
         if(pa>=1&pa<=100)
         net=pa-(5.00/100.00)*pa;
         if(pa>=101&&pa<=200)
         net=pa-(7.5/100.00)*pa;
         if(pa>=201&&pa<=300)
         net=pa-(10.00/100.00)*pa;
         if(pa>300)
         net=pa-(15.00/100.00)*pa;
         break;
  }
  printf("\n the net amount to be paid is%f",net);
  getch();
 }
