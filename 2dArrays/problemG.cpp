#include <iostream>
using namespace std;
int main(){
    int r, c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    int pos=-1, max1=0;
    for(int i=0; i<r; i++){
        int c1=0;
        for(int j=0; j<c; j++){
            if(a[i][j]==1){
                c1++;
            }
        }
        if(c1>max1){
            max1=c1;
            pos=i;
        }
    }
    cout<<pos<<endl;
}