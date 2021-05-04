#include <iostream>
#include <string>
using namespace std;

class Conta_corrente{
    public:
    Conta_corrente(string n, string s, double d){
        nome = n;
        senha = s;
        saldo = d;
    }
    string get_nome(){
        return nome;
    }
    string get_senha(){
        return senha;
    }
    double get_saldo(){
        return saldo;
    }
    void set_nome(string n){
        nome = n;
    }
    void set_saldo(double d){
        saldo = d;
    }
    void cadastrar_senha(string p){
        senha = p;
    }
    double creditar(double v, string passw){
        if(passw == senha){
            saldo += v; 
        }
        if(passw != senha){
            cout << "Senha Incorreta!" << endl;
        }
    }
    double debitar(double v, string passw){
        if(passw == senha){
            saldo = saldo - v;
        }
        if(passw != senha){
            cout <<"Senha Incorreta!" << endl;
        }
    }
    int print_info(){
        cout << "Suas Informacoes:" << endl;
        cout << "Nome: " << get_nome() << endl;
        cout << "Saldo: " << get_saldo() << endl;
    }
    string alterar_senha(string p1, string p2){
        if(senha == p1){
            senha = p2;
        }
        if(senha != p1){
            cout << "Senha Incorreta!";
        }
    }   
    private:
        string nome, senha;
        double saldo;
    
};

int main(){
    string nome, senha, passwcd, passwold;
    double saldo, vc, vd;
    int op;
    Conta_corrente c1{"nome", "senha", 0.0};


cout << "Ola! Digite seu nome e sua senha para se cadastrar!" << endl;
cin >> nome >> senha;

c1.set_nome(nome);
c1.cadastrar_senha(senha);
c1.set_saldo(0);

c1.print_info();

cout << "Digite 1 para creditar, 2 para debitar e 3 para trocar de senha" << endl;
cin >> op;

    if(op == 1){
        cout << "Entre com o valor a ser creditado na conta:" << endl;
        cin >> vc;
        cout << "Entre com a senha da conta:" << endl;
        cin >> passwcd;
        c1.creditar(vc, passwcd);
        c1.print_info();
    }
    if(op == 2){
        cout << "Entre com o valor a ser debitado na conta:" << endl;
        cin >> vd;
        cout << "Entre com a senha da conta:" << endl;
        cin >> passwcd;
        c1.debitar(vd, passwcd);
        c1.print_info();
    }
    if(op == 3){
        cout << "Entre com a senha antiga da conta:" << endl;
        cin >> passwold;
        cout << "Entre com a senha nova da conta:" << endl;
        cin >> passwcd;
        c1.alterar_senha(passwold, passwcd);
        c1.print_info();
    }

    if(op != 1 && op != 2 && op != 3){
     cout << "Opcao invalida!" << endl;
    }

return 0;
}
