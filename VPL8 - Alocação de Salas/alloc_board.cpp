#include "alloc_board.hpp"
#include "allocation.hpp"
#include "course.hpp"
#include <map>
using namespace std;

bool AllocBoard::allocate(Course course, Allocation alloc){
    auto it = allocList.find(alloc);    // Confere se já existe a alocação
    if (it == allocList.end()){
        // Caso não exista, insere, preservando a ordem
        auto it = allocList.upper_bound(alloc); //1
        allocList.insert(it, pair<Allocation,Course>(alloc,course));
        return true;
    }
    // Caso existe, retorna false
    return false;
}

bool AllocBoard::deallocate(string course_id, Allocation alloc){
    auto it = allocList.find(alloc);    // Confere se já existe a alocação
    if (it != allocList.end()){
        // Caso exista e curso_id coincidem
        if (it->second.id == course_id){
            allocList.erase(it);
            return true;
        }
    }
    return false;
}

vector<Allocation> AllocBoard::find_allocations(string course_id){
    vector<Allocation> course_allocations;
    for(auto it = allocList.begin(); it!=allocList.end(); it++){
        if(it->second.id == course_id)
            course_allocations.push_back(it->first);
    }
    return course_allocations;
}