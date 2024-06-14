//
//  Movies.hpp
//  Streaming_service_modeling
//
//  Created by Mariel Alvarez Salas on 13/06/24.
//

#ifndef Movies_hpp
#define Movies_hpp
#include <string>
#include <stdio.h>
#include "Video.hpp"

using namespace std;

class Movies : public Video{
public:
    Movies();
    Movies(int ID, string title, int duration, string genre, double rating);
    //Redefined method
    void showData();
};

#endif /* Movies_hpp */
