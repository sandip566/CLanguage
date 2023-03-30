#include<stdio.h>
void SandipEventfactor(int iNo)
{
    int Cnt =1;
    if (iNo <= 0)
    {
        iNo=-iNo;
    }
    for(Cnt=1;iNo>Cnt;Cnt++)
    {
        if(iNo%Cnt==0)
        {
            printf(" %d",Cnt);
        }
    }
}
int main()
{
     int iValue =0;

     printf("Enter numberm =>");
     scanf("%d",&iValue);
     SandipEventfactor(iValue);

     return 0;
}