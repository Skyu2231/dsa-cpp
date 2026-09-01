#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int countAlPrime=0;
        for(int j=1; j<=i; j++){
            if( i%j==0){
                countAlPrime++;
            }
        }
        if(countAlPrime<=4){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}