#include <iostream>
using namespace std;

class Area
{
    int height;
    int radius;

    public:
    Area(int x, int y)
    {
        height = x;
        radius = y;
    }

    ~Area()
    {
        height = 0;
        radius = 0;
    }

    void CalCulate();
};

void Area :: CalCulate()
{
    if (height > 1)
    {
        int area = 2 * 3.1416 * radius * (radius + height);
        cout << "The area of the Cylinder is: " << area << endl;
    }
    else
    {
        int area = 3.1416 * radius * radius;
        cout << "The area of the Circle is: " << area << endl;
    }
}