#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>

namespace ariel{ 

    class Team2{
       
        private:
       
            Character* (*soliders);
            Character* leadOfTeam;
            int size;
            int capacity = 10;

        public:
       
            ~Team2();
            Team2(const Team2& other);
            Team2(Character *leadOfTeam);
            void add(Character*);
            void attack(Team2*); 
            int stillAlive();
            int getSize();
            void print();
    };
}