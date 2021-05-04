#include <iostream>
#include <string>
using namespace std;

class Paciente{
    private:
        string nome;
        float peso, altura;
    public:
        Paciente(string n, float w, float h){
            nome = n;
            peso = w;
            altura = h;
        }
        string get_nome(){
            return nome;
        }
        float get_peso(){
            return peso;
        }
        float get_altura(){
            return altura;
        }
        float get_imc(){
            return (peso/(altura*altura));
        }
        int print_info(){
            cout << "Nome: " << nome << endl;
            cout << "Peso: " << peso << endl;
            cout << "Altura: " << altura << endl;
            cout << "IMC: " << get_imc() << endl;
        }
        void ver_imc(){
            if (get_imc() < 27){
                cout << nome << " esta saudavel pra caralho!" << endl;
            }
            if(get_imc() > 27){
                cout << nome << " precisa fazer uma dieta!" << endl;
            }
        }
};

int main(){
    string nome1, nome2;
    float peso1, peso2, altura1, altura2;
    cout << "Inicialize os dados do primeiro paciente: " << endl;
    cout << "Nome: " << endl;
    cin >> nome1;
    cout << "Peso: " << endl;
    cin >> peso1;
    cout << "Altura: " << endl;
    cin >> altura1;

    Paciente p1(nome1, peso1, altura1);

    cout << "Inicialize os dados do segundo paciente: " << endl;
    cout << "Nome: " << endl;
    cin >> nome2;
    cout << "Peso: " << endl;
    cin >> peso2;
    cout << "Altura: " << endl;
    cin >> altura2;

    Paciente p2(nome2, peso2, altura2);

    p1.print_info();
    p1.ver_imc();
    cout << endl;
    p2.print_info();
    p2.ver_imc();

}