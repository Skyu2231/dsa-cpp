#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int countA=0, countB=0;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a'){
            countA++;
        }
        else{
            countB++;
        }
    }
    if(countA==countB){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}