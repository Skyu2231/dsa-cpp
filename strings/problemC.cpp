#include <iostream>
using namespace std;
int main(){
    char characters;
    cin>>characters;
    int charInt = int(characters);
    if(charInt>=48 and charInt<=57){
        cout<<"Digit"<<endl;
    }
    else if( charInt>=65 and charInt<=90){
        cout<<"Uppercase"<<endl;
    }
    else if(charInt>=93 and charInt<=118){
        cout<<"Lowercase"<<endl;
    }
    else if((charInt>=33 and charInt<=47) or (charInt>=58 and charInt<=64)){
        cout<<"Special"<<endl;
    }
}