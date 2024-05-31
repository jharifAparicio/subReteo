#include <iostream>

void insertData(int ip1,int ip2,int ip3, int ip4, int mask, int amountHosts){
    std::cout << "Insert the ip separated by spaces\n";
    std::cin >> ip1 >> ip2 >> ip3 >> ip4;
    std::cout << "Insert mask\n";
    std::cin >> mask;
    std::cout << "Insert amonunt hosts\n";
    std::cin >> amountHosts;
    if(ip1 > 255 || ip2 > 255 || ip3 > 255 || ip4 > 255 || mask > 32 || amountHosts < 0){
        std::cout << "Invalid data\n";
        void insertData(int ip1,int ip2,int ip3, int ip4, int mask, int amountHosts);
    }
}