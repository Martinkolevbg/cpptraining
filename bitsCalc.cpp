#include <iostream>
#include <cmath>
using namespace std;

int calcBits(int number){
    if (number == 0 || number == 1) {
        return 1;
    }
    return ceil(log2(number));
}
int calcBitsFast(int number) {
    int bits = 0;
    while (number){
        number >>= 1;
        ++bits;
    }
    return bits;
}
int main()
{
    int n = 0; 
    std::cout << "Enter natural number:";
    std::cin >> n;
    n = calcBitsFast(n);
    std::cout << "Your number needs = " << n << " bits to be written in binary."<<endl;
}
