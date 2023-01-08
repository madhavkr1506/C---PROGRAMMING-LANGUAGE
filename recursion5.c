#include<stdio.h>
#include<math.h>
int fseries(int a){
    if ((a==0) || (a==1)){
        if (a==0){
            return 0;
        }
        if (a==1){
            return 1;
        }
    }
    int fibnm1=fseries(a-1);
    int fibnm2=fseries(a-2);
    int fibnm=fibnm1+fibnm2;
    // printf("fib of %d is : %d \n",a,fibnm);
    return fibnm;
}
int main(){
    printf("%d",fseries(6));
return 0;
}