#include <iostream>
using namespace std;

int main(){
    int a;
    int* b = &a;
    int* c = &*b;
    int& d = a;

    cout << "Entre um numero:" << endl;
    cin >> a;  
    cout << "O valor de a eh " << a << " seu endereco de memoria: " << &a << endl;
    cout << "O valor do ponteiro b eh " << *b << " seu endereco de memoria: " << b << endl;
    cout << "O valor do ponteiro c eh " << *c << " seu endereco de memoria: " << c << endl;
    cout << "O valor da referencia d eh " << d << " seu endereco de memoria: " << &d << endl;

    return 0;
}