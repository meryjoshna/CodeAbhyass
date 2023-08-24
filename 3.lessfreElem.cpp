#include<bits/stdc++.h>
using namespace std;
int minfreEle(vector<int> &arr,int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int min=INT_MAX;
    for(auto it:mpp){
        if(it.second<min){
            min=it.first;

        }
        
    }
    return min;
    
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele=minfreEle(arr,n);
    cout<<"less frequently occuring element is "<<ele<<endl;
    return 0;
   
}
