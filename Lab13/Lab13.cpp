#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    wcout.imbue(locale(".1251"));
    wcin.imbue(locale(".866"));
    float a, i;
    int n, s;

    //1
    cin >> a;
    for (i = 1; i <= 10; i++)
    {
        cout << a * (i / 10) << endl;
    }

    //2
    cin >> n;
    a = 1;
    for (i = 1; i <= n; i++)
    {
        a = a * (a + 0.1);
    }
    cout << a << endl;

    //3
    cin >> n;
    s = 0;
    for (i = 1; i <= (2 * n - 1); i = i + 2)
    {
        s = s + i;
    }
    cout << s << endl;

    //4
    cin >> a >> n;
    s = 0;
    for (i = 0; i <= n; i++)
    {
        s = s + pow(a, i);
    }
    cout << s << endl;

    //5
    cin >> a >> n;
    s = 0;
    for (i = 0; i <= n; i++)
    {
        s = s + pow(a, i) * pow(-1,i);
    }
    cout << s << endl;
}