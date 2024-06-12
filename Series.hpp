//
//  Series.hpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//

#ifndef Series_hpp
#define Series_hpp
#include "Episodes.hpp"
#include <vector>
#include <stdio.h>
using namespace std;

class Series{
private:
    //Atributes
    int ID;
    string title;
    vector<Episodes*> episode;
    int seasons;

public:
    //Constructors
    Series();
    Series(int, string, int);
    Series(int, string, vector<Episodes*>, int);
    
    //Setters
    void setID(int);
    void setTitle(string);
    void setEpisode(vector<Episodes*>);
    void setSeason(int);
    
    //Getters
    int getID();
    string getTitle();
    vector<Episodes*> getEpisode();
    int getSeason();
    
    //Methods
    void showSeriesData();
    void showEpisodes();
    void showEpisodesWRating(double);
    
    //addEpisodio?
    
};
#endif /* Series_hpp */
