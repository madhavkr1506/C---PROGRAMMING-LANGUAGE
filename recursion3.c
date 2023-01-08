#include<stdio.h>
#include<math.h>
float converttemp(float celcius){
    float far=celcius*(9.0/5.0)+32.00;
    return far;
}
int main(){
    float far = converttemp(37);
    printf("far is : %f",far);
return 0;
}