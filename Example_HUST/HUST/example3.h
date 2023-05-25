#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
using namespace std;

void example3()
{

    // cau a:
    int N;
    cout << "Yeu cau nguoi dung nhap vao so nguyen duong: \n";
    cin >> N;
    cout << "Nguoi dung da nhap so: " << N << "\n";
    // cau b:
    int sum = 0, max = 0, min = INT8_MAX;
    for (int i = 0; i < N; i++)
    {
        int income;
        cout << " \nThu nhap cua " << (i + 1) << " thang truoc la: ";
        cin >> income;
        min = std::min(min, income);
        max = std::max(max, income);
        sum += income;
    }
    // cau c:
    int average_income = sum / N;
    cout << "\nThu nhap trung binh cua " << N << " thang la : " << average_income << "\n";
    // cau d:
    cout << "Chenh lech thang thap nhat va cao nhat: " << max - min << endl;
    // cau e:
    cout << "Bao lau mua duoc o to : " << ceil(50000 / (average_income * 0.1)) << " thang" << endl;
}
