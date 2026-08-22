#include <iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    bool ifPresent = false;
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            ifPresent=true;
            break;
        }
    }
    if(ifPresent){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}