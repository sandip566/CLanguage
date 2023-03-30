#include<stdio.h>
void Kailas(int sun){
    int hello = 0;
    for (hello=1 ; hello <= sun ; hello++) 
{
    printf("\t*");
}
}
int main()
{
    int value = 0;
    printf("Enter The Number =>");
    scanf("%d",&value);

    Kailas(value);
    return 0;
}