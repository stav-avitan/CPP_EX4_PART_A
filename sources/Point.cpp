#include "Point.hpp"
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace ariel;


Point::Point(double _x, double _y) : x(_x), y(_y) {

}

Point::Point() : x(0), y(0){

}

double Point:: getX(){
   return x;
}

double Point:: getY(){
   return y;
}

void Point:: setX(double){

}
void Point:: setY(double){

}

 double  Point:: distance(Point){
    return 0;
 }

 void Point:: print(){

 }

  Point Point:: moveTowards(Point&,Point&,double){
   return Point(0,0);
  }

 