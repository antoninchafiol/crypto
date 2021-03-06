#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>


using namespace std;
#define u64 uint64_t

bool isCongruent(int x, int y, int modulo);
//bool isPrime(int a);
unsigned int mod_pow(unsigned int number, unsigned int exponential, unsigned int modulo);
u64 random_range(u64 low, u64 high);
unsigned int modDivide(int a, int b, int m) ;
unsigned int modInverse(unsigned int a, unsigned int modulo);
unsigned int chinese_remainder(vector<unsigned int> ak, vector<unsigned int> nk);
unsigned int pgcd(unsigned int a, unsigned int b);
vector<int> bCoeff(unsigned int a, unsigned int b);
vector<int> generate_prime(int max);