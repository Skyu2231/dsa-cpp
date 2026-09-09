#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char chr;
    cin>>chr;
    for(int i=0; i<str.size(); i++){
        if( str[i]!=chr){
            cout<<str[i];
        }
    }
    cout<<endl;
} 
