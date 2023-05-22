
#include <iostream>
using namespace std;

void example1()
{
    int N;

    std::cout << "Nhập số thế hệ gà trong một trang trại: ";
    std::cin >> N;
    std::cout << "Số thế hệ gà đã nhập: " << N << " (thế hệ)" << std::endl;
    int CanNang[N];
    // -----------
    for (int i = 0; i < N; i++)
    {
        std::cout << "Nhập số cân nặng của thế hệ gà " << (i + 1) << " là: ";
        std::cin >> CanNang[i];
    }
    cout << "-----------------------";
    for (int i = 0; i < N; i++)
    {
        cout << "\nSố cân nặng của thế hệ gà " << i + 1 << " la: " << CanNang[i] << " kg";
    }

    int countC = 0, quychuan = 3;
    for (int i = 0; i < N; i++)
    {
        if (CanNang[i] > quychuan)
        {
            countC++;
        }
    }
    cout << "\nCó: " << countC << " thế hệ có cân nặng trên " << quychuan << " kg";
    // -----------
    int countD = 0;
    for (int i = 0; i < N; i++)
    {
        if (CanNang[i] > CanNang[i + 1])
        {
            countD++;
        }
    }
    cout << "\nCó: " << countD << " thế hệ gà mà thế hệ sau nhẹ cân hơn thế hệ trước";
}
