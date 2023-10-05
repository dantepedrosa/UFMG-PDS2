#include "priority_queue.hpp"


void IntPriorityQueue::enqueue(int e, unsigned priority){
    
    IntPriorityQueue::dataType element(e, priority);
    std::vector<dataType>::iterator it;

    if (IntPriorityQueue::priorityQueue.size() != 0){
        for(it = IntPriorityQueue::priorityQueue.begin(); it < IntPriorityQueue::priorityQueue.end(); it++){
            if ( it->second < element.second )
                IntPriorityQueue::priorityQueue.insert(it, element);
          }
    }
    else
        IntPriorityQueue::priorityQueue.push_back(element);

    return;
}

void IntPriorityQueue::dequeue(){
    if (IntPriorityQueue::priorityQueue.size() != 0)
        IntPriorityQueue::priorityQueue.pop_back();
    return;
}

int IntPriorityQueue::peek(){
    return IntPriorityQueue::priorityQueue.back().first;
}

unsigned IntPriorityQueue::size(){
    return IntPriorityQueue::priorityQueue.size();
}