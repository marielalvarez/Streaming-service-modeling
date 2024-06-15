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
    string episodesFile = "episodes.txt";

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
            nameSeries.push_back(new Series(id, titleS, temps));
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

        while (getline(archivoMovies, readlin)) {
            stringstream ss(readlin);
            ss >> Id >> titleM >> duracion >> genero >> calif;
            videos.push_back(new Movies(Id, titleM, duracion, genero, calif));
        }
        archivoMovies.close();
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

        while (getline(archivoEpisodes, readli)) {
            stringstream ss(readli);
            ss >> iD >> idserie >> nameE >> dur >> cali >> temp;
            Episodes* episode = new Episodes(iD, idserie, nameE, dur, cali, temp);

            // Find the corresponding series and add the episode
            for (Series* series : nameSeries) {
                if (series->getId() == stoi(idserie)) {
                    series->addEpisode(episode);
                    break;
                }
            }

            videos.push_back(episode);
        }
        archivoEpisodes.close();
        cout << "Episodes data loaded correctly" << endl;
    }
}

void showVideosbyratingandgenre(vector<Video*>& videos, double rating, string genre) {
    cout << "Videos with ratings " << rating << " and genres " << genre << ":" << endl;
    for (Video* video : videos) {
        if (video->getRating() == rating && video->getGenre() == genre) {
            video->showData();
        }
    }
    cout << "We couldn't find a video that has the specifications inserted" << endl;
}

void showEpRating(vector<Series*>& nameSeries, const string& title, double rating) {
    cout << "Episodes of the series " << title << " with rating " << rating << ":" << endl;
    for (Series* series : nameSeries) {
        if (series != nullptr && series->getTitle() == title) {
            series->showEpisodesWRating(rating);
        }
    }
}

void showMoviesByRating(vector<Video*>& videos, double rating) {
    cout << "Movies with ratings " << rating << ":" << endl;
    for (Video* video : videos) {
        Movies* movie = dynamic_cast<Movies*>(video);
        if (movie != nullptr && movie->getRating() == rating) {
            movie->showData();
        }
    }
}

void ratevideo(vector<Video*>& videos, string title, int value) {
    for (Video* video : videos) {
        if (video->getTitle() == title) {
            video->setRating(value);
            cout << "The video: \"" << title << "\" has been rated with value " << value << endl;
            return;
        }
    }
    cout << "We couldn't find the video you inserted \"" << title << "\"" << endl;
}

int main() {
    vector<Video*> videos;
    vector<Series*> nameSeries;

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
                loadData(videos, nameSeries);
                break;
            }
            case 2: {
                double rating;
                string genre;
                cout << "Insert rating: ";
                cin >> rating;
                cout << "Insert genre: ";
                cin >> genre;
                showVideosbyratingandgenre(videos, rating, genre);
                break;
            }
            case 3: {
                string seriesTitle;
                double rating;
                cout << "Enter series title (Use _ for spaces): ";
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
                showMoviesByRating(videos, rating);
                break;
            }
            case 5: {
                string title;
                int rate;
                cout << "Insert what title you want to rate: ";
                cin >> title;
                cout << "Insert the rating: ";
                cin >> rate;
                ratevideo(videos, title, rate);
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
