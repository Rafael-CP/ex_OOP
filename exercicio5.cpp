#include <iostream>
#include <math.h>
using namespace std;


class Quadrado{
    public:
        float a, b, c, delta;
        Quadrado();
        Quadrado(float x, float y, float z){
            a = x;
            b = y;
            c = z;
        }
    void delt(){
        delta = ((b*b) - (4*a*c));
    }
    int print_delta(){
        return delta;
    }
    float sol_pos(){
        return ((-b) + sqrt(delta))/2*a ;
    }
    float sol_neg(){
        return ((-b) - sqrt(delta))/2*a ;

    }
};

int main(){
    int a, b, c;

    cout << "Insira a" << endl;
    cin >> a;
    cout << "Insira b" << endl;
    cin >> b;
    cout << "Insira c" << endl;
    cin >> c;

    Quadrado seg(a,b,c);
    seg.delt();
    cout << "O discriminante da equacao e: " << seg.print_delta() << endl;
        if ((seg.print_delta()) < 0) {
        cout << "Nao ha solucao real" << endl; 
        }
        if ((seg.print_delta()) == 0){
        cout << "Raiz Unica!" << endl; 
        cout << "Solucao: " << seg.sol_pos() << endl;
        }
        if ((seg.print_delta()) > 0){
        cout << "Duas solucoes" << endl; 
        cout << "Solucao positiva: " << seg.sol_pos() << endl;
        cout << "Solucao negativa: " << seg.sol_neg() << endl;
        }  


    return 0;
}