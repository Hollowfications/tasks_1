#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        float a;
        float b;
        float c;
        float discriminant;
        float x;
        cout << "enter coefficients of equation:" << endl;
        cin >> a >> b >> c;
        cout << "(" << a << ")*x^2 + (" << b << ")*x + (" << c << ") = 0" << endl;
        if (a != 0)
        {
            cout << endl << "roots:" << endl;
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
                        x = -b/(2*a);
                        cout << "x1 = x2 = " << x << endl;
                    }
                    else
                    {
                        x = (-b + discriminant)/2*a;
                        cout << "x1 = " << x << endl;
                        x = (-b - discriminant)/2*a;
                        cout << "x2 = " << x << endl;
                    }

            }
        }
        else
        {
            cout << "root: " << endl;
            x = -c/b;
            cout << "x = " << x << endl;
        }

}
