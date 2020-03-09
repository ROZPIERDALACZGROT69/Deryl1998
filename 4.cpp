#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main (){
    int dlugosc,dlugosc2=0,dlugosc3=0;
    string pytanie;
    char litera;
string zdanie;
cout << "Wprowadz zdanie "<< endl;
getline( cin, zdanie );
dlugosc=zdanie.size();
dlugosc2=dlugosc;
cout << "Pominac jakas litere przy przeliczaniu ? "<< endl; cin >> pytanie;
if (pytanie == "tak" || pytanie == "t") { cout << "jaka? "<< endl; cin >> litera; }
for (int i=0;i<dlugosc;i++){
    cout << zdanie[i];
    if (pytanie == "tak" || pytanie == "t" && zdanie[i]==litera ) {dlugosc3++; }
    if (zdanie[i]==' '){ cout << endl; dlugosc2--; }

}
cout << endl;
cout <<"Dlugosc " << dlugosc << endl;
cout <<"Dlugosc bez spacji " << dlugosc2 << endl;
cout <<"Dlugosc bez wybranej litery " << dlugosc-dlugosc3 << endl;
}
