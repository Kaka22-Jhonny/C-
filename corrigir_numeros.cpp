#include <iostream> //Biblioteca de entrada e saída em C++
#include <vector>
#include <algorithm>

     int main(){
         std::vector<int> numbers = {4, 2, 5, 1, 3, 7}; //inicialização do vetor
         
         
         std::sort(numbers.begin(), numbers.end()); //ordena os elementos do vetor
         for(int number : numbers) {
             std::cout << number << " ";
         }
         std::cout << std:: endl;
         
         return 1;
         
     }