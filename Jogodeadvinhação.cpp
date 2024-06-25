#include <iostream> // Inclui a biblioteca padrão de entrada e saída em C++, necessária para usar cin e cout.
#include <cstdlib> // Inclui a biblioteca padrão C, que permite o uso da função rand() para geração de números aleatórios.

using namespace std; // Permite o uso direito das funções e objetos do namespace std, como cout e cin, sem precisar prefixar com std::.

int main() // Função principal onde a execução do programa começa.
{
    // Gera um número secreto aleatório entre 1 e 100.
    // rand() % 100 gera um número entre 0 e 99. Adicionado 1, temos o intervalo de 1 a 100.
    int numeroSecreto = rand() % 100 + 1;

    int tentativas = 8; // Define o número máximo de tentativas que o usuárop tem para advinhar o número.
    int palpite;        // Declara uma variável para armazenar o palpite de usuário.
    
    do // Início de um loop do-while que continuará executando enquanto a condição de while for verdadeira.
    {
        // Exibe o número da tentiva atual e solicita ao usuário que insira um número.
        cout << "tentiva " << tentativas << ", digite um numero:";
        
        cin >> palpite; //lê o palpite do usuario e armazena na variavel palpite.
        
        //verifica se o palpite do usuario é menor que o numero secreto.
        if(palpite < numeroSecreto)
        {
            cout << "muito Baixo!" << endl; // informa ao usuario que o palpite é muito Baixo
        }
        //Verifica se o palpite do usuario é maior que o numero secreto.
        else if(palpite > numeroSecreto)
        {
            cout<<"Muito alto!"<<endl; //informa ao usuario que o palpite é muito alto
        }
        tentativas--; //decrementa o numero de tentativas restantes.
} while(palpite!= numeroSecreto && tentativas > 0); //continua o loop enquanto o palpite não for o numero secreto e houver tentativas restantes

//Após sair do loop, verifica se o usuario adivinhou o numero secreto
if(palpite == numeroSecreto)
{
    //informa ao usuario que ele acertou o numero secreto e mostra quantas tentativas foram usadas.
    //Note que a variavel tentativas aqui reflete as tentativas restantes . Para mostrar quantas tentativas foram usadas, usamos 8 - tentativas
    cout << "parabéns! Você acertou o numero com " << 8 - tentativas << "tentativa(a)!" << endl;
}
else
{
//informa ao usuario que ele não conseguiu acertar o numero secreto.
cout << "parabéns! Você não conseguiu adivinhar o numero. O numero secreto era:" << numeroSecreto << "!" << endl;
}
return 0;} // Retorna 0 indicando que o programa terminou com sucesso.