#include "flsm.cpp"
#include "vlsm.cpp"

int option = 0;
int options(){
    std::cout << "1. FLSM\n";
    std::cout << "2. VLSM\n";
    std::cout << "3. Exit\n";
    std::cout << "Option: ";
    std::cin >> option;
    return option;
}
int main (){
    switch (options())
    {
    case 1:
        flsm();
    break;
    case 2:
        vlsm();
    break;
    case 3:
        return 0;
    break;
    default:
    options();
    main();
        break;
    }
    return 0;
}