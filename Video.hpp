//
//  Video.hpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//

#ifndef Video_hpp
#define Video_hpp
#include <string>
#include <stdio.h>

using namespace std;
class Video{
protected:
//Protected atributes
    int ID;
    string title;
    int duration;
    string genre;
    double rating;
public:
//Methods
    virtual ~Video() {}
    Video();
    Video(int ID, string title, int duration, string genre, double rating);
    Video(int, int, double); //Constructor for episodes
    //Virtual pure method
    void setID(int ID);
    void setTitle(string title);
    void setDuration(int duration);
    void setGenre(string genre);
    void setRating(doube rating);

    int getID();
    string getTitle();
    int getDuration();
    string getGenre();
    int getRating();

    virtual void showData()=0;
    
};






#endif /* Video_hpp */
