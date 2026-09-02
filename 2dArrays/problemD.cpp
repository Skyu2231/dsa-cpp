#include <iostream>
using namespace std;
int main(){
    int r, c, key;
    cin>>r>>c>>key;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    bool isFound=false;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(a[i][j]==key){
                isFound=true;
            }
        }
    }
    cout<<boolalpha<<isFound<<endl; //boolalpha acts as a manipulator which returns 1 or 0 as true or false
}