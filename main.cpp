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

void loadMoviesFromFile(const string& filename, vector<Video>& videos) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Unable to open file: " << filename << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        int id, duration;
        string title, genre;
        double rating;
        ss >> id;
        getline(ss, title, ',');
        getline(ss, genre, ',');
        ss >> duration;
        ss >> rating;

        // Crear un objeto Video y agregarlo al vector
        vector <Movies*> mov;
        mov.push_back(new Movies(id, title, duration, genre, rating));
    }

    file.close();
}

void showEpRating(vector<Series*>& nameSeries, const string& title, double rating) {
    cout << "Episodios de la Serie " << title << " con Calificación " << rating << ":" << endl;
    for (Series* name : nameSeries) {
        if (name != nullptr && name->getTitle() == title) {
            name->showEpisodesWRating(rating);
        }
    }
}

void showVideoByRating(vector<Video*>& listVideos, string videoTitle, double urating)



int main() {
    vector<Video> videos;
    vector<Series*> nameSeries;

    // Cargar datos iniciales desde el archivo
    loadMoviesFromFile("movies.txt", videos);

    // Mostrar los videos cargados para verificar
    for (auto& video : videos) {
        cout << "Video loaded: " << video.getTitle() << endl;
    }

    // Ciclo de opciones del menú
    int option;
    do {
        cout << "1. Load data file." << endl;
        cout << "2. Show the videos with a specific rating or from a specific genre." << endl;
        cout << "3. Show the episodes of a specific series with a specific rating." << endl;
        cout << "4. Show the movies with a specific rating." << endl;
        cout << "5. Rate a video." << endl;
        cout << "6. Exit" << endl;
        cin >> option;

        switch (option) {
            case 1: {
                cout << "Enter the filename to load: ";
                string filename;
                cin >> filename;
                loadMoviesFromFile(filename, videos);
                break;
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
                break;
            }
            case 6: {
                string uvideoTitle;
                double urating;
                cout << "Enter video title: ";
                cin >> uvideoTitle;
                cout << "Enter the rating you give to this title: ";
                cin >> urating;
                showVideoByRating(uvideoTitle, urating);
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
