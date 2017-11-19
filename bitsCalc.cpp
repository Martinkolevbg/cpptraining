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

int main()
{
    int n = 0;
 
    std::cout << "Enter natural number:";
    std::cin >> n;

    int result = calcBits(n);

    std::cout << "Your number needs = " << result << " bits to be written in binary."<<endl;
    
    //testA
    int testNum = 5;
	int testSucc = 3;	
	int testResult = calcBitsFast(testNum);
	
	if (testResult != testSucc) {
        cout<<"ERROR! There is a mistake with test "<< testNum << endl;
    }
    
    //testB
    int testNumB = 149;
    int testSuccB = 8;
    int testResultB = calcBitsFast(testNumB);
	
	if (testResultB != testSuccB) {
        cout<<"ERROR! There is a mistake with test "<< testNumB << endl;
    }
    
    //testC	
    int testNumC = 148;
    int testSuccC = 8;
    int testResultC = calcBitsFast(testNumC);
	
	if (testResultC != testSuccC) {
        cout<<"ERROR! There is a mistake with test "<<testNumC<<endl;
    }   	
}