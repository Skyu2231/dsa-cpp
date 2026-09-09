#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string oldStr= str;
    int start=0,end=str.size()-1;
    while(start<=end){
        swap(str[start++],str[end--]);
    }
    if(oldStr==str){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
} 
