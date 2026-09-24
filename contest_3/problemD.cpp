#include <iostream>
using namespace std;
int main(){
    string t;
    cin>>t;
    int hour;
    int  min;
    hour= (t[0]-'0')*10+(t[1]-'0');
    min= (t[3]-'0')*10+(t[4]-'0');
    // cout<<hour<<endl;
    // cout<<min<<endl;
    if(hour==min){
        cout<<"Mogambo is happy";
    }
    else{
        cout<<"Mogambo is sad";
    }
    cout<<endl;
}