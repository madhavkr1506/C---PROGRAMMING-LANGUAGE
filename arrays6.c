#include<stdio.h>
int main(){
    int a[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,23,3,4,4,5,5,5,6,6,7,7,7,7,8,8};
    printf("%d",sizeof(a)/sizeof(a[0]));
return 0;
}