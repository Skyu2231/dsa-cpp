#include <iostream>
using namespace std; 
int main(){
    #define int long long
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int p[n];
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        p[i]=sum;
    }
    for(int l=0; l<n; l++){
        for(int r=l; r<n; r++){
            if(l==0){
                cout<<p[r];
            }
            else{
                cout<<(p[r]-p[l-1]);
            }
            // cout<<endl;
            cout<<'\n';
        }
    }
}