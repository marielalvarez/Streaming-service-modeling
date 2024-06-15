//
//  Video.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#include "Video.hpp"
#include <iostream>

Video::Video(int id, std::string title, int duration, std::string genre, double rating)
    : id(id), title(title), duration(duration), genre(genre), rating(rating) {}

int Video::getId() const {
    return id;
}

std::string Video::getTitle() const {
    return title;
}

int Video::getDuration() const {
    return duration;
}

std::string Video::getGenre() const {
    return genre;
}

double Video::getRating() const {
    return rating;
}

void Video::setRating(double rating) {
    this->rating = rating;
}
