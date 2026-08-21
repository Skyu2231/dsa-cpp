#include <iostream>
using namespace std;
int fac(int num){
    int storeFac=1;
    for(int i=1;i<=num;i++){
        storeFac*=i;
    }
    return storeFac;
}
int bin(int n, int r){
    return fac(n)/(fac(n-r)*fac(r));
}

int main(){
    int n,r;
    cin>>n,r;
    int final_nCr= bin(n,r);
    cout<<final_nCr;
}