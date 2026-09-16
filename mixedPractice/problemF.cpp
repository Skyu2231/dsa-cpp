#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase>0){
        string in;
        cin>>in;
        int i=0;
        while(i<in.size()){
        int j=i;
        int count=0;
        while(j<in.size() and in[i]==in[j]){
            count++;
            j++;
        }
        cout<<in[i];
        if(count>1){
            cout<<count;
        }
        i=j;
    }
    cout<<endl;
    testcase--;
}
}