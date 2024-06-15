//
//  Movies.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas 
//  Samira Hazim Rodriguez
//
#include "Movies.hpp"
#include <iostream>

Movies::Movies(int id, std::string title, int duration, std::string genre, double rating)
    : Video(id, title, duration, genre, rating) {}

void Movies::showData() const {
    std::cout << "Movie [ID: " << id << ", Title: " << title << ", Duration: " << duration
              << " mins, Genre: " << genre << ", Rating: " << rating << "]" << std::endl;
}

