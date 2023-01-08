// standard library function;
// strung comparision;
#include<stdio.h>
int main(){
    char firststr[]="radha";
    char secondstr[]="radhm";
    printf("%d",strcmp(firststr,secondstr));
return 0;
}
// compare two string and return value;
// 0 - equal
// positive - first > second (ascii)
// negative - first < second (ascii)
