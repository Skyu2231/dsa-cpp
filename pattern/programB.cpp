#include <iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cin>>m>>n;
    char pattern='*';
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<pattern;
        }
        cout<<endl;
    }
}