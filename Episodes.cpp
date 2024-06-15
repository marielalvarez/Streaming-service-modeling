//
//  Episodes.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#include "Episodes.hpp"
#include <iostream>

Episodes::Episodes(int id, std::string seriesId, std::string title, int duration, double rating, std::string season)
    : Video(id, title, duration, "", rating), seriesId(seriesId), season(season) {}

void Episodes::showData() const {
    std::cout << "Episode [ID: " << id << ", Series ID: " << seriesId << ", Title: " << title
              << ", Duration: " << duration << " mins, Rating: " << rating << ", Season: " << season << "]" << std::endl;
}
