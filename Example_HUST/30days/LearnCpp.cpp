#include <iostream>
#include <cmath>

using namespace std;

void phanTichSoNguyen()
{
    int n;
    cout << "Nhap so nguyen duong n = ";
    cin >> n;

    int i = 2;
    int dem = 0;
    int a[100];
    // phan tich
    while (n > 1)
    {
        if (n % i == 0) // neu n %2 = 0
        {
            n = n / i; // n = n/2
            a[dem++] = i;
        }
        else
            i++;
    }
    // neu dem = 0 thi n la nguyen to
    if (dem == 0)
    {
        a[dem++] = n;
    }
    // in ket qua ra man hinh
    for (i = 0; i < dem - 1; i++)
    {
        printf("%d x ", a[i]);
    }
    printf("%d", a[dem - 1]);
}

void Example1()
{
    int n;
    cout << "nhap so dau vao: ";
    cin >> n;
    for (int i = int(sqrt(n)); i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << endl;
            break;
        }
    }
}

int main()
{
    // phanTichSoNguyen();
    Example1();
    return 0;
}