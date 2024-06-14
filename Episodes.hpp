//
//  Episodes.hpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#ifndef Episodes_hpp
#define Episodes_hpp
#include "Video.hpp"

#include <stdio.h>
#include <string>
using namespace std;

class Episodes : public Video{
private:
    //Atributes
    string nameSeries, numEpisode, season;
public:
    //Constructors
    Episodes();
    Episodes(int, int, double, string, string, string);
    
    //Setters
    void setNameSeries(string);
    void setRating(double);
    void setSeason(string);
    
    //Getters
    string getNameSeries();
    double getRating();
    string getSeasons();
    
    //Inherited method
    void showData();
};

#endif /* Episodes_hpp */
