#include<stdio.h>
#include<math.h>
int fact(int num){
    if (num==0){
        return 1;
    }
    int factNm=fact(num-1);
    int factN=factNm*num;
    return factN;
}
int main(){
    printf("factorial of given number is : %d",fact(6));
return 0;
}