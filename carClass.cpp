#include <iostream>
#include <string>

using namespace std;

class Car {
    string model;
    int voltage;
    int bitches;
    int rimsSize;
    int stereo;
    string color;

public:
    int currentSpeed = 0;
    int maxSpeed;
    
    Car(string, int, int, string);
    void hitGas();
    void hitBrakes();
    void showDashboard();
    void showPimpDashboard();
};

Car::Car(string m, int cVoltage, int mSpeed, int bitch)
{
    cout << "Car created" << endl;
    model = m;
    voltage = cVoltage;
    maxSpeed = mSpeed;
    bitches = bitch;
}

void Car::hitGas()
{
    currentSpeed++;
}

void Car::hitBrakes()
{
    currentSpeed--;
}

void Car::showDashboard()
{
    std::cout << "Car model is: " << model << endl;
    std::cout << "Car max Speed: " << maxSpeed << endl;
    std::cout << "Car Cable Voltage: " << voltage << endl
              << endl;
}

void Car::showPimpDashboard()
{
    std::cout << "Car model is: " << model << endl;
    std::cout << "Car max Speed: " << maxSpeed << endl;
    std::cout << "Car Cable Voltage: " << voltage << endl;
    std::cout << "Car Has thouse big rims " << rimsSize << " nigga" << endl;
    std::cout << "Car collor:"<<carColor
    std::cout << "Car attracts " << bitches << " BITCHES!!!" << endl
              << endl;
}

int main(){
    Car bibiCar("CADILAC", 12 , 170 , 666, "PINK")
    bibiCar.showPimpDashboard();
    
    Car gaviCar("Tesla", 220, 320, 456);
    gaviCar.currentSpeed = 80;
    gaviCar.showDashboard();

    while (gaviCar.currentSpeed < 320) {
        gaviCar.hitGas();
    }
    cout << "Gavi car is moving with " << gaviCar.currentSpeed << "kmH" << endl;

    while (gaviCar.currentSpeed != 50) {
        gaviCar.hitBrakes();
    }

    cout << "Gavi car is moving with " << gaviCar.currentSpeed << "kmH" << endl;

    return 0;
}