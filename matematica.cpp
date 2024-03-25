#include <iostream>

using std::cin;
using std::cout;
using std:: endl;
using std::string;

int pow(int iBase, int iExpoente) {
    int iResposta = 1;
    
    for(int iIteracao = 1; iIteracao <= iExpoente; iIteracao++)
        iResposta *= iBase;
        
    return iResposta;
}

int main() {
    int iresult = pow(2, 3);
    std::cout << iresult;
    return 0;
}
// int fatorial_iterativo(int iFator){

// }


