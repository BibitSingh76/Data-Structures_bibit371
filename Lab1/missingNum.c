#include<stdio.h>
int main(){
    int arr[10]={1,2,4,5,6,7,8,9,10};
    for(int i=1;i<=10;i++){
        int p=0;
        for(int j=0;(sizeof(arr)/sizeof(int));j++){
            if(i == arr[j]){
                p=1;
                break;
            }
        }
        if(p==0){
            printf("%d",i);
            return 0;
        }
    }
}