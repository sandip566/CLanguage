#include <stdio.h>

float ToatalBill(int iAmount)
{
    if(iAmount<500)
    {
        return iAmount;
    }
    else if (iAmount>=500 && iAmount<1500)
    {
        return iAmount-(iAmount*10)/100;

    }
    else if (iAmount>=1500)
    {
        return iAmount-(iAmount*15)/100;
    }


}
int main()
    {
        int iAmount=0;
        float iDiscount=0;
        printf ("EnterThe Amount =>");
        scanf("%d",&iAmount);

        iDiscount=ToatalBill(iAmount);

        printf("Total Amount = %d \n Discounted Amount = %0.0f",iAmount,iDiscount);
        return 0;
    }
