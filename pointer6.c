#include<stdio.h>
int square(int number){
    number= number*number;
    return number;
}
int _square(int *number){
    *number= ((*number)*(*number));
    return *number;

}
int main(){
    int number=4;
    printf("square is : %d \n",square(number));
    printf("number is : %d \n",number);
    printf("square is : %d \n",_square(&number));
    printf("number is : %d \n",number);
return 0;
}