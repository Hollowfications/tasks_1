#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        int array1[3][3];
        int array2[3][3];
        cout << "enter elements of matrix line by line with spaces" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                cin >> array1[i][j];
                array2[j][2-i] = array1[i][j];
            }

        cout << "inverted matrix: \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cout << array2[i][j] << " ";
            cout << endl;
        }
}

/*
31 21 11  | 11 12 13
32 22 12  | 21 22 23
33 23 13  | 31 32 33
*/


