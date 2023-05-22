#include <iostream>

using namespace std;

void bai1()
{
    int a, lonNhat = 0;
    cout << "Nhap a: ";
    while (true)
    {
        cin >> a;
        if (lonNhat < a)
        {
            lonNhat = a;
        }
        else if (a == 0)
        {
            cout << "\n ****** Dung chuong trinh !!! ******";
            break;
        }
    }
    cout << "\n So lon nhat: " << lonNhat;
}

void bai2()
{
    /*Nhap 2 so nguyen duong la n va x.
    Sau do nhap tiep 1 day so nguyen gom n so.
    Tim so x co xuat hien trong day do ko?
    Neu co in ra Yes, ko in ra No.*/
    int n, x;
    bool a = !true;
    int daySonguyen[n];
    cout << "Nhap n va x: ";
    cin >> n >> x;
    cout << "nhap " << n << " so vao:";
    for (int i = 0; i < n; i++)
    {
        cin >> daySonguyen[i];
        if (x == daySonguyen[i])
        {
            a = true;
        }
    }
    if (a == true)
    {
        cout << "\n Yes !!!";
    }
    else
    {
        cout << "\n No !!!";
    }
}
void bai3()
{
    /*Nhap 1 so nguyen n va mot day so nguyen duong.
   Dem so lan suat hien cua so 2 trong day so do.*/
    int n, dem = 0;
    cout << "Nhap n: ";
    cin >> n;
    cout << "\n Nhap " << n << " so: ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 2)
        {
            dem++;
        }
    }
    cout << "\n so 2 xuat hien: " << dem << " lan !!!";
}

void bai4()
{
    /*Nhap mot day so nguyen. In ra Yes neu day tang, No neu nguoc lai*/
    int dayA[5];
    bool check = true;
    cout << "Nhap a: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> dayA[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (dayA[i] >= dayA[i + 1])
        {
            check = false;
        }
    }
    if (check)
        cout << "\n Yes !!!";
    else
        cout << "\n No !!!";
}

void bai5()
{
    /*Cho day N so nguyen.
    Sx lai day theo thu tu tang dan 0 < N < 1000*/

    int n;
    int mang[1000];
    cout << "Nhap n: ";
    cin >> n;
    cout << "\nNhap mang gom " << n << " so: ";

    for (int i = 0; i < n; i++)
    {
        cin >> mang[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mang[i] > mang[j])
            {
                swap(mang[i], mang[j]);
            }
        }
    }
    cout << "\nMang da sx: ";
    for (int i = 0; i < n; i++)
    {
        cout << mang[i] << " ";
    }
}

void bai6aKimTuThap()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
    // Hoac:
    string str = "";
    for (int i = 0; i <= n; i++)
    {
        str += "* ";
        cout << str << endl;
    }
}

void bai6bKimTuThap()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "--------------b \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-------------- \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
// -----------------------------X
bool NguyenTo(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
void bai7()
{
    /*Nhập vào 2 số a và b.
    In ra toàn bộ số nguyên tố từ a đến b. 0<a,b<1000*/
    int a, b;
    cout << "Nhập a, b: ";
    cin >> a >> b;
    cout << endl;
    for (int i = a; i <= b; i++)
    {
        if (NguyenTo(i) == true)
        {
            cout << i << " ";
        }
    }
}
// -----------------------
void CuuChuong(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    cout << endl;
}
void bai8()
{
    // Bảng cửu chương:
    for (int i = 1; i <= 10; i++)
    {
        CuuChuong(i);
    }
}

void bai9()
{
    /* Một danh sách gòm n số nguyên dương.
    In ra các phần tử ko trùng nhau.
    0<n<1000*/
    int n, mangN[1005];
    cout << " Nhập n: ";
    cin >> n;
    cout << "Nhập " << n << " số vào mảng: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> mangN[i];
    }
    // truy xuat mang
    for (int i = 1; i <= n; i++)
    {
        bool check = true;
        for (int j = 1; j < i; j++)
        {
            if (mangN[i] == mangN[j])
            {
                check = false;
            }
        }
        if (check)
        {
            cout << mangN[i] << " ";
        }
    }
}

void bai10()
{
    /*Một dãy n số nguyên.
    In ra Yes nếu 3 phần tử có tổng = 100.
    No nếu ngược lại.*/
    int n, a[1005];
    bool check = false;
    cout << " Nhập n: ";
    cin >> n;
    cout << "Nhập " << n << " số vào mảng: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if ((a[i] + a[j] + a[k]) == 100)
                {
                    check = true;
                }
            }
        }
    }
    if (check)
    {
        cout << "Yes " << endl;
    }
    else
    {
        cout << "No !! " << endl;
    }
}

int n, a[1000], x;
bool check = false;
bool timX()
{
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return true;
        if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}
void bai11()
{
    /* Nhập số nguyên dương n và sau đó là n số nguyên dương được sắp xếp
    thứ tự tăng dần. Nhập số nguyên dương x.
    In ra Yes nếu x xuất hiện trong danh sách trên.*/
    cout << "Nhập n :";
    cin >> n;
    cout << "\nNhập " << n << " số tăng dần: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Nhập x: ";
    cin >> x;
    if (timX())
        cout << "\n-------Yess------- !!! \n";
    else
        cout << "-------No------- !!! \n";
}

int main()
{
    // bai1();
    // bai2();
    // bai3();
    // bai4();
    // bai5();
    // bai6aKimTuThap();
    // bai6bKimTuThap();
    // bai7();
    // bai8();
    // bai9();
    // bai10();
    bai11();
    return 1;
}