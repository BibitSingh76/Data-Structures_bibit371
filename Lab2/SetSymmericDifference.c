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
    int krr[max+1-min];//size 0 max ->max+1 se But (-(-ve))->[-ve element ke size bhi add kar diya]
    for(int i=0;i<max+1-min;i++){
        krr[i]=0;
    }
    int x;
    for(int i=0;i<n;i++){
        x=arr[i]-min;//yaha par [-(-ve) add hoga] toh yaha hum arr[i] ki value ko (arr[i]+(min)) par rakh rahe hai (min=-ve or +ve dono ho sakta hai)
        krr[x]+=1;
    }
    for(int i=0;i<m;i++){
        x=brr[i]-min;
        if(krr[x]>0){// jo already exist karta hai use bhi hata do kyu ki dono me same ho gaye
            krr[x]=0;
        }
        else{
            krr[x]+=1;//jo nahi mila use ek bada denge
        }
    }

    printf("this is SetSymmetric Difference = ");
    for(int i=0;i<max+1-min;i++){
        if(krr[i]!=0) printf("%d ",i+min);//hamne har elment ko min shif karke stor kiya hai toh print bhi i+min
    }
}