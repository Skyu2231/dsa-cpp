#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    bool isSpecialFacPresent= false;
    for( int i =1; i<=n ; i++){
        if(n%i==0){
            int num=i;
            if(num%10==2 or num%10==7){
                cout<<num<<" ";
                isSpecialFacPresent=true;
            }
        }
    }
    if(!isSpecialFacPresent){
        cout<<-1;
    }
    cout<<endl;
}