#include <iostream>
#include <vector>
//using namespace std;

int main() {
    
    // Letras a serem analizadas
    const char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    // Inicializar vetor
    typedef std::pair<char, int> vecType;
    std::vector<vecType> characteres;
    vecType character;
    for(char letra : vogais) { 
        character.first = letra;
        character.second = 0;
        characteres.push_back(character);
    }

    // Capturar input
    std::string palavra;
    std::cout << "Entrada = ";
    std::cin >> palavra;
    
    // Para cada letra da palavra, conferir é igual ao vetor
    for(char letra : palavra){
        for(int i = 0; i<characteres.size(); i++){
            if (characteres[i].first == letra)
                characteres[i].second++;
        }
    }

    //  Imprimir letras na tela
    std::cout << "Saída = " << std::endl;
    for(vecType caractere : characteres){
        if (caractere.second != 0){
            std::cout
                << caractere.first 
                << " " 
                << caractere.second 
                << std::endl;
        }
    }
        
    return 0;
}