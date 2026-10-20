#include <iostream>
// #include <set>
#include <map>
using namespace std;
int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    map<int,int> mp;
    bool isFound=false;
    int required_element;
    int currentIndex=0;
    for(int i=0; i<n; i++){
        required_element= sum-arr[i];
        if(mp.find(required_element)!=mp.end()){
            currentIndex=i+1;
            // mp[required_element]=i+1;
            isFound=true;
            break;
        }
        else{
            mp[arr[i]]=i+1;
        }
    }
    if(isFound){
        int firstIndex= mp[required_element];
        int secondIndex = currentIndex;
        cout<<firstIndex<<" "<<secondIndex<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
