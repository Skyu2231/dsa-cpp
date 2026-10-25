#include <iostream>
#include <map>
using namespace std;
int main(){
    #define int long long
    int n,targetSum;
    cin>>n>>targetSum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map <int,int> indx;
    int pre=0;
    for(int i=0; i<n ;i++){
        pre+=arr[i];
        if(pre == targetSum){
            indx[pre]=i+1;
            cout<<1<<" "<<indx[pre]<<endl;
            return 0;
        }
        if(indx[pre-targetSum]>0){
            cout<<indx[pre-targetSum]+1<<" "<<i+1<<endl;
            return 0;
        }
        if(indx.find(pre)!=indx.end()){
            continue;
        }
        else{
            indx[pre]=i+1;
        }
    }
    cout<<-1<<endl;
}