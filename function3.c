#include<stdio.h>
void printtable(int num){
    for (int i=1;i<=10;i++){
        printf("%d x %d = %d \n",num,i,(num*i));
    }
}
int main(){
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    printtable(num);
return 0;
}