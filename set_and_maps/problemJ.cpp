#include <iostream>
#include <map>
using namespace std; 
int main(){
    #define int long long
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=0;
    map <int, int> mp;
    for(int i=0; i<n; i++){
        int req= x-arr[i];
        if(mp.find(req)!=mp.end()){
            ans+=mp[req];
        }
            mp[arr[i]]++;
    }
    cout<<ans<<endl;
}