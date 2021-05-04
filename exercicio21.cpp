#include <iostream>
#include <string>
using namespace std;

class Tenis{
    private:
        string player, country;
        int ranking;
    public:
        Tenis(string p, string ct, int rank){
            player = p;
            country = ct;
            ranking = rank;
        }
        string get_nome(){
            return player;
        }
        int get_rk(){
            return ranking;
        }
        string get_ct(){
            return country;
        }
        void set_rk(int r){
            ranking = r;
        }
        void print_info(){
            cout << "Nome: " << player << endl;
            cout << "Pais: " << country << endl;
            cout << "Ranking: " << ranking << endl;
        }

        void print_fav(Tenis& t){
            if ((ranking < t.get_rk())){
                cout << "O jogador favorito e: " << player;
            }
            if ((ranking > t.get_rk())){
                cout << "O jogador favorito e: " << t.get_nome();
            }
        }

};

int main(){
    string nome1, nome2;
    Tenis p1{"Joao", "Brasil", 1};
    Tenis p2{"Jack","USA",3};

    p1.print_info();
    cout << endl;
    p2.print_info();
    cout << endl;

    p1.print_fav(p2);


return 0;
}