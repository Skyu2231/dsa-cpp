#include <iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int matrix[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>matrix[i][j];
        }
    }
    int gg= matrix[r-1][0];
    for(int i=r-1; i>=0; i--){
        if(matrix[i][0]!=-1){
            cout<<matrix[i][0];
        }
        else{
            return 0;
        }
    }
    for(int i=0; i<c; i++){
        if(matrix[0][i]!=-1){
            cout<<matrix[0][i];
        }
        else{
            return 0;
        }
    }
    for(int i=0; i<r; i++){
        if(matrix[i][c-1]=-1){
            cout<<matrix[i][c-1];
        }
        else{
            return 0;
        } 
    }
    for(int i=c-1; i>=0; i--){
        if(matrix[r-1][i]=-1){
            cout<<matrix[r-1][i];
        }
        else{
            return 0;
        }
    }
}