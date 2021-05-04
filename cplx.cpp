#include <iostream>

using namespace std;

class Complexo{
    private:
        double re, im;
    public:
        Complexo(double real, double imag){
            re = real;
            im = imag;
        }
        ~Complexo() {}
        double get_real() {return re;}
        double get_imag() {return im;}

        Complexo operator+(Complexo& c){
            double r, i;
            r = re + c.get_real();
            i = im + c.get_imag();

            return Complexo{r,i};
        }
        Complexo operator-(Complexo& c){
            double r, i;
            r = re - c.get_real();
            i = im - c.get_imag();
            
            return Complexo{r,i};
        }
        friend ostream& operator<<(ostream& output, const Complexo& c){
            output << c.re << " + i " << c.im << endl;
            return output;
        }
       /*
        Complexo adicionar(Complexo& c){
            re += c.get_real();
            im += c.get_imag();
            return *this; 
        }
        Complexo subtrair(Complexo& c){
            re -= c.get_real();
            im -= c.get_imag();
            return *this; 
        }
        void print(){
            cout << re << " + i" << im << endl;
        }
        */
};

int main(){
    Complexo a{10,0};
    Complexo b{10,15};
    /*
    a.print();
    b.print();

    a.adicionar(b);
    b.subtrair(a);

    a.print();
    b.print();
    */
    cout << a << endl;
    cout << b << endl;

    a = a+b;
    b = b-a;

    cout << a << endl;
    cout << b << endl;

    return 0;
}
