#include <iostream>
using namespace std;
int main(){
    int asciiA = 65;
    for(int i=0;i<5;i++){
        char charA = static_cast<char>(asciiA++);
        cout << charA << endl;
    }
}