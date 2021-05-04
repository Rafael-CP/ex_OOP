#include <iostream>
#include <string>
using namespace std;

class Funcionario;
class Professor;
class Pessoa{
     friend class Funcionario;
     friend class Professor;
    private:
        string nome, sobrenome;
    public:
        Pessoa(){
            nome = "Jose";
            sobrenome = "Silva";
        }
        Pessoa(string n, string sn){
            nome = n;
            sobrenome = sn;
        }
        string get_nome(Professor& a){
            return nome;
        }
        string get_sobrenome(Professor& a){
            return sobrenome;
        }
        void set_nome(string n){
            nome = n;
        }
        void set_sobrenome(string sn){
            sobrenome = sn;
        }
        string nome_completo(){
            return (nome + " " + sobrenome);
        }
        
};
class Funcionario{
     friend class Professor;
     private:
        int matricula;
        double salario;
     public:
         int get_matricula(){
            return matricula;
        }
         double get_salario(){
            return salario;
        }
         void set_matricula(int m){
            matricula = m;
        }
         void set_salario(double s){
            if (s > 0){
                salario = s;
            }
            if (s < 0){
                cout << "O salario nao pode ser negativo!" << endl;
            }
        }
         double primeira_parcela(){
             return (salario*0.6);
         } 
         double segunda_parcela(){
             return (salario*0.4);
         } 
};

class Professor{
         friend class Pessoa;
         friend class Funcionario;
    public:
        string nome, sobrenome;
        int matricula;
        double salario;
        Professor(string n, string sn, int m, double s){
            nome = n;
            sobrenome = sn;
            matricula = m;
            salario = s;
        }
         double primeira_parcela(){
             return (salario);
         } 
         double segunda_parcela(){
             return 0;
         } 
};

int main(){
    Professor p1{"Jose", "Silva", 201803, 3000};
    Pessoa pe1{"Jose", "Silva"};

    cout << pe1.get_nome(p1) << endl;
    cout << pe1.get_sobrenome(p1) << endl;
    cout << pe1.nome_completo(p1) << endl;
    cout << p1.primeira_parcela() << endl;
    cout << p1.segunda_parcela() << endl;

    return 0;
}