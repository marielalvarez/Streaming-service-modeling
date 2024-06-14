//
//  Video.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//

#include "Video.hpp"
//Constructors
Video::Video(){
    ID = 0;
    title = "0";
    duration = 0;
    genre = "0";
    rating = 0.0;
}

Video::Video(int ID, string title, int duration, string genre, double rating){
    this->ID = ID;
    this->title = title;
    this->duration = duration;
    this->genre = genre;
    this->rating = rating;
}
Video::Video(int ID, int duration, double rating){
    this->ID = ID;
    this->duration = duration;
    this->rating = rating;
}
//Setters & Getters

void Video::setID(int ID) { this->ID = ID; }
void Video::setTitle(string title) { this->title = title; }
void Video::setDuration(int duration) { this->duration = duration; }
void Video::setGenre(string genre) { this->genre = genre; }
void Video::setRating(int rating) {this->rating = rating; }

// Getters

int Video::getID() { return ID; }
string Video::getTitle() { return title; }
int Video::getDuration() { return duration; }
string Video::getGenre() { return genre; }
int Video::getRating() { return rating; }

#endif
