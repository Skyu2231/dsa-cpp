#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min=0, pos=1;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
            pos=i+1;
        }
    }
    cout<<arr[min]<<" "<<pos;
}