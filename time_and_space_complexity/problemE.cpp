#include <iostream>
#include <cmath>
using namespace std;
int main(){
    #define int long long
    int n;
    cin>>n;
    int count=0;
    for(int i=1; i<=sqrt(n); i++){
        if((n)%i==0){
            int j=n/i;
            if(i!=j){
                count+=2;
            }
            else{
                count+=1;
            }
        }

    }
    cout<<count<<endl;
}