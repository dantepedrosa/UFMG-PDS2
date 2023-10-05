#include "priority_queue.hpp"


void IntPriorityQueue::enqueue(int e, unsigned priority){
    
    IntPriorityQueue::dataType element(e, priority);
    std::vector<dataType>::iterator it;

    if (this->priorityQueue.size() != 0){
        it = this->priorityQueue.begin();
        while(it < this->priorityQueue.end()){
            if ( element.second < it->second){
                this->priorityQueue.insert(it, element);
                break;
            }
            else
                it++;
        }
        if(it == priorityQueue.end())
            this->priorityQueue.push_back(element);
    }
    else
        this->priorityQueue.push_back(element);

    return;
}

void IntPriorityQueue::dequeue(){
    if (this->priorityQueue.size() != 0)
        this->priorityQueue.pop_back();
    return;
}

int IntPriorityQueue::peek(){
    return this->priorityQueue.back().first;
}

unsigned IntPriorityQueue::size(){
    return this->priorityQueue.size();
}