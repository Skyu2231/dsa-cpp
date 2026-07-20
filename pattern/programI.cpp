#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int num0=0;
    int num1=1;
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(count%2==0){
                cout<<num0;
            }
            else{
                cout<<num1;
            }
            count++;
        }
        if(i%2==0){
            count=1;
        }
        else{
            count=0;
        }
        cout<<endl;

    }
}