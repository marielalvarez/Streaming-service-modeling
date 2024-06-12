//
//  main.cpp
//  Streaming_service_modeling
//
//  Mariel Alvarez Salas
//  Samira Hazim Rodriguez
//

#include <iostream>
#include <vector>
#include "Episodes.hpp"
#include "Series.hpp"
#include "Video.hpp"
using namespace std;
void showEpRating(vector<Series*>& nameSeries, string title,
    double rating) {
    cout << "Episodios de la Serie " << title << " con Calificacion "
        << rating << ":" << endl;
    for (Series* name : nameSeries) {
        if (name != nullptr && name->getTitle() == title) {
            name->showEpisodesWRating(rating);
        }
    }
}
int main() {
    
    //Cycled Menu Options
    int option;
    do{
        cout << "1.  Load data file." << endl;
        cout << "2. Show the videos with a specific rating or from a specific genre." << endl;
        cout << "3. Show the episodes of a specific series with a specific rating." << endl;
        cout << "4. Show the movies with a specific rating." << endl;
        cout << "5. Rate a video." << endl;
        cout << "6. Ask for the title to rate." << endl;
        cout << "7. Ask for the rating." << endl;
        cout << "8. Exit" << endl;
        cin >> option;
        switch (option) {
               case 1: {
                  
                   
               }
               case 2: {
                   
                  
               }
               case 3: {

                   //showEpRating(nameSeries); 
                   break;
               }
               case 4: {

                
               }
               case 5: {
                
               }
               case 6: {
                
               }
               case 7: {
                   
               }
               case 0: {
                   cout << "Closing sesion." << endl;
                   break;
               }
               default: {
                   cout << "This number is not an option. Ty again." << endl;
                   break;
               }
               }
               cout << endl;
    } while (option != 0);
    
    return 0;
}
