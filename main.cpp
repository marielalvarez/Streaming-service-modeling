//
//  main.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Episodes.hpp"
#include "Series.hpp"
#include "Movies.hpp"
#include "Video.hpp"


using namespace std;
void loadData(vector<Video*>& videos, vector<Series*>& nameSeries) {
    
    string seriesFile = "series.txt";
    string moviesFile = "movies.txt";
    string episodosFile = "episodes.txt";
    ifstream archivoSeries(seriesFile);
    ifstream archivoMovies(moviesFile);
    ifstream archivoEpisodes(episodosFile);
    
    if (archivoSeries.is_open()) {
        string readline;
        
        int id;
        string titleS;
        int temps;
        
        while (getline(archivoSeries, readline)) {
            stringstream ss(readline);
            ss >> id >> titleS >> temps;
            nameSeries.push_back(new Series(id, titleS, temps)); // se crea un nuevo objeto de tipo Serie y
            // se agrega a un vector de apuntadores
        }
        archivoSeries.close();
        cout << "Series data loaded correctly" << endl;
    }
    if (archivoMovies.is_open()) {
        string readlin;
        
        int Id;
        string titleM;
        int duracion;
        string genero;
        double calif;
        
        while (getline(archivoSeries, readlin)) {
            stringstream ss(readlin);
            ss >> Id >> titleM >> duracion >> genero >> calif;
            videos.push_back(new Movies(Id, titleM, duracion, genero, calif));
        }
        archivoSeries.close();
        cout << "Movies data loaded correctly" << endl;
    }
    if (archivoEpisodes.is_open()) {
        string readli;
        
        int iD;
        string idserie;
        string nameE;
        int dur;
        double cali;
        string temp;
        
        while (getline(archivoSeries, readli)) {
            stringstream ss(readli);
            ss >> iD >> idserie >> nameE >> dur >> cali >> temp;
            videos.push_back(new Episodes(iD, idserie, nameE, dur, cali, temp));
        }
        archivoSeries.close();
        cout << "Episodes data loaded correctly" << endl;
    }
}

void showEpRating(vector<Series*>& nameSeries, const string& title, double rating) {
    cout << "Episodios de la Serie " << title << " con Calificación " << rating << ":" << endl;
    for (Series* name : nameSeries) {
        if (name != nullptr && name->getTitle() == title) {
            name->showEpisodesWRating(rating);
        }
    }
}

int main() {
    vector<Video*> videos;
    vector<Series*> nameSeries;


    // Ciclo de opciones del menú
    int option;
    do {
        cout << "1.  Load data file." << endl;
        cout << "2. Show the videos with a specific rating or from a specific genre." << endl;
        cout << "3. Show the episodes of a specific series with a specific rating." << endl;
        cout << "4. Show the movies with a specific rating." << endl;
        cout << "5. Rate a video." << endl;
        cout << "6. Ask for the title to rate." << endl;
        cout << "7. Ask for the rating." << endl;
        cout << "8. Exit" << endl;
        cin >> option;

        switch (option) {
            case 1: {
                loadData(videos, nameSeries);
            }
            case 2: {
                // Implementar funcionalidad para mostrar videos por calificación o género
                break;
            }
            case 3: {
                string seriesTitle;
                double rating;
                cout << "Enter series title: ";
                cin >> seriesTitle;
                cout << "Enter rating: ";
                cin >> rating;
                showEpRating(nameSeries, seriesTitle, rating);
                break;
            }
            case 4: {
                // Implementar funcionalidad para mostrar películas por calificación
                break;
            }
            case 5: {
                // Implementar funcionalidad para calificar un video
                break;
            }
            case 6: {
                // Implementar funcionalidad para preguntar por el título para calificar
                break;
            }
            case 7: {
                // Implementar funcionalidad para preguntar por la calificación
                break;
            }
            case 8: {
                cout << "Exiting." << endl;
                break;
            }
            default: {
                cout << "This number is not an option. Try again." << endl;
                break;
            }
        }
        cout << endl;
    } while (option != 8);
    

    return 0;
}
