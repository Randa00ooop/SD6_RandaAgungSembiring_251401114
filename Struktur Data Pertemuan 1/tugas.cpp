#include <iostream>
using namespace std;

int main(){
    system("cls");
    int array3[3][3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                array3[i][j][k]=i+j+k;
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                cout<<array3[i][j][k]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}