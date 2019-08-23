#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int suma(int A[][3], int B[][3], int f, int c){
    if(f==0 && c == 0){
        cout<<f+1<<"-"<<c+1<<" : "<<A[f][c]+B[f][c]<<endl;
        return A[f][c]+B[f][c];
    }else{
        if(f> -1){
            c--;
            if(c >=-1){
               cout<<f+1<<"-"<<c+2<<" : "<<A[f][c+1]+B[f][c+1]<<endl;
                return A[f][c+1]+B[f][c+1] + suma(A,B,f,c);
            } else{

                return suma(A,B,f-1,2);
            }
        }
    }

}

int main(){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int filas = 2;// 2 ya que se empieza a contar en 0
    int columnas =2; // 2 ya que se empieza a contar en 0
    suma(A,B,filas,columnas);

}