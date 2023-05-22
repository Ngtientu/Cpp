#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int example1()
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
    return 0;
}

int example2()
{
    // cau a:
    int M = 0;
    cout << "Yeu cau nguoi dung nhap vao so trang trai:";
    cin >> M;
    cout << "\nNguoi dung da nhap: " << M << " (trang trai)";

    // cau b:
    int SoCanNang[M];
    int SoGa[M];
    // so ga la:
    for (int i = 0; i < M; i++)
    {
        cout << " \nSo ga cua trang trai " << (i + 1) << " : ";
        cin >> SoGa[i];
    }
    // so can nang:
    for (int i = 0; i < M; i++)
    {
        cout << " \nSo can nang cua ga trong trang trai " << (i + 1) << " la: ";
        cin >> SoCanNang[i];
    }
    cout << " -------------------------------";
    for (int i = 0; i < M; i++)
    {
        cout << "\nTong so ga cua trang trai " << i + 1 << " la: " << SoGa[i] << " con";
    }
    cout << "\n-------------------------------";
    for (int i = 0; i < M; i++)
    {
        cout << "\nTong so kg ga trong trang trai " << i + 1 << " la: " << SoCanNang[i] << " kg";
    }
    // Cau c: tim max, min
    int max = SoGa[0];
    int vitri_SoGa = 0;
    for (int i = 1; i < M; i++)
    {
        if (max < SoGa[i])
        {
            max = SoGa[i];
            vitri_SoGa = i + 1;
        }
    }
    cout << "\nCau c:-------------------------------";
    cout << "\nTrang trai " << vitri_SoGa << " nuoi nhieu ga nhat: " << max << " con";

    // Cau D: tim trang trai co: khoi luong trung binh cau 1 con ga nho nhat?
    int min = INT32_MAX, averageKg = 0, vitri_min;
    for (int i = 0; i < M; i++)
    {
        averageKg = SoCanNang[i] / SoGa[i];
        if (min > averageKg)
        {
            min = averageKg;
            vitri_min = i + 1;
        }
    }
    cout << "\nCau d: --------------------------------";
    cout << "\nTrang trai " << vitri_min << " co so kg ga trung binh nho nhat: " << min << " kg/con" << endl;

    return 0;
}

int main()
{
    // example1();
    example2();
    return 0;
}

