#include<stdio.h>
int main(){
    int num;
    while(1){
        printf("enter number : ");
        scanf("%d",&num);
        printf("%d \n",num);
        if (num%2!=0){
            break;
        }
    }
return 0;
}