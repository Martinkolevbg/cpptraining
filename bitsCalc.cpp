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

    while (number)
    {
        number >>= 1;
        ++bits;
    }

    return bits;
}

int testCalcBits(int testNum , int testSucc){	
	int testResult = calcBitsFast(testNum);
	
	if (testResult != testSucc) {
        cout<<"ERROR! There is a mistake with test "<< testNum << endl;
    }
    return 0;
}
int testCalcBitsFast (int testNum , int testSucc){
    int testResult = calcBitsFast(testNum);
	
	if (testResult != testSucc) {
        cout<<"ERROR! There is a mistake with test "<<testNum<<endl;
    }   
    return 0;
}

int main()
{
    int n = 0;
 
    std::cout << "Enter natural number:";
    std::cin >> n;

    int result = calcBits(n);

    std::cout << "Your number needs = " << result << " bits to be written in binary."<<endl;
    
    testCalcBits(5,3);
    testCalcBits(149,8);
    testCalcBits(15,4);
    testCalcBits(11,3);
    testCalcBits(18,5);
    
    testCalcBitsFast(5,3);
    testCalcBitsFast(149,8);
    testCalcBitsFast(15,4);
    testCalcBitsFast(11,3);
    testCalcBitsFast(18,5);
}