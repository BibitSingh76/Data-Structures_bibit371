#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int x;
    printf("delete element at index =");
    scanf("%d",&x);
    for(int i=x;i<(sizeof(arr)/sizeof(int))-1;i++){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<(sizeof(arr)/sizeof(int))-1;i++){
        printf("%d ",arr[i]);
    }
}