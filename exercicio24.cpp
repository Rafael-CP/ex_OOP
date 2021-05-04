#include <iostream>
#include <math.h>
using namespace std;

class Fracao{
    public:
        int numerador, denominador;
    Fracao(){
        numerador = 1;
        denominador = 1;
    }
    Fracao(int n, int d){
        numerador = n;
        denominador = d;
    }
    double get_num(){
        return numerador;
    }
    double get_den(){
        return denominador;
    }

    void print_fracao(){
        cout << numerador << "/" << denominador << endl;
    }
    Fracao operator+(Fracao& f){
        int somanum, somaden;
        somanum = (numerador* f.get_den()) + (f.get_num() * denominador);
        somaden = denominador * (f.get_den());
        return Fracao{somanum,somaden};
    }
    Fracao operator-(Fracao& f){
        int subnum, subden;
        subnum = (numerador* f.get_den()) - (f.get_num() * denominador);
        subden = denominador * (f.get_den());
        return Fracao{subnum,subden};
    }
    Fracao operator*(Fracao& f){
        int multnum, multden;
        multnum = (numerador * f.get_num());
        multden = (denominador * f.get_den());
        return Fracao(multnum, multden);
    }
    Fracao operator/(Fracao& f){
        int multnum, multden;
        multnum = (numerador * f.get_den());
        multden = (denominador * f.get_num());
        return Fracao(multnum, multden);
    }
    bool operator>(Fracao& f){
        if((numerador/denominador) > (f.get_num()/f.get_den())) return true;
        if((numerador/denominador) < (f.get_num()/f.get_den())) return false;
    }
    bool operator<(Fracao& f){
        if((numerador/denominador) < (f.get_num()/f.get_den())) return true;
        if((numerador/denominador) > (f.get_num()/f.get_den())) return false;
    }
    bool operator==(Fracao& f){
        if((numerador/denominador) == (f.get_num()/f.get_den())) return true;
        if((numerador/denominador) != (f.get_num()/f.get_den())) return false;
    }
    bool operator!=(Fracao& f){
        if((numerador/denominador) != (f.get_num()/f.get_den())) return true;
        if((numerador/denominador) == (f.get_num()/f.get_den())) return false;
    }
    friend ostream& operator<<(ostream& out, const Fracao& f){
        out << f.numerador << "/" << f.denominador << endl;
        return out;
    }
    friend istream& operator>>(istream& in, Fracao& f){
        in >> f.numerador >> f.denominador;
        return in;
    }

};

int main(){
    Fracao f1(1,1);
    Fracao f2(1,2);
    Fracao f3(1,1);
    cout << endl;
    cout << "Insira a Fracao 3: " << endl;
    cin >> f3;
    cout << "Fracao 1: " << f1 << endl;
    cout << "Fracao 1: " << f2 << endl;
    cout << "Fracao 3: " << f3 << endl;
    cout << "Soma = " << f1 + f2 + f3 << endl;
    cout << "Subtracao = " << f1 - f2 - f3<< endl;
    cout << "Multiplicacao = " << f1*f2*f3 << endl;
    cout << "Divisao = " << (f1/f2)/f3 << endl;

    if(f1 > f3){
        cout << "f1 > f3" << endl;
    }
    if(f1 < f3){
        cout << "f1 < f3" << endl;
    }
    if(f1 == f3){
        cout << "f1 = f3" << endl;
    }
    if(f1 != f3){
        cout << "f1 != f3" << endl;
    }

    return 0;
}