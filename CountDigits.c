#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("Total %d Digits ",count);
    return 0;
}