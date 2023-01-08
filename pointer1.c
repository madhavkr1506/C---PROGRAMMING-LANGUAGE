#include<stdio.h>
int main(){
    // float num=22.00;
    // float *ptr=&num;
    // float _num=*ptr;
    // printf("%f \n",num);
    // printf("%f \n",*ptr);
    // printf("%f \n",_num);
    char ch='*';
    char *ptr=&ch;
    char _ch=*ptr;
    printf("%c \n",ch);
    printf("%c \n",*ptr);
    printf("%c \n",_ch);
return 0;
}