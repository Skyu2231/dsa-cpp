#include <iostream>
using namespace std;
int main(){
    int count,inputN,n;
    cin>>n;
    count=0;
    for(int i=1;i<=n;i++){
        cin>>inputN;
        if(inputN%45==0 or 18%inputN==0){
            count++;
        }
    }
    cout<<count;
}