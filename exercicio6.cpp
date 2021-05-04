#include <iostream>
#include <math.h>
using namespace std;

class Triangulo{
    public:
        int a, b, c;
        Triangulo();
        Triangulo(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }
        print_tipo(){ 
            if((a + b + c) != 180) {
                cout << "Angulos invalidos!" << endl;
            } 
            else if((a == b) && (b == c) ){
                cout << "Triangulo Equilatero!" << endl;
                if((a == b) || (a == c) || (b == c)){
                cout << "Triangulo Isosceles!" << endl;
            }
            }
            else if((a == b) || (a == c) || (b == c)){
                cout << "Triangulo Isosceles!" << endl;
            }
            else if((a != b) && (a != c) && (b != c) ){
                cout << "Triangulo Escaleno!" << endl;
            }
        }  
};

int main(){
    int x, y, z;
    cout << "Entre com o primeiro angulo: " << endl;
    cin >> x;
    cout << "Entre com o segundo angulo: " << endl;
    cin >> y;
    cout << "Entre com o terceiro angulo: " << endl;
    cin >> z;

    Triangulo t(x,y,z);

    t.print_tipo();


    return 0;
}