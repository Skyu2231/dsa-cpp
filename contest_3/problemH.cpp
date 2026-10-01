#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    string maxString;
    if(s.size()>t.size()){
        maxString=s;
    }
    else{
        maxString=t;
    }
    int maxLength=max(s.size(), t.size());
    int minLength=min(s.size(), t.size());
    for(int i=0; i<minLength; i++){
        cout<<s[i];
        cout<<"-";
        cout<<t[i];
        if(i!=(minLength-1)){
            cout<<"-";
        }
    }
    if(maxLength!=minLength){
        cout<<"-";
        for(int i=minLength; i<maxLength; i++){
            cout<<maxString[i];
            if(i!=maxLength-1){
                cout<<"-";
            }
        }
    }
    cout<<endl;
}