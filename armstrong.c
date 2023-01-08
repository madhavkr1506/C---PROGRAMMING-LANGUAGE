#include<stdio.h>
int main(){
    int num,res,sum=0,temp;
    printf("enter number to check whether it is armstrong or not : ");
    scanf("%d",&num);
    temp=num;
    while (num>0){
        res=(num%10);
        sum=sum+(res*res*res);
        num=(num/10);
    }
    if (temp==sum){
        printf("%d is an armstrong number",temp);
    }
    else{
        printf("%d is not an armstrong number",temp);
    }
return 0;
}