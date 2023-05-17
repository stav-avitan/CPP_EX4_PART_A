#include "Character.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel; 

    
    Character::Character(string _name, Point _point) : name(_name),point(_point){

    }

    bool Character :: isAlive(){
        return true;
    }

    double Character :: distance(Character*){
        return 0;
    }
    void Character :: hit(int){

    }
    string Character :: getName(){
            return "0";
        }
    int Character :: getHurt(){
        return 0;
    }
    void Character :: setHurt(int){

    }
    Point Character :: getLocation(){
        return Point (0,0);
    }

    string  Character :: print(){
        return "0";
    }
    

    Cowboy ::Cowboy(string name,Point point): Character(name,point) {   

    }
   

    void Cowboy::shoot(Character*){

    }

    bool Cowboy::hasboolets(){
    return true;
    }   

    void Cowboy::reload(){

    }

    string Cowboy::print(){
    return "0";
    }


    Ninja ::Ninja(string name,Point point): Character(name,point){

    }
    void Ninja::setSpeed(int speed){
   
    }

    void Ninja::move(Character*){

    }

    void Ninja::slash(Character *other){

    }

    int Ninja::getSpeed(){
    return 0;
    }

    string Ninja::print(){
    return "0";
    }

OldNinja::OldNinja(string name, Point point) : Ninja(name, point){
    
}

TrainedNinja::TrainedNinja(string name, Point point) : Ninja(name, point){
    
}

YoungNinja::YoungNinja(string name, Point point) : Ninja(name, point){
   
}
        

