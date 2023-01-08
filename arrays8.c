#include<stdio.h>
int main(){
    int marks[5];
    printf("enter history marks : ");
    scanf("%d",&marks[0]);
    printf("enter geography marks : ");
    scanf("%d",&marks[1]);
    printf("enter political science marks : ");
    scanf("%d",&marks[2]);
    printf("enter economics marks : ");
    scanf("%d",&marks[3]);
    printf("enter environmental science marks : ");
    scanf("%d",&marks[4]);
    printf("history = %d \n",marks[0]);
    printf("geography = %d \n",marks[1]);
    printf("political science = %d \n",marks[2]);
    printf("economics = %d \n",marks[3]);
    printf("environmental science = %d \n",marks[4]);
return 0;
}