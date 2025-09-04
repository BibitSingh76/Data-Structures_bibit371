#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    printf("enter size of array A =");
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
    printf("enter size of array B =");
    scanf("%d",&m);
    int brr[m];
    for(int i=0;i<m;i++){
        int b;
        scanf("%d",&b);
        brr[i]=b;
        if(b>max) max=b;
        if(b<min) min=b;
    }
    int krr[max+1-min];
    for(int i=0;i<max+1-min;i++){
        krr[i]=0;
    }
    int x;
    for(int i=0;i<n;i++){
        x=arr[i]-min;//min se index ko shift kiya hai yaha(try to dry run)
        krr[x]+=1;
    }
    printf("these are intersection point = ");
    for(int i=0;i<m;i++){//array B par chala rahe hai
        x=brr[i]-min;//shifting ki wajah se iss index par dekhenge
        if(krr[x]>0){
            printf("%d ",x+min);//min may be -ve or +ve
            krr[x]=0;//jo ek baar intersection mil gaya toh dubara na mile
        }
    }
}