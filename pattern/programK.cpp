#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    char symbol = '*';
    cin>>n;
    for(i=0;i<2*n-1;i++){
        if(i<n-1){
            if(i==0){
                cout<<symbol<<endl;
            }
            else{
                cout<<symbol<<" ";
                for(j=1;j<i;j++){
                    cout<<" ";
                }
                cout<<symbol<<" "<<endl;
            }
        }
        else{
            if(i==2*n-2){
                cout<<symbol<<endl;
            }
            else{
                cout<<symbol<<" ";
                for(j=i+2;j<2*n-1;j++){
                    cout<<" ";
                }
                cout<<symbol<<" "<<endl;
            }
        }
    }
}