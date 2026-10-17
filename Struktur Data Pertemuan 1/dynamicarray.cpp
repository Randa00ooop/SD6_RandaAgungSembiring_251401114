#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n;

    int *arr = new int[n];

    cout << "Masukkan jumlah data : ";
    cin >> n;

    cout << "Imputasi data\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Output data\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Data ke-" << i + 1 << " : " << arr[i] << endl;
    }

    delete[] arr;
    return 0;
}