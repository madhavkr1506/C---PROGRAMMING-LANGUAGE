// write a function to reverse an arrays.
void ori(int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}
void rev(int arr[],int n){
    for (int j=n;j>=0;j--){
        printf("%d \t",arr[j]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    ori(arr,6);
    printf("\n");
    rev(arr,5);
    // printf("%d \n",ori(arr,6));
    // printf("%d \n",rev(arr,6));
return 0;
}