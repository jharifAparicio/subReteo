#include <iostream>

std::string ipClass(std::string classIp,int &ip1,int maskOption){
    if(ip1 >= 1 && ip1 <= 126){
        classIp = "Clase A";
        maskOption = 8;
    }else if(ip1 >= 128 && ip1 <= 191){
        classIp = "Clase B";
        maskOption = 16;
    }else if(ip1 >= 192 && ip1 <= 223){
        classIp = "Clase C";
        maskOption = 24;
    }else if(ip1 >= 224 && ip1 <= 239){
        classIp = "Clase D";
        maskOption = 32;
    }else if(ip1 >= 240 && ip1 <= 255){
        classIp = "Clase E";
        maskOption = 32;
    }
    return classIp;
}