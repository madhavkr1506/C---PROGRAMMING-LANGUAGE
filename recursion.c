#include<stdio.h>
void printhello(int count){
    if (count==0){
        return;
    }
    printf("hello madhav \n");
    printhello(count-1);
}
int main(){
    printhello(10);
return 0;
}