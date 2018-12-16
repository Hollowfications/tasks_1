#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        int a;
        int b;
        int c;
        int discriminant;
        float x;
        cout << "enter coefficients of equation:" << endl;
        cin >> a >> b >> c;
        cout << "(" << a << ")*x^2 + (" << b << ")*x + (" << c << ") = 0"
             << endl << "root(s):" << endl;
        discriminant = b*b - 4*a*c;
        if (discriminant < 0)
        {
                cout << "no valid roots";
        }
        else
        {
                discriminant = sqrt(discriminant);
                if (discriminant == 0)
                {
                    x = -b/(2*c);
                    cout << x;
                }
                else
                {
                    x = (-b + discriminant)/2;
                    cout << x << endl;
                    x = (-b - discriminant)/2;
                    cout << x << endl;
                }

        }


}
