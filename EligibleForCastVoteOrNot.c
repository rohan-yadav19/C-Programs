#include<stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible for cast vote");
    }else{
        printf("Not Eligible to cast vote");
    }
}