#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,m; 
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cin>>m; 
    int arr2[m];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }
    int countElements=0;
    for(int elements : st){
        countElements++;
    }
    cout<<countElements<<endl;
    for(int elements : st){
        cout<<elements<<" ";
    }
    cout<<endl;
}