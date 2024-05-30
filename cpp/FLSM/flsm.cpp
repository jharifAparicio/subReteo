#include <iostream>

std::string DecBinRenamed(int dec){
    std::string bin;
    while (dec > 0){
        bin = std::to_string(dec % 2) + bin;
        dec /= 2;
    }
    return bin;
}