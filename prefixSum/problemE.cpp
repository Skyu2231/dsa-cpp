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
    int p[n];
    int sum=0;
    for(int i=0; i<n; i++){
        int sumDigit=0;
        while(arr[i]/10!=0){
            sumDigit+=(arr[i]%10);
            arr[i]/=10;
        }
        sumDigit+=arr[i];
        if(sumDigit==k){
            sum+=1;
        }
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