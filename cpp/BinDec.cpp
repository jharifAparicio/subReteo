#include <iostream>

int listBin[] = {128, 64, 32, 16, 8, 4, 2, 1};

int BinDecRenamed(std::string bin){
    int decimal = 0;
    for (int i = 0; i < bin.length(); i++){
        if (bin[i] == '1'){
            decimal += listBin[i];
        }
    }
    return decimal;
}

std::string DecBinRenamed(int dec){
    std::string bin = "";
    for (int i = 0; i < 8; i++){
        if (dec >= listBin[i]){
            bin += "1";
            dec -= listBin[i];
        } else {
            bin += "0";
        }
    }
    return bin;
}