#include <iostream>
using namespace std;
int main(){
    #define int long long
    int n,q;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>q;
    int p[n];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        p[i]=sum;
    }
    while(q>0){
        int l,r;
        cin>>l>>r;
        if(l==1){
            cout<<p[r-1];
        }
        else{
            cout<<(p[r-1]-p[l-2]);
        }
        cout<<endl;
        q--;
    }
}