#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    char pattern='*';
    for(i=0;i<n;i++){
        if(i==0 or i==n-1){
            for(j=0;j<n;j++){
                cout<<pattern;
            }
        }
        else{
            cout<<pattern;
            for(j=1;j<n-1;j++){
                cout<<" ";
            }
            cout<<pattern;
        }
        cout<<endl;
    }
}