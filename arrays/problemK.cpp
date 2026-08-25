#include <iostream>
using namespace std;
int main(){
    int n,nArr;
    cin>>nArr;
    while(nArr>0){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=1; i<n; i+=2){
            swap(a[i-1],a[i]);
        }
        for(int i=0; i<n ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        nArr--;
    }
}
