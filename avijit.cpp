#include <iostream>
using namespace std;

class digit_count {
private:
    float digit;

public:
    // Constructor
    digit_count(float value) {
        digit = value;
    }

    // Destructor
    ~digit_count() {
        digit = 0;
    }

    void dig_count() {
        int before = 0, after = 0;
        int intPart = (int)digit;

        // Count digits before decimal
        int temp = intPart;
        if (temp == 0) before = 1;
        else {
            while (temp != 0) {
                before++;
                temp /= 10;
            }
        }

        // Count digits after decimal
        float frac = digit - intPart;

        for (int i = 0; i < 6; i++) { // Limit to 6 digits to avoid float imprecision
            frac *= 10;
            int digitAfter = (int)frac;
            if (digitAfter == 0 && after == 0)
                continue;
            after++;
            frac -= digitAfter;
        }

        cout << before << " digit before decimal & " 
             << after << " digit after decimal." << endl;
    }
};

int main() {
    float inp;
    cin >> inp;  
    digit_count obj(inp);
    obj.dig_count();  // Output: 3 digit before decimal & 3 digit after decimal.
    return 0;
}