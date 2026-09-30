#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int num=1;
    char ch='a';
    int count=0;
            for(int j=0; j<m*n; j++){
                if(j%2==0){
                    if(num!=9 ){
                        cout<<num++;
                    }
                    else{
                        cout<<num;
                        num=1;
                    }
                }
                else{
                    if( ch!='z'){
                        cout<<ch++;
                    }
                    else{
                        cout<<ch;
                        ch='a';
                    }
                }
                count++;
                if(count==m){
                    cout<<endl;
                    count=0;
                }
            }
}

