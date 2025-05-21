#include <iostream>
using namespace std;

class AreaB
{
    int height;
    int width;

    public:
    AreaB(int x, int y)
    {
        height = x;
        width = y;
    }

    ~AreaB()
    {
        height = 0;
        width = 0;
    }

    void CalCulateB();
};

void AreaB :: CalCulateB()
{
    if (height == width)
    {
        int area = height * width;
        cout << "The area of the Square is: " << area << endl;
    }
    else
    {
        int area = height * width;
        cout << "The area of the Rectangle is: " << area << endl;
    }
}

int main()
{
    AreaB a(10,10);
    a.CalCulateB();
}