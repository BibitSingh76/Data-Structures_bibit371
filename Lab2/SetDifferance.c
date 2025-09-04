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
    int krr[max+1-min];//yaha ham kevale min ki shifting kar rahe hai
    for(int i=0;i<max+1-min;i++){
        krr[i]=0;
    }
    int x;
    for(int i=0;i<n;i++){
        x=arr[i]-min;//index ko min se sift kar rahe hai (min may be -ve or +ve)
        krr[x]+=1;
    }
    printf("this is setDifferance = ");
    for(int i=0;i<m;i++){
        x=brr[i]-min;//index shiftin har jagah ho rahi toh yaha bhi
        if(krr[x]>0){//agar b ke element ki already krr me hai toh matlab A me element hai B wala 
            krr[x]=0;//krr me 0 kar diya taki krr me paha chale ki koi frequency hi nahi thi
        }
    }
    for(int i=0;i<max+1-min;i++){
        if(krr[i]!=0) printf("%d ",i+min);//index min ki shifting ki hai toh (i+min) print karana hoga
    }
}