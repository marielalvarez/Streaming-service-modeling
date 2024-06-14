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
    ifstream archivoEpisodes(episodesFile);
    
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

void showMoviesByRating(vector<Video*>& videos,
    double rating) {
    cout << "Movies with ratings " << rating << ":" << endl;
    for (Movies* movies : movies) {
        Movies* movies = dynamic_cast<Movies*>(movies);
        if (movie != nullptr && movie->getrating() == rating) {
            movies->showData();
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
                double rating;
                cout << "Enter rating: ";
                cin >> rating;
                showMoviesByRating(movies, rating);
                break;
            }
            case 5: {
                double rating;
                cout << "Enter rating: ";
                cin >> rating;
                showVideoByRating(video, rating)
                    
                string uvideoTitle;
                double urating;
                cout << "Enter video title: ";
                cin >> uvideoTitle;
                cout << "Enter the rating you give to this title: ";
                cin >> urating;
                showVideoByRating(uvideoTitle, urating);
                break;
            }
            case 6: {
                cout << "Exiting." << endl;
                break;
            }
            default: {
                cout << "This number is not an option. Try again." << endl;
                break;
            }
        }
        cout << endl;
    } while (option != 6);

    return 0;
}
