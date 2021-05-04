#include <iostream> 
#include <stdexcept> // Devemos incluir a biblioteca que contem as excessoes base

using namespace std;

class ErroDiv : public runtime_error{ //herda de classe base mais geral
    public:
        ErroDiv()
            : runtime_error("Divisao por zero!") {} // mensagem de erro

};

int divisao(int a, int b){ // funcao para criacao de um vetor de tamanho dado pelo usuario
    if(b == 0){
        throw ErroDiv(); // caso o denominador seja 0, joga a excessao
    }
    return a/b;         // caso contrario, opera normalmente
}
int main(){
    int a, b;

    cout << "Entre com o valor do numerador"<< endl;
    cin >> a;
    cout << "Entre com o valor do denominador"<< endl;
    cin >> b;
  
    try{
       cout << "Resultado da divisao: " << divisao(a,b) << endl; // tenta executar este bloco do try
       
    }   
    catch(ErroDiv& ex){ // caso alguma excessao ocorra, verifica as possibilidades no catch e executa os comandos do bloco
        cout << "Excessao capturada: " << ex.what() << endl;
    }
    
    return 0;
}