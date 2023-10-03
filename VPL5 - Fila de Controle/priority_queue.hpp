#pragma once

#include <vector>

class IntPriorityQueue {
  public:
    /// @brief Adiciona um elemento a fila
    ///
    /// @param e        O elemento a ser adicionado
    /// @param priority A prioridade do elemento
    void enqueue(int e, unsigned priority);

    /// @brief Remove o elemento de maior prioridade
    ///
    /// Remove o elemento de maior prioridade. Se a fila
    /// estiver vazia, não tem nenhum efeito.
    void dequeue();

    /// @brief Recupera o elemento de maior prioridade.
    ///
    /// Recupera o elemento de maior prioridade. A fila
    /// não é alterada de nenhuma forma. Assume que a
    /// fila não está vazia (comportamento indefinido caso contrário).
    ///
    /// @return O elemento de maior priodidade,
    int peek();

    /// @return Quantidade de elementos na fila
    unsigned size();
    
  private:
    typedef std::pair<int, unsigned> dataType;
    std::vector<dataType> priorityQueue;
    // Adicione aqui os campos/métodos privados da sua implementação
};