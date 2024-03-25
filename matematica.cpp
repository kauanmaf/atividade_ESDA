#include <iostream>

using std::cin;
using std::cout;
using std:: endl;
using std::string;

int pow(int, int);
int fatorial_iterativo(int );
float ProgressaoAritmetica(float, float, int);
int fibonacci(int)

int main() {
    // Primeira função
    int iresult1 = pow(2, 3); 
    std::cout << "2^3 = " << iresult1 << std::endl;

    // Segunda função
    int iresult2 = fatorial_iterativo(5); 
    std::cout << "5! = " << iresult2 << std::endl;
    return 0;

    // Terceira Função

}

int pow(int iBase, int iExpoente) {
    int iResposta = 1;
    
    for(int iIteracao = 1; iIteracao <= iExpoente; iIteracao++)
        iResposta *= iBase;
        
    return iResposta;
}

int fatorial_iterativo(int iFator) {
    int iResult = 1;
    for (int iCount = iFator; iCount > 0; iCount--) {
        iResult *= iCount;
    }
    return iResult; 
}

float ProgressaoAritmetica(float fStart, float fRazao, int iIndex){
    //Função que retorna o elemento Index da Progressão Aritmética definida pelo Start e Razao.
    return fStart + (iIndex - 1)*fRazao;
}

int fibonacci(int iNumValores)
{
    int iValorInicial = 0;
    int iSegundoValor = 1;
    int iUltimoValor;
    int iIteração;
    
    for(iIteração = 2; iIteração<=iNumValores ; iIteração++)
    {
        iUltimoValor = iValorInicial + iSegundoValor;
        iValorInicial = iSegundoValor;
        iSegundoValor = iUltimoValor;
    }
        
    return iUltimoValor;
}

