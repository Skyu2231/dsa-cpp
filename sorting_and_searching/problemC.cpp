#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    string keyString;
    cin>>keyString;
    bool isFound=false;
    int low=0, high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]>keyString){
            high=mid-1;
        }
        else if(arr[mid]<keyString){
            low=mid+1;
        }
        else if( arr[mid]==keyString){
            isFound=true;
            break;
        }
    }
    if(isFound){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}