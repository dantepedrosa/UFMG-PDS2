#include "priority_queue.hpp"


void IntPriorityQueue::enqueue(int e, unsigned priority){
    IntPriorityQueue::dataType element(e, priority);
    IntPriorityQueue::priorityQueue.push_back(element)
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