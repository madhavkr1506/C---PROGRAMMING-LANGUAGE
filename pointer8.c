#include<stdio.h>
void printaddress(int *n){
    printf("address of n is : %u\n",n);
}
int main(){
    int n=4;
    printaddress(&n);
    printf("address of n is : %u\n",&n);
return 0;
}