#include<stdio.h>
int main(){
    int marks;
    printf("marks: ");
    scanf("%d",&marks);
    // if (marks>30){
    //     printf("pass");
    // }
    // else{
    //     printf("fail");
    // }
    marks>30 ? printf("pass") : printf("fail");
return 0;
}