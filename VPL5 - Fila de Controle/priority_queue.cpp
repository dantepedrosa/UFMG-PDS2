#include "priority_queue.hpp"


void IntPriorityQueue::enqueue(int e, unsigned priority){
    
    IntPriorityQueue::dataType element(e, priority);
    
    if (priorityQueue.size() != 0){
        for(
            std::vector<dataType>::reverse_iterator it = IntPriorityQueue::priorityQueue.rbegin() ;
            it != IntPriorityQueue::priorityQueue.rend(); 
            ++it){
            if ( *it. < element.second )
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