#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        size_t n;
        cout << "enter size of array (more than 1 element): ";
        cin >> n;
        while (n <= 1)
        {
            cout << "wrong value, please enter correct value: ";
            cin >> n;
        }

        int *a, *b;
        size_t c = n - 1;
        cout << "enter elements of array: " << endl;
        a = new int[n];
        b = new int[c];
        for (int i = 0; i < n; i++)
                cin >> a[i];

        for (int i = 0; i < c; i++)
                b[i] = a[i] + a[i+1];

        int min = b[0];

        for (int i = 0; i < c; i++)
                if (b[i] <=  min)
                        min = b[i];

        cout << "minimal sum of neighboring elements: " << min << endl;
        return 0;

}
