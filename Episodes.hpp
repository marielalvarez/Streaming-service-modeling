//
//  Episodes.hpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#ifndef EPISODES_HPP
#define EPISODES_HPP

#include "Video.hpp"

class Episodes : public Video {
private:
    std::string seriesId;
    std::string season;

public:
    Episodes(int id, std::string seriesId, std::string title, int duration, double rating, std::string season);
    void showData() const override;
};

#endif
