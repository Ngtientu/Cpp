#include <iostream>
#include <algorithm>
#include <math.h>
#include "example1.h"
#include "example2.h"
#include "example3.h"
#include "example4.h"
using namespace std;

int main()
{
    int n;
    cout
        << "Nhập chương trình muốn chạy: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "------ Đây là chương trình 1 ------- \n";
        example1();
        break;
    case 2:
        cout << "------ Đây là chương trình 2 ------- \n";
        example2();
        break;
    case 3:
        cout << "------ Đây là chương trình 3 ------- \n";
        example3();
        break;
    case 4:
        cout << "------ Đây là chương trình 4 ------- \n";
        example4();
        break;
    default:
        break;
    }

    return 0;
}
