#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter any Number ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i; 
        }
    }
    if(sum==n){
        printf("Perfect Number");
    }else{
        printf("Not Perfect Number");
    }
    return 0;
}