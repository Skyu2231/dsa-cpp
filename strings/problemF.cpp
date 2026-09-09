#include <iostream>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(s1<s2){
        cout<<"A"<<endl;
    }
    else if( s1==s2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"B"<<endl;
    }
} 
