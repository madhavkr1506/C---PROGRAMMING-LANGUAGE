#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    for(int i=1;i<11;i++){
        printf("multiplication of given number is: %d * %d = %d \n",num,i,(num * i));
    }
    return 0;
}