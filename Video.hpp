//
//  Video.hpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//
#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <string>

class Video {
protected:
    int id;
    std::string title;
    int duration;
    std::string genre;
    double rating;

public:
    Video(int id, std::string title, int duration, std::string genre, double rating);
    virtual ~Video() {}

    int getId() const;
    std::string getTitle() const;
    int getDuration() const;
    std::string getGenre() const;
    double getRating() const;

    void setRating(double rating);

    virtual void showData() const = 0;
};

#endif

