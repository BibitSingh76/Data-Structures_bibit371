#include<stdio.h>
int main(){
    int arr[5] ={1,3,5,6,8};
    int brr[7] ={2,4,7,9,10,14,18};
    int n=5,m=7;
    int krr[n+m];
    
    int i=0,j=0,k=0;
    while(i<5 && j<4){
        if(arr[i]<=brr[j]){
            krr[k]=arr[i];
            i++;
            k++;
        }
        else{
            krr[k]=brr[j];
            j++;
            k++;
        }
    }
    if(i<n){
        while(i<n){
        
            krr[k]=arr[i];
            k++;
            i++;
        }
    
    }
    if(j<m){
        while(j<m){
        
            krr[k]=brr[j];
            k++;
            j++;
        }
    }

    for(int i=0;i<n+m;i++){
        printf("%d ",krr[i]);
    }

}