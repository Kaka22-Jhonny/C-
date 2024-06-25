#include <iostream> //Biblioteca de entrada e saída em C++
#include <vector>

int main()
{
   std::vector<int> numbers; //Declaração de um vetor de inteiros
   
        
        numbers.push_back(1); //Adiciona um elemento no final do vetor
        numbers.push_back(2);
        numbers.push_back(3);
        numbers.push_back(4);
        numbers.push_back(5);
        numbers.push_back(6);
        
        
        for(int nunber : numbers) { //Itera sobre os elementos do vetor
            std::cout<<nunber<<" ";
        }
        std::cout << std::endl;

    return 0;
}---+