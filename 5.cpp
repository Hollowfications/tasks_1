#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        int *a, n;
        int min, max;
        cout << "enter size of array: ";
        cin >> n;
        a = new int(n);
        cout << "enter elemens of array" << endl;
        for (int i = 0; i < n; i++)
                cin >> a[i];
        min = a[0];
        max = a[0];
        for (int i = 0; i < n; i++)
         {
                if (a[i] < min)
                        min = a[i];
                if (a[i] > max)
                    max = a[i];
        }

        cout << "minimal element: " << min << endl;
        cout << "maximal element: " << max << endl;

}
