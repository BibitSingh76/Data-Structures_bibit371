#include<stdio.h>
#include<limits.h>
int main(){
    // int arr[12]={1,3,2,3,1,3,2,5,6,7,2,8};

    // brute force 1st method
    // int x=1;
    // for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    //     for(int j=i+1;j<sizeof(arr)/sizeof(int);j++){
    //            if(arr[i]==arr[j]){
    //                 x++;
    //                 arr[j]=-1;
    //            }
    //     }
    //     if(arr[i]!=-1){
    //         printf("%d => %d \n",arr[i],x);
    //     }
    //     x=1;
    // }

    //2nd method
    //  int arr[12]={1,3,2,3,1,3,2,5,6,7,2,8};
    // int maxElement=8;
    // int brr[9]={0,0,0,0,0,0,0,0,0};
    // for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    //     int x= arr[i];
    //     brr[x]=brr[x]+ 1;
    // }

    // for(int j=0;j<sizeof(brr)/sizeof(int);j++){
    //     if(brr[j]>0){
    //         printf("%d => %d\n",j,brr[j]);
    //     }
    // }


    //taking input by user
    int n;
    printf("enter element=");
    scanf("%d",&n);
    int arr[n];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
        if(a>max) max=a;
    }
    int brr[max+1];
    for(int i=0;i<=max;i++){
        brr[i]= 0;
    }

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        int x= arr[i];
        brr[x]=brr[x]+ 1;
    }

    for(int j=0;j<sizeof(brr)/sizeof(int);j++){
        if(brr[j]>0){
            printf("%d => %d\n",j,brr[j]);
        }
    }

}