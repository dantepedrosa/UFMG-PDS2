#include "priority_queue.hpp"


void IntPriorityQueue::enqueue(int e, unsigned priority){
    
    IntPriorityQueue::dataType element(e, priority);
    std::vector<dataType>::iterator it;

    if (this->priorityQueue.size() != 0){
        for(it = this->priorityQueue.begin(); it < this->priorityQueue.end(); it++){
            if ( it->second < element.second )
                this->priorityQueue.insert(it, element);
          }
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