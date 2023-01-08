// create a two dimensional array, storing the table of 2 and 3;
#include<stdio.h>
int main(){
    int table[2][10];
    storetable(table,0,10,2);
    storetable(table,1,10,3);
    for (int i=0;i<10;i++){
        printf("%d \t",table[0][i]);
    }
    printf("\n");
    for (int i=0;i<10;i++){
        printf("%d \t",table[1][i]);
    }
    printf("\n");
return 0;
}
void storetable(int arr[][10],int n,int m,int num){
    for (int i=0;i<m;i++){
        arr[n][i]=num*(i+1);
    }
}