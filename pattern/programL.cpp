#include <iostream>
using namespace std;
int main(){
    int i,j,n,count;
    cin>>n;
    for(i=0;i<n;i++){
        count=i;
        while(count<n-1){
            cout<<" ";
            count++;
        }
            for(j=0;j<=i;j++){
                    cout<<"*"<<" ";
            }
          cout<<endl;
        }
}