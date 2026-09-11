#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool isFound=false;
    int low=0, high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]>key){
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else if( arr[mid]==key){
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