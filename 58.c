#include<stdio.h>
#include<math.h>
int main()
{
    int choose,purchase;
    float net;
    /* Choose 1 or 2 */
    printf("Enter 1. If it is mail-cloth.\n 2. If it is handloom\n");
    scanf("%d",&choose);
    /* Amount from user */
    printf("Enter the purchase amount : ");
    scanf("%d",&purchase);
/* Taken option */
    switch(choose)
    {
    case 1 :
        /* Condition based logic implement */
        if(purchase >=1 && purchase <=100)
            net = purchase;
        if(purchase >=101 && purchase <= 200)
            net = purchase - (5.00/100.00) * purchase;
        if(purchase >=201 && purchase <= 300)
            net = purchase - (7.5/100.00) * purchase;
        if(purchase > 300)
            net = purchase - (10.00/100.00) * purchase;
        break;

    case 2 :
        /* Condition based logic implement */
        if(purchase >=1 && purchase <= 100)
            net = purchase - (5.00/100.00) * purchase;
        if(purchase >=101 && purchase <= 200)
            net = purchase - (7.5/100.00) * purchase;
        if(purchase >= 201 && purchase <= 300)
            net = purchase - (10.00/100.00) * purchase;
        if(purchase > 300)
            net = purchase - (15.00/100.00) * purchase;
        break;
    }
    printf("The net amount to be paid is = %.2f", net);
}
