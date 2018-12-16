#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int array1[3][3];
    int array2[3][3];
    int array3[3][3];
    cout << "multiplicating matrix A and B (3x3).\n";
    cout << "enter elements of matrix A (line by line with spaces)\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> array1[i][j];

    cout << "enter elements of matrix B (line by line with spaces)\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> array2[i][j];

    cout << endl;
    cout << "C = A x B\n";
    for (int i = 0; i < 3; i++)
    {
    	for (int j = 0; j < 3; j++)
	{
        	array3[i][j] = 0;
                for (int k = 0; k < 3; k++)
                array3[i][j] += array1[i][k] * array2[k][j];
         }
     }
    for (int i = 0; i < 3; i++)
    {
    	for (int j = 0; j < 3; j++)
	{
        	cout << setw(4) << array3[i][j];
        }
    	cout << endl;
    }
        return 0;
}
