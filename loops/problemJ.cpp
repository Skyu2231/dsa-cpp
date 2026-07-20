#include <iostream>
using namespace std;
int main(){
    long long x;
    int n;
    cin>>x>>n;
    long long xN=1;
    if(n==0){
        cout<<1;
    }
    else{
    while(n>0){
        xN*=x;
        n--;
    }
    cout<<xN;
}
}