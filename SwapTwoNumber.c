#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}