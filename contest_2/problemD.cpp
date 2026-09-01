#include <iostream>
using namespace std;
int fact(int n){
    int fac=1;
    if(n<=1){
        return fac;
    }
    for(int i=1; i<=n; i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    if(fact(num1)==fact(num2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}