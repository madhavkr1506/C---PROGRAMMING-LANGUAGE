// we can also subtract one pointer from other.
// we can also compare two pointers.
#include<stdio.h>
int main(){
    int age=22;
    int _age=23;
    int *ptr=&age;
    int *_ptr=&_age;
    printf("ptr = %u \n",ptr);
    printf("_ptr = %u \n",_ptr);
    printf("difference = %u \n",ptr-_ptr);
    _ptr=&age;
    printf("comparision  = %u \n",ptr==_ptr);

return 0;
}