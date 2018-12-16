#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        int array[3][3];
        cout << "enter elements of matrix line by line with spaces" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> array[i][j];

        cout << "inverted matrix: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << array[j][i] << " ";
            cout << endl;
        }
}
