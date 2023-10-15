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
    if(
        this->day < other.day && 
        this->hour < other.hour &&
        this->room < other.room
    )
        return true;
    else
        return false;
}