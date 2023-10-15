#include "course.hpp"

Course::Course(std::string id, std::string name){
    this->id = id;
    this->name = name;
}

bool Course::operator==(Course const &other) const {
    if(this->id == other.id)
        return true;
    else
        return false;
}