#include <iostream>
#include <string>
#include "carClass.h"

using namespace std;
/*
class Car {
    int maxSpeed;
    int voltage;
    int rimsSize;
    int horsePower;
    int bitches;
    string color;
    string make;
public:
    int currentSpeed = 0;
    void hitGas();
    void hitBrakes();
    void hitBrakesHard();
    void showDashboard();
    void showPimpDashboard();

    Car(int ms, int vol, int rSize,int hp,int bitch, string col, string mak){
        cout << "Car created" << endl << endl;
        maxSpeed = ms;
        voltage = vol;
        rimsSize = rSize;
        horsePower = hp;
        color = col;
        make = mak;
        bitches = bitch;

    }
};
*/
void Car::hitGas()
{
    currentSpeed++;
}

void Car::hitBrakes()
{
    currentSpeed--;
}
void Car::hitBrakesHard()
{
    currentSpeed-5;
}

void Car::showDashboard()
{
    std::cout << "Car model is: " << make << endl;
    std::cout << "Maximum Speed: " << maxSpeed << endl;
    std::cout << "Cable Voltage: " << voltage << endl;
    std::cout << "Car has: "<<horsePower<<" horse power"<<endl;
    std::cout << ""
              << endl;
}

void Car::showPimpDashboard()
{
    std::cout << "This is a real " << make <<", homie."<<endl;
    std::cout << "You can ride with " << maxSpeed <<" kMh with this beauty"<< endl;
    std::cout << "Cable Voltage is burning you with: " << voltage <<" volts." << endl;
    std::cout << "this baby has thouse big rims: "<< rimsSize << endl;
    std::cout << "and is painted in pure "<<color<<" paint."<< endl;
    std::cout << "You can attract "<<bitches<<" around you with that baby."<<endl;
    std::cout << ""
              << endl;
}


int main()
{
    Car bibiCar(220, 12, 17, 150, 5,"Red", "polo");
    Car gaviCar(360, 220, 20, 500, 9999,"silver","Tesla");

    bibiCar.showDashboard();
    gaviCar.showPimpDashboard();

return 0;
}
