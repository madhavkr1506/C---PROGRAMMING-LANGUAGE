// write a program to print highest frequency character in a string.
int main(){
    char str[100],result;
    int i,len;
    int max=-1;
    int freq[256]={0};
    printf("enter any string : \n");
    gets(str);
    len=strlen(str);
    for (i=0;i<len;i++){
        freq[str[i]]++;
    }
    for(i=0;i<len;i++){
        if (max<freq[str[i]]){
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("the maximum occuring character in given string = %c",result);
return 0;
}