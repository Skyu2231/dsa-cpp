#include <iostream>
using namespace std;
int main(){
    int i, input;
    cin>>input;
    for(i=1;i<=input;i++){
        if(input%i==0){
            cout<<i<<" ";
        }
    }
}