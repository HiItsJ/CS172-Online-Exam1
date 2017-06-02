//
//  Theater.hpp
//  Exam1
//
//  Created by Josiah on 6/1/17.
//  Copyright © 2017 Josiah. All rights reserved.
//
// I affirm that all code given below was written solely by me, Josiah Gallegos, and that and that any help I recieved adhered to the rules stated for this exam.

#ifndef Theater_hpp
#define Theater_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "Movie.hpp"

using namespace std;

class Theater{
    string name;
    string phone;
    Movie movies[24];
    int popcornPrice = 10;
    int cokePrice = 5;
public:
    Theater(string Name, string Phone);
    void AddMovie(Movie& Movie);
    string GetMovieForHour(int hour);
    int GetShowTimeForGenre(string Genre);
    int GetPopcornPrice();
    int GetCokePrice();
};

#endif /* Theater_hpp */
