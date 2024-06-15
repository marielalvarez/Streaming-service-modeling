//
//  Series.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#include "Series.hpp"
#include <iostream>

Series::Series(int id, std::string title, int seasons)
    : Video(id, title, 0, "", 0.0), seasons(seasons) {}

Series::~Series() {
    for (Episodes* episode : episodes) {
        delete episode;
    }
}

int Series::getSeasons() const {
    return seasons;
}

void Series::addEpisode(Episodes* episode) {
    episodes.push_back(episode);
}

void Series::showData() const {
    std::cout << "Series [ID: " << id << ", Title: " << title << ", Seasons: " << seasons << "]" << std::endl;
}

void Series::showEpisodesWRating(double rating) const {
    std::cout << "Episodes with rating " << rating << ":" << std::endl;
    for (Episodes* episode : episodes) {
        if (episode->getRating() == rating) {
            episode->showData();
        }
    }
}
