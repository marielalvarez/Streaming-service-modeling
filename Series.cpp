//
//  Series.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#include <iostream>
#include "Series.hpp"
#include "Episodes.hpp"

using namespace std;
//Constructors
Series::Series(){
    ID = 0;
    title = "-";
    episode = {};
    seasons = 0;
}
Series::Series(int ID, string title, int seasons){
    this->ID = ID;
    this->title=title;
    this->seasons=seasons;
}
Series::Series(int ID, string title, vector<Episodes*> episode, int seasons){
    this->ID = ID;
    this->title=title;
    this->episode=episode;
    this->seasons=seasons;
}

//Setters & Getters
void Series::setID(int ID){this->ID = ID;}
void Series::setTitle(string title){this->title = title;}
void Series::setEpisode(vector<Episodes*> episode){this->episode = episode;}
void Series::setSeason(int seasons){this-> seasons = seasons;}

int Series::getID(){return ID;}
string Series::getTitle(){return title;}
vector<Episodes*> Series::getEpisode(){return episode;}
int Series::getSeason(){return seasons;}

//Methods
void Series::showSeriesData(){
    cout << endl<< "ID:" << ID <<endl;
    cout<< "Title:" << title <<endl;
    cout<< "Number of seasons:" << seasons <<endl;
}
void Series::showEpisodes() {
    std::vector<Episodes*>::const_iterator i;
    for(i = episode.begin(); i != episode.end(); ++i) {
        (*i)->showData();
    }
}
void Series::showEpisodesWRating(double rating) {
    std::vector<Episodes*>::const_iterator i;
    for (i = episode.begin(); i != episode.end(); ++i) {
        if ((*i)->getRating() == rating) {
            (*i)->showData();
        }
    }
}
