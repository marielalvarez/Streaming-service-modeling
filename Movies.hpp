//
//  Movies.hpp
//  Streaming_service_modeling
//
//  Created by Mariel Alvarez Salas on 13/06/24.
//
#ifndef MOVIES_HPP
#define MOVIES_HPP

#include "Video.hpp"

class Movies : public Video {
public:
    Movies(int id, std::string title, int duration, std::string genre, double rating);
    void showData() const override;
};

#endif
