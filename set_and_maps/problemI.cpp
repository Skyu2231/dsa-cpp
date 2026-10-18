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
    // std::set<int> st;
    // int requiredElement;
    // bool isFound=false;
    // int reqIndex=1;
    // for(int i=0; i<n; i++){
    //     requiredElement= sum-arr[i];
    //     reqIndex++;
    //     if(st.find(requiredElement)!=st.end()){
    //         isFound=true;
    //         break;
    //     }
    //     else{
    //         st.insert(arr[i]);
            
    //     }
    // }
    // if(isFound==true){
    //     int target = sum-requiredElement;
    //     std::set<int>::iterator it = st.find(target);
    //     if(it != st.end()){
    //         auto index1 = distance(st.begin(),it);
    //         index1++;
    //         cout<<index1<<" "<<reqIndex<<endl;
    //     }
    // }
    // else{
    //     cout<<"-1"<<endl;
    // }
    map<int,int> mp;
    bool isFound=false;
    int required_element;
    for(int i=0; i<n; i++){
        required_element= sum-arr[i];
        if(mp.find(required_element)!=mp.end()){
            mp[required_element]=i+1;
            isFound=true;
            break;
        }
        else{
            mp[arr[i]]=i+1;
        }
    }
    if(isFound){
        int firstIndex= mp[sum-required_element];
        int secondIndex = mp[required_element];
        cout<<firstIndex<<" "<<secondIndex<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
