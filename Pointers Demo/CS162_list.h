#include "CS162_movie.h"

//My name and the purpose of the code in this file
//This file contains the class interface for a collection of movies

const int MOVIES = 10;

class list
{
    public:
        list(); //constructor, initialize the data members
        ~list(); //destructor to deallocate any dynamic memory
        void read_all();
        void display_all();
    private:
        movie * array;  //can point to one movie or the first of many
                        //in an array
        int size_of_array;
        int num_of_movies;

};
