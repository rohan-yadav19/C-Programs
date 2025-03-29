#include<stdio.h>
int main(){
    int n,r,c,arm=0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=arm+(r*r*r);
        n=n/10;
    }
    if(c==arm){
        printf("Armstrong Number.");
    }else{
        printf("Not Armstrong Number.");
    }
}