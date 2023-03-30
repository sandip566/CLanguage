#include <stdio.h>
void printfact();
void prime();


int main(){
printfact();
prime();
return 0;
}


void printfact(){
    int fact=1;
    int i;
    int num;
    printf(" enter any factorial number");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
    fact=fact*i;
    }
    printf("%d \n",fact );
    
}
void prime(){
    int n,i,c;
    printf("enter any prime or not number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(n%i==0);{
    c++;}}
    if  (c==2){
        printf("--------prime-------");
    }
    else{
      printf("-----not prime-----");
    }
          

}