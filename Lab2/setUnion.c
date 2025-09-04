#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    printf("size of array A=");
    scanf("%d",&n);
    int arr[n];
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
        if(a>max) max=a;
        if(a<min) min=a;
    }
    printf("enter size of Array B=");
    scanf("%d",&m);
    int brr[m];
    for(int i=0;i<m;i++){
        int b;
        scanf("%d",&b);
        brr[i]=b;
        if(b>max) max=b;
        if(b<min) min=b;
    }

    // make a array size of max+1 and initialise from 0
    int krr[max+1-min];
    for(int i=0;i<max+1-min;i++){
        krr[i]=0;
    }

    int x;
    for(int i=0;i<n;i++){
        x=arr[i]-min;//yaha index shift kar rahe hai min se (min may be +ve or -ve)
        krr[x]+=1;
    }
    for(int j=0;j<m;j++){
        x=brr[j]-min;//yaha bhi shift kar diya hai
        krr[x]+=1;
    }
    printf("this is setUnio = ");
    for(int i=0;i<=max-min;i++){//sizeof(krr)/sizeof(int) galat ho sakta hai 
        //min se shifting ki hai toh print i+min (min may be +ve or -ve)
        if(krr[i]>0){
            printf("%d ",i+min);
        }
    }
}