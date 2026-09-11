#include <iostream>
using namespace std;
int main(){
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;
    int isFound=false;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
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