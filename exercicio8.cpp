#include <iostream>
#include <string>
using namespace std;

class Data{
    public:
        int dia, mes, ano;
        int add;
        string month;

        Data(){
            dia = 1;
            month = "Janeiro";
            ano = 2000;
        }
        Data(int x, int  m, int y){
            dia = x;
            mes = m;
            ano = y;
        }
        int get_dia(){
            return dia;
        }
        string get_month(){
            return month;
        }
        void print_data(){
            cout << dia << " de " << month << " de " << ano << endl;
        }
        ver_data(){
            if (dia < 0 || dia > 31){
                cout << "Data invalida" << endl;
                exit(0);
            } 
            if (mes < 0 || mes > 12){
                cout << "Data invalida" << endl;
                exit(0);
            } 
            if (ano < 0){
                cout << "Data invalida" << endl;
                exit(0);
            }      
        }
        name_month(){
            if (mes == 1){
                month = "Janeiro";
            }
            else if (mes == 2){
                month = "Fevereiro";
            }
            else if (mes == 3){
                month = "Marco";
            }
            else if (mes == 4){
                month = "Abril";
            }
            else if (mes == 5){
                month = "Maio";
            }
            else if (mes == 6){
                month = "Junho";
            }
            else if (mes == 7){
                month = "Julho";
            }
            else if (mes == 8){
                month = "Agosto";
            }
            else if (mes == 9){
                month = "Setembro";
            }
            else if (mes == 10){
                month = "Outubro";
            }
            else if (mes == 11){
                month = "Novembro";
            }
            else if (mes == 12){
                month = "Dezembro";
            }
        }
        soma_day(int& n){
            add = n;
            dia = (dia-31+add);
            mes += (add/31);
            ano += (dia/365);
        }   
    friend class Texto;   
};

class Texto{
    public: 
        string dias, meses, anos;
        string dianum;

    Texto(){
        dias = "Um" ;
        meses = "Janeiro";
        anos = "2000";
    }
    Transf_dia(Data& d){
        if(d.get_dia() == 1){
            dianum = "Um";
        }
        if(d.get_dia() == 2){
            dianum = "Dois";
        }
        if(d.get_dia() == 3){
            dianum = "Tres";
        }
        if(d.get_dia() == 4){
            dianum = "Quatro";
        }
        if(d.get_dia() == 5){
            dianum = "Cinco";
        }
        if(d.get_dia() == 6){
            dianum = "Seis";
        }
        if(d.get_dia() == 7){
            dianum = "Sete";
        }
        if(d.get_dia() == 8){
            dianum = "Oito";
        }
        if(d.get_dia() == 9){
            dianum = "Nove";
        }
        if(d.get_dia() == 10){
            dianum = "Dez";
        }

    }
    print_datatext(Data& d){
        cout << dianum << " de " << d.get_month() << " de " << anos << endl;

    }

};

int main(){
    int d, m, a, adday;
    string mes;

    cout << "Insira o dia: " << endl;
    cin >> d;
    cout << "Insira o mes: (Em numero) " << endl;
    cin >> m; 
    cout << "Insira o ano: " << endl;
    cin >> a;

    Data date(d,m,a);

    date.ver_data();
    date.name_month();

    //Texto text(d, m, a);

    cout << "A data e: " << endl;
    date.print_data();

    cout << "Adicione os dianum: " << endl;
    cin >> adday;

    date.soma_day(adday);
    date.name_month();

    date.print_data();

    //text.print_datatext(date);




    return 0;
}