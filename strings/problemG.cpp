#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char c1, c2;
    cin>>c1>>c2;
    for(int i=0; i<str.size(); i++){
        if( str[i]==c1){
            str[i]=c2;
        }
    }
    cout<<str<<endl;
} 
