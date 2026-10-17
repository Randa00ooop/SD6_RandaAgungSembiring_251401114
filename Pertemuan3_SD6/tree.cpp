#include <iostream>
using namespace std;

struct node {
    int data;
    node *kiri;
    node *kanan;
};

node *akar = NULL;

// PERBAIKAN: Menambahkan koma antara parameter
void addNode(node **akar, int value) { 
    if (*akar == NULL) {
        node *baru = new node;
        baru->data = value;
        baru->kiri = NULL;
        baru->kanan = NULL;
        *akar = baru;
    }
}

// PERBAIKAN: Menghapus parameter int akar yang ganda
void inOrder(node *akar) { 
    if (akar != NULL) {
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}

// PERBAIKAN: Menghapus parameter int akar yang ganda
void preOrder(node *akar) { 
    if (akar != NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}


void postOrder(node *akar) { 
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main() {
    // system("cls"); // Opsional: Aktifkan jika Anda menggunakan Windows OS
    
    addNode(&akar, 15);
    addNode(&akar->kiri, 27);
    addNode(&akar->kanan, 30);
    addNode(&akar->kiri->kiri, 25);
    addNode(&akar->kiri->kanan, 29);
    
    cout << "Tampilan InOrder: ";
    inOrder(akar);
    cout << "\nTampilan PreOrder: "; // Menambahkan \n agar rapi
    preOrder(akar);
    cout << "\nTampilan PostOrder: "; // Menambahkan \n dan titik dua
    postOrder(akar);
    
    return 0;
}
