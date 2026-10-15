#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]=i+1;
    }
    while(q>0){
        int num;
        cin>>num;
        if(mp.find(num)!=mp.end()){
            cout<<mp[num];
        }
        else{
            cout<<-1;
        }
        cout<<endl;
        q--;
    }
}