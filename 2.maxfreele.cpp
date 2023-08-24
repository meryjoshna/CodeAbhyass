#include<bits/stdc++.h>
using namespace std;
int maxfreEle(vector<int> &arr,int n){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int max=INT_MIN;
    for(auto it:mpp){
        if(it.second>max){
            max=it.first;

        }
        
    }
    return max;
    
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fre=maxfreEle(arr,n);
    cout<<"most frequently occuring element is "<<fre<<endl;
    return 0;
   
}
