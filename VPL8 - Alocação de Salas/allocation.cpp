#include "allocation.hpp"

Allocation::Allocation(std::string day, std::string hour, std::string room){
    this->day = day;
    this->hour = hour;
    this->room = room;
}

bool Allocation::operator==(Allocation const &other) const{
    if(
        this->day == other.day && 
        this->hour == other.hour &&
        this->room == other.room
    )
        return true;
    else
        return false;
}

bool Allocation::operator<(Allocation const &other) const{

    // Confere se o dia é menor
    if (this->day < other.day)
        return true;
    // Se o dia for igual, 
    else if (this->day == other.day) { 
        //... confere se a hora é menor. 
        if (this->hour < other.hour)
            return true;
        // Se a hora for igual,
        else if (this->hour == other.hour){
            // ... confere se o quarto é menor.
            if (this->room < other.room)
                return true;
        }
    }
    return false; 
}