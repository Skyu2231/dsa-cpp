#include <iostream>
using namespace std;
int main(){
    int arrSize;
    cin>>arrSize;
    int arr[arrSize];
    for(int i=0; i<arrSize; i++){
        cin>>arr[i];
    }
    //printing reverse
    for(int i=arrSize-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}