#include<iostream>

using namespace std;

class Vehicle
{
    string fuelType;
    double tankCapacity;

    int wheels;
    string gearMode;
    string vehicleClass;

    double batteryCharge;
    int batteryCount;
    

    public:

    string getFuelType()
    {
        return fuelType;
    }

    int getWheels()
    {
        return wheels;
    }

    string getGearMode()
    {
        return gearMode;
    }

    void setFuelType(string f)
    {
        fuelType=f;
    }

    void setWheels(int w)
    {
        wheels=w;
    }

    void setGearMode(string g)
    {
        gearMode=g;
    }

    void BaseDetails()
    {
        cout<<"Fuel : "<<fuelType<<endl;
        cout<<"Wheels: "<<wheels<<endl;
        cout<<"Gear Mode: "<<gearMode<<endl;
    }


};

class Operations
{
    virtual bool TwoWheelDrive()=0;
    
    virtual bool FourWheelDrive()=0;
    
    virtual bool OnFuel()=0;
    
    virtual bool OnElectric()=0;
    
    virtual bool FirstGear()=0;

    virtual bool SecondGear()=0;

    virtual bool ThirdGear()=0;

    virtual bool FourthGear()=0;

    virtual bool FifthGear()=0;

    virtual bool ReverseGear()=0;
        
    virtual bool LowFuel()=0;

    virtual bool LowCharge()=0;
};

