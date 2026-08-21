#include <iostream>
using namespace std;
int main(){
    int  i, strHcf,inp1, inp2;
    cin>>inp1>>inp2;
    strHcf=1;
    for(i=1;i<=inp1;i++){
        if(inp1 % i==0 and inp2 % i==0){
            strHcf=i;
        }
    }
    cout<<strHcf;
}
