#include "allocation.hpp"
using namespace std;

Allocation::Allocation(string day, string hour, string room){
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

    int _thisPriority = getPriority(_dayPriotiry, this->day);
    int _otherPriority = getPriority(_dayPriotiry, other.day);
    // Confere se o dia é menor
    if (_thisPriority < _otherPriority)
        return true;
    // Se o dia for igual, 
    else if (_thisPriority == _otherPriority) { 
        _thisPriority = getPriority(_hourPriority, this->hour);
        _otherPriority = getPriority(_hourPriority, other.hour);
        //... confere se a hora é menor. 
        if (_thisPriority < _otherPriority)
            return true;
        // Se a hora for igual,
        else if (_thisPriority == _otherPriority){
            // ... confere se o quarto é menor.
            if (stoi(this->room) < stoi(other.room))
                return true;
        }
    }
    return false; 
}

int Allocation::getPriority(vector<string> priorityList, string s){
    for(unsigned i=0; i<priorityList.size(); i++){
        if(s == priorityList[i])
            return i;
    }
    return 99999;
}