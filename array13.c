// arrays as function argument.
void printnumbers(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumbers(arr,6);
return 0;
}