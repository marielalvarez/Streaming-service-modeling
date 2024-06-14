//
//  Episodes.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#include <iostream>
#include "Episodes.hpp"
using namespace std;

//Constructors
Episodes::Episodes() : Video() {
    nameSeries = "-";
    numEpisode = "-";
    season= "-";
}

Episodes::Episodes(int ID,int duration, double rating, string nameSeries, string numEpisode, string season):Video(ID, duration, rating){
    this->nameSeries = nameSeries;
    this->numEpisode = numEpisode;
    this->season = season;
}
//Setters & Getters
void Episodes::setNameSeries(string nameSeries){this-> nameSeries = nameSeries;}
void Episodes::setRating(double rating){this->rating = rating;}
void Episodes::setSeason(string season){this->season = season;}

string Episodes::getNameSeries(){return nameSeries;}
double Episodes::getRating(){return rating;}
string Episodes::getSeasons(){return season;}

//Redefined Method
void Episodes::showData(){
    cout << endl;
    cout << "Episode" << endl;
    cout << "ID: " << ID << endl;
    cout << "Title: " << title << endl;
    cout << "Duration: " << duration << endl;
    cout << "Genre: " << genre << " minutos" << endl;
    cout << "Rating: " << rating << endl;
    cout << "Series: " << nameSeries << endl;
    cout << "Episode number: " << numEpisode << endl;
    cout << "Season: " << season << endl;
    cout << endl;
}
