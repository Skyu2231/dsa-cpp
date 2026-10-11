#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    #define int long long
    int n, k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0 ){
            int j=n/i;
            if(i!=j){
                arr.push_back(i);
                arr.push_back(j);
            }
            else{
                arr.push_back(i);
            }
        }
    }
    sort(arr.begin(), arr.end());
    if(k>=1 and k<=arr.size()){
        cout<<arr[k-1]<<endl;
    } 
    else{
        cout<<"-1"<<endl;
    }
}