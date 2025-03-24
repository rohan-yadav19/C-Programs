#include<stdio.h>
int main(){
    int phy,che,math,eng,nep,Total;
    double avg;
    printf("Enter the marks of 5 subjects: ");
    scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&nep);
    Total=phy+che+math+eng+nep;
    printf("Tota Marks: %d",Total);
    avg=Total/5;
    printf("\nAverage Marks: %1f",avg);
    return 0;
}