#include <iostream>
using namespace std;
int main(){
    int i=0,n;
    cin>>n;
    int arr[n];
    int pos=0,neg=0,even=0,odd=0;
    while(i<n){
        cin>>arr[i];
        if(arr[i]>0){
            pos++;
            if(arr[i]%2==0 ){
                even++;
            }
            else{
                odd++;
            }
        }
        else{
            if(arr[i]!=0){
                neg++;
            }
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        i++;
    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}