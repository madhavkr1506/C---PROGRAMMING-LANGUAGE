#include<stdio.h>
int addition(int num1, int num2){
    // printf("addition of two number is");
    return num1+num2;
}
int subtraction(int num1,int num2){
    // printf("subtraction of two number is");
    return num1-num2;
}
int multiplication(int num1, int num2){
    // printf("multiplication of two number is");
    return num1*num2;
}
int division( int num1,int num2){
    // printf("division of two number is");
    return num1/num2;
}
int main(){
    char ch;
    printf("enter character : ");
    scanf("%c",&ch);
    int num1,num2;
    printf("enter number 1 : ");
    scanf("%d",&num1);
    printf("enter number 2 : ");
    scanf("%d",&num2);
    if (ch=='+'){
        int res=addition(num1,num2);
        printf("addition of %d and %d is %d",num1,num2,res);
    }
    else if (ch=='-'){
        int res=subtraction(num1,num2);
        printf("subtraction of %d and %d is %d",num1,num2,res);
    }
    else if (ch=='*'){
        int res=multiplication(num1,num2);
        printf("multiplication of %d and %d is %d",num1,num2,res);
    }
    else if (ch=='/'){
        int res=division(num1,num2);
        printf("division of %d and %d is %d",num1,num2,res);
    }
    else{
        printf("enter valid character !");
    }
return 0;
}