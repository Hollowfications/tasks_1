#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
        int h, m;
        int result;

        cout << "enter hour: ";
        cin >> h;
        cout << "enter minute: ";
        cin >> m;

        h = h * 30;
        m = m * 6;

        if (h - m > 180)
                result = m - h;
        if (h - m <= 180)
                result = h - m;
        if (h - m == 0)
                result = 0;
        result = abs(result);
        if (result > 180)
            result = 360 - result;

        cout << "angle between is " << result << "\n";
        return 0;
}
