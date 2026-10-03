#include <iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q>0){
        long long r,l;
        cin>>l>>r;
        long long sum;
        if(l!=0){
            sum = (r*(r+1))/2 - ((l-1)*l)/2;
        }
        else{
            sum =(r*(r+1))/2;
        }
        cout<<sum<<endl;
        q--;
    }
}