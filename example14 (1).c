// write a program to accept two numbers from user 
// and compare tehm in c language

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter numbers..");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("a is greater than b");
    else if(b>a)
    printf("b is greater than a ");
    else
    printf("both are equal");
    return 0;
}