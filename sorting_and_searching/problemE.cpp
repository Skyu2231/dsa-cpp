#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for( int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=n-1; i>=1; i--){
        bool isSorted=false;
        int countSwap=0;
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                isSorted=true;
                countSwap++;
                swap(a[j],a[j+1]);
            }
        }
        cout<<"Pass "<<(n-i)<<": ";
        for(int k=0; k<n; k++){
            cout<<a[k]<<" ";
        }
        cout<<", "<<"swaps = "<<countSwap<<endl;
        if(!isSorted){
            break;
        }
    }
}