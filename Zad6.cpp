#include <iostream>
using namespace std;

int main(){
    string tekst1;
    string tekst2;
    int ileZnakow = 0;
    int maxZnakow = 0;
    bool takieSame[122] = {0};
    string maxPodciag;

    cout << "Podaj tekst1: ";
    getline(cin, tekst1);
    cout << "podaj tekst2: ";
    getline(cin, tekst2);

    for(int i = 0; i < tekst1.length(); i++){
        for(int j = 0; j < tekst2.length(); j++){
            if(tekst1.at(i) == tekst2.at(j)&& takieSame[tekst1.at(i)] == 0){
                takieSame[tekst1.at(i)] = 1;
                while((i + ileZnakow < tekst1.length()) && (j + ileZnakow < tekst2.length()) && (tekst1.at(i + ileZnakow) == tekst2.at(j + ileZnakow))){
                    ileZnakow++;
                }
                if(ileZnakow > maxZnakow){
                    maxZnakow = ileZnakow;
                    maxPodciag = tekst1.substr(i, ileZnakow);
                }
            }
        }
    }
    cout << "\nnajdluzszy wspolny podciag: " << maxPodciag << "\t" << maxZnakow << " znakow.\n";
}
