#include <iostream>
using namespace std;
int main(){
    #define int long long
    int n, q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int p[n];
    int sum=0;
    int count=0;
    for(int i=0; i<n ;i++){
        if(count%2==0){
            sum+=arr[i];
        }
        else{
            sum-=arr[i];
        }
        p[i]=sum;
        count++;
    }
    while(q>0){
        int l,r; 
        cin>>l>>r;
        int ans;
        if(l==1){
            ans=p[r-1];
        }
        else{
            ans=(p[r-1]-p[l-2]);
        }
        if(l%2==0){
            cout<<-ans;
        }
        else{
            cout<<ans;
        }
        cout<<endl;
        q--;
    }
}
