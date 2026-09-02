#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    int maxAll=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]>=maxAll){
                maxAll=a[i][j];
            }
        }
    }
    cout<<maxAll<<endl;
}