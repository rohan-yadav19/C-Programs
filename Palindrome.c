#include<stdio.h>
int main(){
    int n,c,r,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
if(sum==c){
    printf("Palindrome Number");
}else{
    printf("Not palindrome number");
}
}