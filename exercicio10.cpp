#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    private:
        string nome;
        float hora, vhora, salario;
    public:
        Funcionario(string n, float h, float vh){
            nome = n;
            hora = h;
            vhora = vh;
        }
        float calc_salario(){
            return (hora*vhora); 
        }
        string get_nome(){
            return nome;
        }
        float get_hora(){
            return hora;
        }
        float get_vhora(){
            return vhora;
        }
        float get_salario(){
            return salario;
        }
        void print_info(){
            cout << "Nome: " << nome << endl;
            cout << "Horas trabalhadas: " << hora << endl;
            cout << "Valor-Hora: " << vhora << endl;
            cout << "Salario final: " << calc_salario() << endl;
        }
};

int main(){
    Funcionario f1("Marcos", 20, 3.5);
    Funcionario f2("Mateus", 40, 5.5);
    Funcionario f3("Lucas", 40, 13.5); 

    f1.print_info();
    cout << endl;
    f2.print_info();
    cout << endl;
    f3.print_info();

    return 0;
}