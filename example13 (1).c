// Write a program to accept a number from user and
// print if it is multiple of 7 in c language.

#include <stdio.h>
int main(){
    int n;
    printf("Enter number");
    scanf("%d",&n);
    if (n%7==0)
    printf("Number is multiply of 7");
    else
    printf("Number is not multiple of 7");
    return 0;
}