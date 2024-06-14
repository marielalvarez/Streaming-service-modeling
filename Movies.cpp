//
//  Movies.cpp
//  Streaming_service_modeling
//
//  Created by Mariel Alvarez Salas on 13/06/24.
//

#include "Movies.hpp"
#include "Video.hpp"
#include <stdio.h>
#include <string>

Movies::Movies() : Video() {}
Movies::Movies(int ID, string title, int duration, string genre, double rating) : Video(ID, title, duration, genre, rating) {}

void Movies::showData() {
  cout << endl;
  cout << "Movies" << endl;
  cout << "ID: " << ID << endl;
  cout << "Title: " << title << endl;
  cout << "Duration: " << duration << endl;
  cout << "Genre: " << genre << endl;
  cout << "Rating: " << rating << endl;
  cout << endl;
}

#endif
