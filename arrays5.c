// write a program to check wheather any of the digits in a number appers more than once:
#include<stdio.h>
int main(){
    int seen[10]={0};
    int N;
    printf("enter the number : ");
    scanf("%d",&N);
    int rem;
    while(N>0){
        rem= N%10;
        if (seen[rem]==1){
            break;
        }      
        seen[rem]=1;
        N=N/10;
    }
    if (N>0){
        printf("yes");
    }
    else{
        printf("no");
    }
return 0;
}