// Write a program to accept a number from user and
//print if it is dividible by 5 in c language

#include <stdio.h>
int main(){
    int n;
    printf("Enter number...");
    scanf("%d",&n);
    if(n%5==0)
    printf("Number is divisible by 5.");
    else
    printf("Number is not divisible 5.");
    return 0;
}