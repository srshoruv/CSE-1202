#include <iostream>
using namespace std;

class digit_count
{
    float digit;
    int before = 0, after = 0;

    public:
    digit_count(float n)
    {
        digit = n;
    }
    ~digit_count()
    {
        digit = 0;
    }

    void count();
};

void digit_count:: count()
{
    int dec = digit;

    while (dec)
    {
        before++;
        dec /= 10;
    }

    digit = digit - int (digit);

    while (digit != 0.0)
    {
        after++;
        int lastDig = digit * 10;
        digit = (digit * 10) - lastDig;
    }

    cout << before << " digits before decimal & " << after << " digits after decimal. \n";
}

int main() {
    float digit;
    cin >> digit;

    digit_count newCount(digit);
    newCount.count();
    return 0;
}