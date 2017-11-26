#include <iostream>
#include <string>
  
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "Enter Vlue a and b\n";
	cin >> a >> b;
	c = a / b;
	cout << a - c * b  <<  " - % from a and b";
}
