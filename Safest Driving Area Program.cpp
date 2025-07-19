// Safest Driving Area Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void getRegInfo(string &region,int &accidents )
{
    cout << "Input the region name \n";
    cin >> region;
    cout << "Input the number of accidents \n";
    cin >> accidents;
}

bool isLower(int value1, int value2)



int main()
{
    string reg_1, reg_2, reg_3, reg_4, reg_5;
    int acc_1, acc_2, acc_3, acc_4, acc_5;

    getRegInfo(reg_1, acc_1);
    getRegInfo(reg_2, acc_2);
    getRegInfo(reg_3, acc_3);
    getRegInfo(reg_4, acc_4);
    getRegInfo(reg_5, acc_5);
    //cout << south << " " << s_acc << endl;
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
