#include <iostream>
#include <math.h>
using namespace std;

class Angulo{
    public:
        int angulo;

    Angulo(){
        angulo = 0;
    }
    Angulo(int a){
        angulo = a;
    }
    get_angulo(){
        return angulo;
    }
    double radiano(){
        return ((angulo*3.14159265359)/180);
    }
    double seno(){
        return sin(radiano());
    }
    double cosseno(){
        return cos(radiano());
    }
    double tangente(){
        return tan(radiano());
    }
    double complementar(){
        return 90-angulo;
    }
    explicit operator double() const{
        return angulo;
    }

    friend ostream& operator<<(ostream& out, const Angulo& a){
        out << a.angulo;
        return out;
    }
    friend istream& operator>>(istream& in, Angulo& a){
        in >> a.angulo;
        return in;
    }
    Angulo operator+(Angulo& a){
        int An;
        An = angulo + a.get_angulo();
        return Angulo{An};
    }
    Angulo operator-(Angulo& a){
        int An;
        An = angulo - a.get_angulo();
        return Angulo{An};
    }
};

int main(){
    Angulo a1{30};
    Angulo a2{60};

cout << "Angulo 1 = " << endl;
cout << a1 << endl;
cout << "Seno: " <<  a1.seno() << endl;
cout << "Cosseno: " <<  a1.cosseno() << endl;
cout << "Tangente: " <<  a1.tangente() << endl;
cout << "Complementar:" <<  a1.complementar() << endl;

cout << endl;

cout << "Angulo 2 = " << endl;
cout << a2 << endl;
cout << "Seno: " <<  a2.seno() << endl;
cout << "Cosseno: " <<  a2.cosseno() << endl;
cout << "Tangente: " <<  a2.tangente() << endl;
cout << "Complementar:" <<  a2.complementar() << endl;

cout << endl;


cout << "Angulo 1 + Angulo 2 = " << a1+a2 << endl;
cout << "Angulo 1 - Angulo 2 = " << a1-a2 << endl;

cout << endl;

cout << "Angulo 1 formato Double: " << (double)a1 << endl;
cout << "Angulo 2 formato Double: " <<  (double)a2 << endl;


return 0;
}