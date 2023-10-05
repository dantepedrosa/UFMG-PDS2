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
    //TODO AEEE
    return;
}

int IntPriorityQueue::peek(){
    //TODO AEEE
    return 0;
}

unsigned IntPriorityQueue::size(){
    //TODO AEEE
    return 0;
}