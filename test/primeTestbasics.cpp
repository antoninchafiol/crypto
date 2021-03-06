#include "../include/primalityTests.hpp"
#include <iostream>



int main(int argc, char const *argv[])
{
    if(argc!=3){
        std::cout << "Usage: ./primeTestbasics <p> <n>" << std::endl;
        exit(EXIT_FAILURE);
    }
    const int n = atoi(argv[1]);
    const int t = atoi(argv[2]);
    std::cout << "Number : " << n << std::endl;
    std::cout << "--------- is prime ? ---------" << std::endl;
    std::cout << "D Fermat : "  << std::boolalpha << ptFermatd(n)  << std::endl;
    std::cout << "P Fermat : "  << std::boolalpha << ptFermat(n,t)  << std::endl;
    std::cout << "D Solovay-Strassen : "  << std::boolalpha << ptSolStrassd(n)  << std::endl;
    std::cout << "P Solovay-Strassen : "  << std::boolalpha << ptSolStrass(n,t)  << std::endl;
    std::cout << "Miller-Rabin : "  << std::boolalpha << ptMRab_(n,t)  << std::endl;
    std::cout << "" << std::endl;
    return 0;
}
