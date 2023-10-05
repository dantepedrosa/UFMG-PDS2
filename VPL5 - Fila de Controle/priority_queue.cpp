#include "priority_queue.hpp"


void IntPriorityQueue::enqueue(int e, unsigned priority){
    
    IntPriorityQueue::dataType element(e, priority);
    std::vector<dataType>::iterator it;

    if (priorityQueue.size() != 0){
        for(it = priorityQueue.begin(); it < priorityQueue.end(); it++){
            if ( it->second < element.second )
                priorityQueue.insert(it, element);
          }
    }
    else
        IntPriorityQueue::priorityQueue.push_back(element);

    return;
}

void IntPriorityQueue::dequeue(){
    if (priorityQueue.size() != 0)
        priorityQueue.pop_back();
    return;
}

int IntPriorityQueue::peek(){
    return priorityQueue.back().first;
}

unsigned IntPriorityQueue::size(){
    return priorityQueue.size();
}