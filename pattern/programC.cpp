#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    char pattern='*';
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<pattern;
        }
        cout<<endl;
    }
}