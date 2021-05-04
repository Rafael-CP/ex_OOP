#include <iostream>
#include <math.h>
using namespace std;

class Angulo{
    public:
        float grau;
    Angulo(){
        grau = 0;
    }
    Angulo(float a){
        grau = a;
    }
    ~Angulo(){ }

    float radiano(){
        return ((grau*3.14159265359)/180);
    }

    float seno(){
        return sin(radiano());
    }
    float cosseno(){
        return cos(radiano());
    }
    float tangente(){
        return tan(radiano());
    }
    float complementar(){
        return (90-grau);
    }
    
    Angulo operator+(Angulo& a);
    Angulo operator-(Angulo& a);

    friend ostream& operator<<(ostream&, const Angulo&);
    friend istream& operator>>(istream&, Angulo&);

};

ostream& operator<<(ostream& out, const Angulo& a){
        out << a.grau;
        return out;
    }

istream& operator>>(istream& in, Angulo& a){
        in >> a.grau;
        return in;
    }
   
Angulo Angulo::operator+(Angulo& a){
        float gra = grau + a.grau;
        return Angulo{gra};
}

Angulo Angulo::operator-(Angulo& a){
        float gra = grau + a.grau;
        return Angulo{gra};
}

int main(){
    float angulo, angulo2;
    
    cout << "Insira o primeiro e segundo angulo em graus: " << endl;
    cin >> angulo >> angulo2;

    Angulo g{angulo};
    Angulo g2{angulo2};

    cout << "Em radianos: " << endl;
    cout << g.radiano() << endl;

    cout << "Complementar: " << endl;
    cout << g.complementar() << endl;

    cout << "Seno: " << endl;
    cout << g.seno() << endl;

    cout << "Cosseno " << endl;
    cout << g.cosseno() << endl;

    cout << "Tangente: " << endl;
    cout << g.tangente() << endl;

    cout << "Soma: " << endl;

    cout << g + g2;

    return 0;
}