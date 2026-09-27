#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums;
    // for(int i=0; i<nums.size(); i++){
    //     cin>>nums[i];
    // }
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}