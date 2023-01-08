#include<stdio.h>
#include<math.h>
int calcpercentage(int math,int science,int sanskrit){
    int percentage=(math+science+sanskrit)/3;
    return percentage;
}
int main(){
    int science=98;
    int math=95;
    int sanskrit=99;
    printf("percentage is %d",calcpercentage(science,math,sanskrit));
return 0;
}