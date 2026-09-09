#include <iostream>
using namespace std;
int main(){
    char characters;
    cin>>characters;
    int charInt = int(characters);
    if( charInt>=65 and charInt<=90){
        charInt+=32;
        cout<<char(charInt)<<endl;
    }
    else{
        cout<<char(charInt)<<endl;
    }
}