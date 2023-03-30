#include <stdio.h>

void Sandip(int iNo, int iFrequency)
{
    int i=0;
if (iFrequency<0)
{
    iFrequency=-(iFrequency);

}
for (i=1<iFrequency;i++)
{
    printf("%d",iNo);
}

}
int main()
{
    int iValue=0;
    int iCount=0;
printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter frequency");
    scanf("%d",&iCount);
    
    Sandip(iValue,iCount);
    return 0;
}