// swap two number a and b
#include<stdio.h>
// void swap(int a,int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("a = %d and b = %d \n",a,b);
// }
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    // printf("a = %d and b = %d \n",a,b);
}
int main(){
    int x=3;
    int y=5;
    _swap(&x,&y);
    printf("x = %d and y = %d \n",x,y);
return 0;
}