#pragma once
#include "Point.hpp"

namespace ariel{
    class Character{
        private:
            Point location;
            string name;
            int health;
        public:

            Character(string , const Point&);

            // we must need to have this constructors to pass make tidy
            Character() = delete; 
            Character(const Character &) = delete;
            Character& operator =(Character const&) = delete;
            Character(Character&&) = delete;
            Character& operator=(Character&&) = delete;

            // Setters
            void setHealth(int);

            // Getters
            string getName(); // return the name of the character
            int getHealth(); // return the health of the character
            Point getLocation(); // return the location of the character


            bool isAlive(); // return if the character is alive -- health > 0
            double distance (const Point&); // return the distance between 2 characters
            virtual void hit(int); // reduce the health of the character
            virtual string print(); // print: name, health, location, isAlive() --> no print healt & (name), before the name print N | C
            virtual ~Character();
    };
}
