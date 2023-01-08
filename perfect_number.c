#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,rem,sum=0;
    printf("enter number to check whether number is perfect or not: ");
    scanf("%d",&num);
    for (i=1;i<num;i++){
        rem=num%i;
        if (rem==0){
            sum=sum+i;
        }
    }
    if (num==sum){
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
return 0;
}
