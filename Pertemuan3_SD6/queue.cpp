#include <iostream>
#include <queue>
using namespace std;

int main() {
    system("cls");
    queue <float> antrean;
    float input;

    while(cin >> input){
        antrean.push(input);
    }

    while (!antrean.empty()) {
        cout << antrean.front() << " ";
        antrean.pop();
    }

    cout << endl;
    system("pause");

    return 0;
}   