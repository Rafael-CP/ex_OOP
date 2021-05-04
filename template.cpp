#include <iostream>

using namespace std;

template<typename T> // deve-se inserir esta linha antes da função/classe para declarar um template
T divisao(T& a, T& b){
    return a/b;
}

int main(){

    int a = 10, b = 5;
    float x = 5, y = 2;

    cout << "Divisao de inteiros: " << divisao(a,b) << endl;
                                                             // A mesma funcao, mas retornando tipos diferentes!
    cout << "Divisao de floats: " << divisao(x,y) << endl;

    return 0;
}