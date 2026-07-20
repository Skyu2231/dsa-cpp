#include <iostream>
using namespace std;
int main(){
    int i,j;
    // for(i=0;i<5;i++){
        for(j=5;j>0;j--){
            // cout << "*" * j << endl;
            for(int k =0; k<j ;k++){
                cout << "*";
            }
            cout << endl;
        }
    // }
}