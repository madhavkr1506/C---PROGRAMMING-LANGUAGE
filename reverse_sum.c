#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        sum=sum+i;
        printf("%d \n",i);
    }
    printf("%d",sum);
return 0;
}