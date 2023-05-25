#include <iostream>
#include <string>

using namespace std;

typedef struct SinhVien
{
    string HoTen;
    int NamSinh;
    double DiemTB;
} sv;

int main()
{
    sv a[100];
    int n = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ho ten + nam sinh + diemTb cua sv " << i + 1 << ": ";
        cin >> a[i].HoTen >> a[i].NamSinh >> a[i].DiemTB;
    }
    double max = a[0].DiemTB, min = a[0].DiemTB;
    for (int i = 1; i < n; i++)
    {
        if (max < a[i].DiemTB)
            max = a[i].DiemTB;
        if (min > a[i].DiemTB)
            min = a[i].DiemTB;
    }

    int j = 0;
    cout << "Diem cao nhat lop: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i].DiemTB == max)
        {
            cout << "#" << j + 1 << endl;
            cout << a[i].HoTen << " \t" << a[i].NamSinh << "\t " << a[i].DiemTB << endl;
            j++;
        }
    }
    j = 0;
    cout << "Diem thap nhat lop: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i].DiemTB == min)
        {
            cout << "#" << j + 1 << endl;
            cout << a[i].HoTen << " \t" << a[i].NamSinh << "\t " << a[i].DiemTB << endl;
            j++;
        }
    }
    return 0;
}