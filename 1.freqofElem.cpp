#include<bits/stdc++.h>
using namespace std;
void freofele(vector<int> &arr,int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    cout<<"frequency of elements"<<endl;
    for(auto it:mpp){
        cout<<it.first<<" - "<<it.second<<endl;
    }
    
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    freofele(arr,n);
    return 0;
   
}
