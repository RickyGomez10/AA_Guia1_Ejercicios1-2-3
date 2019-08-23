#include <iostream>

using namespace std;


int menor(int A[], int tamano) {

    if (tamano == 0) {
        return A[0];

    } else {
        if (A[tamano] < menor(A, tamano - 1)) {
            return A[tamano];
        } else {
            return menor(A, tamano - 1);
        }
    }
}

int main() {
    int A[]={7,3,41,23,5,11,67};
    int tamano = sizeof(A)/sizeof(A[0]);

    cout<<"El menor numero de su arreglo es: "<<menor(A, tamano);
}