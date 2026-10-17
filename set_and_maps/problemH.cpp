#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    std::set<int> st;
    int requiredElement;
    bool isFound=false;
    for(int i=0; i<n; i++){
        requiredElement= sum-arr[i];
        if(st.find(requiredElement)!=st.end()){
            isFound=true;
            break;
        }
        else{
            st.insert(arr[i]);
        }
    }
    if(isFound){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}