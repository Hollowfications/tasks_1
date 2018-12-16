#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
        int a;
        int b;
        char c;
        int result;
        cin >> a >> c >> b;
        switch(c)
        {
                case '*':
                result = a*b;
                break;

                case '/':
                result = a/b;
                break;

                case '%':
                result = a%b;
                break;

                case '+':
                result = a + b;
                break;

                case '-':
                result = a - b;
                break;
        }
        cout << result << endl;
}
