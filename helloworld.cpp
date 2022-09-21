

#include <iostream>
#include <vector>
#include <string>
#include "helloworld.hpp"

using namespace std;

// constructor for empty box
Box::Box()
{
    cout << "An empty box has been created." << endl;
    width = 0.0f;
    height = 0.0f;
    length = 0.0f;
}

// constructor for a box with parameters
Box::Box(double len, double wid, double hei)
{

    cout << "An box has been created." << endl;
    setBox(len, wid, hei);
}

// destructor
Box::~Box()
{
    cout << "The box has been destroyed." << endl;
}

double Box::getLength()
{
    return length;
}

double Box::getWidth()
{
    return width;
}

double Box::getHeight()
{
    return height;
}

void Box::setBox(double &len, double &wid, double &hei)
{
    length = len;
    width = wid;
    height = hei;
    cout << "An box has been set." << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
}

int main()
{

    Box box1(1.0, 1.0, 1.0);
    Box box2;

    Person me;
    me.age = 24;
    me.name = "Zhetao";
    me.gender = Sex::Male;

    cout << "My name is: " << me.name << endl;
    cout << "My Age is: " << me.age << endl;
    cout << "My Gender is: " << ((me.gender == 0 ) ? "Female" : "Male") << endl;


    double b2_len = 2.0;
    double b2_wid = 2.0;
    double b2_hei = 2.0;
    box2.setBox(b2_len, b2_wid, b2_hei);





}