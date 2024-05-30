#include "BinDec.cpp"

int main (){
    std::string bin;
    int dec;
    std::cout << "ingrese un numero decimal:";
    std::cin >> dec;
    std::cout << "binario: " << DecBinRenamed(dec) << std::endl;
    //std::cout << "Decimal: " << BinDecRenamed(bin) << std::endl;
    return 0;
}