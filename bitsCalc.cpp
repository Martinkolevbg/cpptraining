#include <iostream>

int calcBits(int number){

    if (number == 0 || number == 1) {
        return 1;
    }
    
    return ceil(log2(number));
}

int main()
{
    int n=0;
 
    std::cout << "Enter natural number:";
    std::cin >> n;

    int result = calcBits(n);

    std::cout << "Your number needs =" << result << " bits to be written in binary."<<endl;
    
    return 0;
}