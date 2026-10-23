#include <iostream>
#include <set>
using namespace std;
int main(){
    #define int long long
    int n,targetSum;
    cin>>n>>targetSum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pre=0;
    set<int> st;
    for(int i=0; i<n; i++){
        pre+=arr[i];
        if(pre==targetSum){
            cout<<"YES"<<endl;
            return 0;
        }
        if(st.find(pre-targetSum)!=st.end()){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            st.insert(pre);
        }
    }
    cout<<"NO"<<endl;
}