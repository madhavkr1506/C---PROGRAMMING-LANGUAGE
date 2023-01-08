#include<stdio.h>
int main(){
    int size;
    printf("no. of elements : ");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count,maxcount=0,maxele=-1;
    for (int i=0;i<size;i++){
        count=0;
        for (int j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count++;
                if(count>maxcount){
                    maxcount=count;
                    maxele=arr[i];
                }
            }
        }
    }
    printf("%d",maxele);

return 0;
}