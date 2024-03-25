#include <iostream>

using std::cin;
using std::cout;
using std:: endl;
using std::string;

int pow(int, int);
int fatorial_iterativo(int );
float ProgressaoAritmetica(float, float, int);
int fibonacci(int);
int numDigitos(int);

int main() {
    // Primeira função
    int iresult1 = pow(2, 3); 
    cout << "2^3 = " << iresult1 << endl;

    // Segunda função
    int iresult2 = fatorial_iterativo(5); 
    cout << "5! = " << iresult2 << endl;

    // Terceira Função
    float fresult3 = ProgressaoAritmetica(2.0, 3.0, 4); 
    cout << "O quarto elemento da progressão aritmética é: " << fresult3 << endl;

    // Quarta função
    int iresult4 = fibonacci(10); 
    cout << "O 10º termo da sequência de Fibonacci é: " << iresult4 << endl;

    // Quinta função
    int iresult5 = numDigitos(1234); 
    cout << "O número de dígitos em 1234 é: " << iresult5 << endl;

    return 0;
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
    int iIteracao;
    
    for(iIteracao = 2; iIteracao<=iNumValores ; iIteracao++)
    {
        iUltimoValor = iValorInicial + iSegundoValor;
        iValorInicial = iSegundoValor;
        iSegundoValor = iUltimoValor;
    }
        
    return iUltimoValor;
}

int numDigitos(int iNumero) {
    int iNumDigitos = 0;
    while (iNumero > 0) {
        iNumero /= 10;
        iNumDigitos += 1;
    }
    return iNumDigitos;
}