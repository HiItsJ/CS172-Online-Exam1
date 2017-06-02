//
//  Theater.cpp
//  Exam1
//
//  Created by Josiah on 6/1/17.
//  Copyright © 2017 Josiah. All rights reserved.
//
// I affirm that all code given below was written solely by me, Josiah Gallegos, and that and that any help I recieved adhered to the rules stated for this exam.

#include "Theater.hpp"

Theater::Theater(string Name, string Phone){
    name = Name;
    phone = Phone;
}
void Theater::AddMovie(Movie& Movie){
    movies[Movie.GetShowTime()] = Movie;
}
string Theater::GetMovieForHour(int hour){
    if (hour == 18){
        return movies[hour+1].GetTitle();
    }
    if (hour>=0 && hour <=24){
        return movies[hour].GetTitle();
    }
    return "";
}
int Theater::GetShowTimeForGenre(string Genre){
    for (int i = 0; i<24; i++){
        if (movies[i].GetGenre() == Genre){
            return movies[i].GetShowTime();
        }
    }
    return -1;
}
int Theater::GetPopcornPrice(){
    return popcornPrice;
}
int Theater::GetCokePrice(){
    return cokePrice;
}
