#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>

using namespace std;

// Ngày 10.5:
void example12()
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

/* example22: Viết mã C++ cho phép nhập:
a) Số N đại diện cho số lớp của trường liên cấp 1&2&3. Trong đó có lớp "tiền cấp 1", còn gọi là lớp 0. G/sử: 0<= N<=13
b) Nhập thành mảng h[N], trong đó lưu số giờ học (trong 1 ngày) tại trường của các lớp.
c) Nhập thành mảng m[N], lưu số tiền hàng tháng mà các cháu phải đóng.
d) Nhập thành mảng s[N], lưu kết quả thi cuối kỳ trung bình của các lớp.
e) Xem trong các lớp đóng tiền nhiều nhất thì lớp nào có số điểm/số giờ bé nhất.
*/
void example22()
{
    int N = 13;
    //------------------ b:
    double h[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Số giờ học của lớp " << i << " là: ";
        cin >> h[i];
    }
    cout << "------------------ \n";
    //------------------ c:
    unsigned int m[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Số tiền học mà học sinh lớp " << i << " phải đóng là: ";
        cin >> m[i];
    }
    cout << "------------------ \n";
    //------------------ d:
    unsigned int s[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Kết quả thi cuối kỳ trung bình của lớp " << i << " : ";
        cin >> s[i];
    }
    //------------------ e:
    int max = m[0];
    int count = 0;
    int vitriMin = 0;
    double avgMin = 0;
    int vitri = 0;
    int bienvitri = 0;
    int vitriMax[N];
    for (int i = 0; i < N; i++)
    {
        if (max < m[i])
        {
            max = m[i];
            vitriMin = i;
            avgMin = s[i] / h[i];
        };
    }
    for (int i = 0; i < N; i++)
    {
        if (max == m[i])
        {
            count++;
            int avg = s[i] / h[i];
            vitriMax[bienvitri] = i;
            bienvitri++;
            vitri = i;
            if (avgMin > avg)
            {
                avgMin = avg;
                vitri = vitriMin;
            }
        }
    }

    // Kết quả in ra:
    cout << "\n----------------- ";
    cout << "Kết quả: ";
    cout << "\nSố giờ học:";
    for (int i = 0; i < N; i++)
    {
        cout << "\nLớp " << i << " là: " << h[i] << " (tiếng) ";
    }

    cout << "\n----------------- \n";

    for (int i = 0; i < N; i++)
    {
        cout << "\n Học sinh lớp " << i << ": " << m[i] << " (USD) ";
    }

    cout << "\n----------------- \n";
    cout << "Kết quả thi trung bình cuối kỳ : ";
    for (int i = 0; i < N; i++)
    {
        cout << "\nLớp " << i << ": " << s[i] << " (điểm) ";
    }

    cout << "\n----------------- \n";
    cout << "\n=> Có " << count << " lớp có số tiền học nhiều nhất, đó là: ";
    for (int i = 0; i < bienvitri; i++)
    {
        cout << vitriMax[i] << " ";
    }
    cout << "\n   Trong đó thì lớp " << vitri << " có số điểm/số giờ bé nhất là: " << avgMin << endl;
}

int main()
{

    //    10.05:
    //    example12();
    example22();
    return 0;
}
