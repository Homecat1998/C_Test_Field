#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Sex{
    Female,
    Male
};

struct Person{
    string name;
    int age;
    Sex gender;
};

class Box
{
public:
    double getLength();
    double getWidth();
    double getHeight();
    void setBox(double &len, double &wid, double &hei);

    Box();
    Box(double len, double wid, double hei);
    ~Box();

private:
    double length; // 盒子的长度
    double width;  // 盒子的宽度
    double height; // 盒子的高度
};
