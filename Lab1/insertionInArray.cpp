#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int x;
    cout<<endl;
    cout<<"enter index less than or equale to size of vector";
    cin>>x;
    if(x>v.size()){
        cout<<"error";
        return 0;
    }
    int y;
    cout<<"enter vlaue";
    cin>>y;
    v.push_back(y);
    for(int i=v.size()-1;i>0;i--){
        if(i==x) break;
        swap(v[i],v[i-1]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}