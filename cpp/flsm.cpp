#include "FLSM/insertData.cpp"
#include "FLSM/IpClass.cpp"

int flsm(){
    int ip1, ip2, ip3, ip4, mask, amountHosts, maskOption;
    std::string classIp;
    insertData(ip1, ip2, ip3, ip4, mask, amountHosts);
    classIp = ipClass(classIp, ip1,maskOption);

    return 0;
}