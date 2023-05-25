#include <iostream>

using namespace std;

struct bookentry
{
    char tensach[200], tacgia[20];
} a[50];

int Example_Book()
{
    int n;
    cout << "Số cuốn sách nhỏ hơn 50: ";
    cin >> n;
    cout << "Nhập thông tin sách \n";
    cout << "---------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nThông tin về cuốn sách số " << i + 1 << "\n";
        cout << "Tên sách: ";
        // cin.getline(a[i].tensach, sizeof(a[i].tensach));
        cin >> a[i].tensach;
        cout << "\nTên tác giả: ";
        cin >> a[i].tacgia;
        cout << "----------------------\n";
    }
    cout << "==================================\n";
    cout << " STT\t| Tên sách\t| Tác giả" << endl;
    cout << "==================================\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n " << i + 1 << "\t|" << a[i].tensach << "\t|" << a[i].tacgia;
    }
    cout << "\n==================================";
}