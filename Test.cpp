#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Point.hpp"
#include "sources/Character.hpp"
#include "sources/Team.hpp"
#include "doctest.h"
#include <sstream>
#include <limits>
#include <vector>
using namespace ariel;

TEST_CASE("Test 1 - Point class"){
    Point p1(9,6),p2(1,10), p3(3,5),p4(7,4);
    CHECK(p1.distance(p2) == p2.distance(p1));
    CHECK(p3.distance(p4) == p4.distance(p3));
    CHECK(p1.distance(p4) == p4.distance(p1));
    CHECK(p3.distance(p1) == p1.distance(p3));
    CHECK(p3.distance(p2) == p2.distance(p3));
    CHECK(p2.distance(p4) == p4.distance(p2));
    CHECK(p2.distance(p4) == 8.48428);
    CHECK(p1.distance(p3) == 6.08276);
    CHECK(p3.distance(p3) == 0);
}


TEST_CASE("Test 2 - Team class"){
    Point  p1(9,6),p2(1,10), p3(3,5),p4(7,4),p5(3,2);
    Cowboy *cowboy = new Cowboy("Bob",p1);
   
    Team team1(cowboy);
    for(int i=1;i<9;i++){
        team1.add(new Cowboy("Alice",p1));
    }
    CHECK_THROWS(team1.add(new Cowboy ("Bob",p2)));




}

TEST_CASE("Test 3 - Character class"){
    Point p1(9,6),p2(1,10), p3(3,5),p4(7,4),p5(6,7),p6(7,8);
    OldNinja old("OldNinja",p1);
    TrainedNinja trained("trained",p2);
    YoungNinja young("YoungNinja",p3);
    Cowboy cowboy("Cowboy",p4);
    Cowboy* cowboy2 = new Cowboy("Coboy2",p5);
    Cowboy* cowboy3 = new Cowboy("Coboy3",p6);
    
    CHECK(cowboy.isAlive());
    CHECK(old.isAlive());
    CHECK(trained.isAlive());
    CHECK(young.isAlive());

    CHECK(old.getName()=="OldNinja");
    CHECK(trained.getName()=="trained");
    CHECK(young.getName()=="young");
    CHECK(cowboy.getName()=="cowboy");

    CHECK(old.getHurt()==150);
    CHECK(trained.getHurt()==120);
    CHECK(young.getHurt()==100);
    CHECK(cowboy.getHurt()==110);

    CHECK(cowboy2->distance(cowboy3)==cowboy3->distance(cowboy2));
    CHECK(cowboy2->distance(cowboy2)==cowboy2->distance(cowboy2));

    
}