#include <iostream>
using namespace std;
int main(){
    long long n,count;
    count=0;
    cin>>n;
    if(n==0){
        count=1;
    }
    while(n>0){
        if(n%10==0){
            count++;
        }
        n=n/10;
    }
    cout<<count;
}