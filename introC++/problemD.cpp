#include <iostream>
using namespace std;
int main(){
    for ( int i = 5; i> 0 ; i--){
        if (i!=5 && i!=1){
            for(int k=0; k<i-1; k++){
                cout<< " ";
            }
            cout << "*"<<endl;
        }
        else{
            if( i==1){
                cout<< "*****";
            }
            else{
            for ( int j = 0; j< i; j++){
                cout<< "*";
            }
            cout<< endl;
        }
    }
}
}