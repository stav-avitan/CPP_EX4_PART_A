#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>

namespace ariel{ 

    class SmartTeam{
       
        private:
       
            Character* (*soliders);
            Character* leadOfTeam;
            int size;
            int capacity = 10;

        public:
       
            ~SmartTeam();
            SmartTeam(const SmartTeam& other);
            SmartTeam(Character *leadOfTeam);
            void add(Character*);
            void attack(SmartTeam*); 
            int stillAlive();
            int getSize();
            void print();
    };
}