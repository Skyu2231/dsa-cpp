#include <iostream>
#include <cmath>
using namespace std;
int main(){
    #define int long long
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int p[n]={0};
    int sum=0;
    int div[100001]={0};
    for(int i=1;i<=100000; i++){
        for(int j=i;j<=100000;j+=i){
            div[j]++;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(div[arr[i]]==k){
            count++;
        }
        p[i]=count;
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