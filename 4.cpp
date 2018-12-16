#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        system("clear");
        bool ex = true, cont;
        char k;
        int n;
        cout << "enter number of lines: ";
        cin >> n;
        cout << endl;
        for(int i = 0; i < n; i++)
        {
                cout << "\t";
                for(int j = 1; j < n-i; j++)
                        cout << ' ';
                for(int j = n-i; j <= n+i; j++)
                         cout << '*';
                for(int j = n+i+1; j < n*2; j++)
                         cout << ' ';
                cout << endl;
        }
        cout << endl;
        return 0;
}
