#include <iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count;
}