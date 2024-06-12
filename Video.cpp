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
//Setters & Getters
