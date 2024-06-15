//
//  Series.hpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#ifndef SERIES_HPP
#define SERIES_HPP

#include "Video.hpp"
#include <vector>
#include <string>
#include "Episodes.hpp"

class Series : public Video {
private:
    int seasons;
    std::vector<Episodes*> episodes;

public:
    Series(int id, std::string title, int seasons);
    ~Series();

    int getSeasons() const;
    void addEpisode(Episodes* episode);
    void showData() const override;
    void showEpisodesWRating(double rating) const;
};

#endif
