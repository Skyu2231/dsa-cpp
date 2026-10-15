#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    set<int> st;
    int count=0;
    for(int i=0; i<n; i++){
        if(st.find(arr[i])!=st.end()){
            count++;
        }
        else{
            st.insert(arr[i]);
        }
    }
    cout<<(n-count)<<endl;
}