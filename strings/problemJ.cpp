#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    for( int i=0; i<str.size(); i++){
        if(str[i]>='A' and str[i]<='Z'){
            cout<<char(int(str[i])+32);
        }
        else if(str[i]>='a' and str[i]<='z'){
            cout<<char(int(str[i])-32);
        }
    }
    cout<<endl;
} 
