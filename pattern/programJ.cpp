#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    char symbol = '*';
    for(i=0;i<2*n-1;i++){
        if(i<n){
            for(j=0;j<=i;j++){
                cout<<symbol<<" ";
            }
            cout<<endl;
        }
        else{
            for(j=i;j<2*n-1;j++){
                cout<<symbol<<" ";
            }
            cout<<endl;
        }
    }
}