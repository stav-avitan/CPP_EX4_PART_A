#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>

namespace ariel{ 

    class Team{
       
        private:
       
            Character* (*soliders);
            Character* leadOfTeam;
            int size;
            int capacity = 10;

        public:
       
            ~Team();
            Team(const Team& other);
            Team(Character *leadOfTeam);
            void add(Character*);
            int getSize();
            void attack(Team*); 
            int stillAlive();
            void print();
    };
}