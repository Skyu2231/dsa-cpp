#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n%2==0){
        cout<<a[n/2-1]<<" "<<a[n/2]<<" ";
        if(n>=4){
            for(int i=1; i<=n/2-1; i++){
                cout<<a[n/2-1-i]<<" "<<a[n/2+i]<<" ";
            }
        }
    }
    else{
        cout<<a[n/2]<<" ";
        if(n>=3){
            for(int i=1; i<=n/2; i++){
                cout<<a[n/2-i]<<" "<<a[n/2+i]<<" ";
            }
        }
    }
    cout<<endl;
}