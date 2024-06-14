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
    Video();
    Video(int ID, string title, int duration, string genre, double rating);
    //Virtual pure method
    void setID(int ID);
    void setTitle(string title);
    void setDuration(int duration);
    void setGenre(string genre);
    void setRating(doube rating);

    int getID();
    string gettitle();
    int getduration();
    string getgenre();
    int getrating();

    virtual void showData()=0;
    
};






#endif /* Video_hpp */
