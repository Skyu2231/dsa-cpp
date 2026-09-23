#include <iostream>
using namespace std;
int main(){
    string t;
    cin>>t;
    string hourStr;
    string minStr;
    hourStr= t[0]+t[1];
    minStr= t[3]+t[4];
    int hour = (hourStr[0]+hourStr[1])-'0';
    int min = (minStr[0]+minStr[1])-'0';
    cout<<hour<<endl;
    cout<<min<<endl;
}