// print table of a number in reverse order.number  should be user input
#include<stdio.h>
int main(){
    int num,i;
    printf("enter number: ");
    scanf("%d",&num);
    for (i=10;i>=1;i--){
        printf("%d x %d = %d \n",num,i,(num*i));
    }
return 0;
}