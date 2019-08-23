#include <iostream>


using namespace std;
int potenciaRecursiva(int base, int potencia){
    if(potencia==0){
        return 1;
    }else{
        return base * potenciaRecursiva(base,potencia-1);
    }


}

int main() {
    int base = 3;
    int exponente = 4;
   cout<<base<<" elevado a la " <<exponente <<" es: "<<potenciaRecursiva(base,exponente);
}