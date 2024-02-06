#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Film {
    string naslov;
    string reziser;
    double ocjena;
};

void pretragaFilmova( vector<Film>& filmovi, double minOcjena){
    bool pronadjenFilm = false; // 

    for (const Film& film : filmovi){
        if (film.ocjena >= minOcjena ){
            cout<<film.naslov<< " - "<<film.reziser<< " - "<< film.ocjena <<endl;
            pronadjenFilm = true;
        }
    }
    if(!pronadjenFilm ){
        cout<<"nema filmova sa zadatom minimalnom ocjenom"<<endl;
    }

}

int main() {
    int brojFilmova;
    std::cout << "Unesite broj filmova: ";
    std::cin >> brojFilmova;

    // Kreiraj vektor filmova odgovarajuće veličine
    std::vector<Film> filmovi(brojFilmova);

    // Unesi podatke za svaki film
    for (int i = 0; i < brojFilmova; ++i) {
        std::cout << "Unesite informacije za film " << i + 1 << ":" << std::endl;
        std::cout << "Naslov: ";
        std::cin >> filmovi[i].naslov;
        std::cout << "Reziser: ";
        std::cin >> filmovi[i].reziser;
        std::cout << "Ocjena: ";
        std::cin >> filmovi[i].ocjena;
    }

    double minOcjena;
    std::cout << "Unesite minimalnu ocjenu za pretragu: ";
    std::cin >> minOcjena;

    // Pozovi funkciju pretrage
    pretragaFilmova(filmovi, minOcjena);

    return 0;
}