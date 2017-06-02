//
//  Movie.hpp
//  Exam1
//
//  Created by Josiah on 6/1/17.
//  Copyright © 2017 Josiah. All rights reserved.
//
// I affirm that all code given below was written solely by me, Josiah Gallegos, and that and that any help I recieved adhered to the rules stated for this exam.

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Movie{
    string title;
    string genre;
    int showTime;
public:
    Movie();
    Movie(string Title, string Genre, int ShowTime);
    string GetTitle();
    string GetGenre();
    int GetShowTime();
};

#endif /* Movie_hpp */
