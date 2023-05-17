#pragma once
#include <iostream>
#include <string>
#include <string>
#include "Point.hpp"
using namespace std;

namespace ariel{ 

    class Character{

        private:
            Point point;
            int hurt;
            string name;

             public:
            Character(string,Point);
            bool isAlive();
            double distance(Character*);
            void hit(int);
            string getName();
            int getHurt();
            void setHurt(int);
            Point getLocation();
            virtual string print(); 
    };

    class Cowboy : public Character{
        private:
            int amountOfBullets;
        public:
            Cowboy(string,Point);
            void shoot(Character*);
            bool hasboolets();
            void reload();
            string print();

    };
    
    class Ninja : public Character{
        private:
            int speed;

        public:
            Ninja(string,Point);
            void move(Character*);
            void slash(Character *other);
            void setSpeed(int);
            int getSpeed();
            string print();
    };

    class YoungNinja : public Ninja{
        public:
            YoungNinja(string, Point);

    };

    class TrainedNinja : public Ninja{
        public:
            TrainedNinja(string, Point);
    };

    class OldNinja : public Ninja{
        public:
            OldNinja(string,Point);

    };
}