#include<bits/stdc++.h>
using namespace std;
void sLarSmal(vector<int> &arr,int n){
    vector<int> ans;
    int largest=INT_MIN;
    int slargest=INT_MIN;
    int smallest=INT_MAX;
    int secsma=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];

        }
        else if(arr[i]>slargest && arr[i]!=largest ){
            slargest=arr[i];
        }
        if(arr[i]<smallest){
            secsma=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secsma && arr[i]!=smallest){
            secsma=arr[i];
        }
    }
    cout<<slargest<<" "<<secsma<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sLarSmal(arr,n);
    return 0;

}
