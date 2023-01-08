#include<stdio.h>
#include<math.h>
int main(){
    int num,i;
    printf("enter num: ");
    scanf("%d",&num);
    for (i=2;i<num;++i){
        if ((num%i==0) || (num%(i+1)==0)){
            printf("%d is not a prime number",num);
            break;
        }
        else{
            printf("%d is a prime number",num);
            break;
        }
    }
    
return 0;   
}