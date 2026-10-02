#include <iostream>
#include <vector>
using namespace std;
int main(){
    int q,l,r;
    cin>>q;
    vector<int> arr;
    for(int i=0; i<arr.size(); i++){
        arr[i]=i+1;
    }
    vector<int>p;
    long long sum=0;
    for(int i=0; i<=r; i++){
        sum+=arr[i];
        p[i]=sum;
    }
    while(q>0){
        cin>>l>>r;
        long long sumLtoR;

        if(l==0){
            sumLtoR=p[r];
        }
        else{
            sumLtoR= p[r]-p[l-1];
        }
        cout<<sumLtoR<<endl;
        q--;
    }
}