#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    // int *arrayptr=arr;
    printf("the address of elements at first position is %d\n",&arr[0]);
    printf("the address of elements at first position is %d\n",arr);
    printf("the address of elements at second position is %d\n",&arr[1]);
    printf("the address of elements at second position is %d\n",arr+1);
    // arrayptr++; or arrayptr--;
    printf("the address of elements at third position is %d\n",&arr[2]);
    printf("the address of elements at third position is %d\n",arr+2);
    printf("the address of elements at fourth position is %d\n",&arr[3]);
    printf("the address of elements at fourth position is %d\n",arr+3);
    printf("the value at the address of elements at first position is %d\n",*arr);
    printf("the value at the address of elements at first position is %d\n",arr[0]);
    printf("the value at the address of elements at second position is %d\n",*(arr+1));
    printf("the value at the address of elements at third position is %d\n",*(arr+2));
    printf("the value at the address of elements at fourth position is %d\n",*(arr+3));
    printf("the value at the address of elements at first position is %d\n",*(&arr[0]));
    printf("the value at the address of elements at second position is %d\n",*(&arr[1]));
    printf("the value at the address of elements at third position is %d\n",*(&arr[2]));
    printf("the value at the address of elements at fourth position is %d\n",*(&arr[3]));
return 0;
}