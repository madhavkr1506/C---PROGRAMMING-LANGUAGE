#include<stdio.h>
int main(){
    int num1;
    printf("enter number: ");
    scanf("%d",&num1);
    for (int i=1;i<11;++i){
        if (i%2==0){
            printf("%d x %d = %d \n",num1,i,(num1*i));
        }
    }
return 0;
}