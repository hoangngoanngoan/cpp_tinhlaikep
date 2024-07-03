// cpp_tinhlaikep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double tiengui; cout << "Nhap so tien gui: "; cin >> tiengui;
    double tienlai; 
    double tienloi;
    double laisuat; laisuat = 0.08;
    //cout << "Nhap lai suat: "; cin >> laisuat;
    int sonam; cout << "Nhap so nam gui: "; cin >> sonam;
    
    cout << "------------------------------------------------\n";
    for (int i = 1; i <= sonam; i++) {
        tienlai = tiengui * laisuat;
        cout << "|\tTien lai nam thu: " << i  << " la: " << tienlai << endl;
        tiengui = tienlai + tiengui;
        cout << "|\tTong tien nam thu: " << i << " cong lai la: " << tiengui << endl;
    }    
    cout << "------------------------------------------------";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
