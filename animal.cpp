#include <iostream>
using namespace std;

class Animal{
    public:
    
    void Locomover(){                                // funcao virtual, então ela permite o polimorfismo
    cout << "Locomovendo." << endl;
    }
};

class Homem : public Animal{
    void Locomover(){
        Animal::Locomover();                                    // Herda a funcao da classe Animal e especifica ainda mais a locomocao
        cout << "Homem: Andando" << endl;
    }
};
class Peixe : public Animal{
    void Locomover(){
        Animal::Locomover();
        cout << "Peixe: Nadando" << endl;
    }

};
class Sapo : public Animal{
    void Locomover(){
        Animal::Locomover();
        cout << "Sapo: Pulando" << endl;
    }

};

int main(){

Animal* h = new Homem; //O ponteiro pode ser do tipo Animal e apontar para qualquer herdeiro dessa classe
Animal* p = new Peixe;
Animal* s = new Sapo;

cout << "Um por vez: \n" << endl;
h->Locomover(); //A funcao Locomover será realizada de acordo com o objeto no qual o ponteiro de Animal esta apontando
p->Locomover();
s->Locomover();

Animal* v[3];//Com isso podemos até mesmo criar um vetor de Animal que recebe os três tipos!
v[0] = h; 
v[1] = p;
v[2] = s;

cout << "\nUtilizando vetor de animal: \n" << endl;
for(int i = 0; i < 3; i++){
    v[i]->Locomover(); // Ira imprimir a locomocao de cada animal especificado    
}

 return 0;
}



