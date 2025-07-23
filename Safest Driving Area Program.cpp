// Safest Driving Area Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void getRegInfo(string &region, int &num)
{
	// This function allows the user to input the name of the region and the amount of accidents it had 

	cout << "Enter the region \n";
	cin >> region;
	cout << "Enter the number of accidents \n";
	cin >> num;
	while (num <= 0)
	{
		cout << "Invalid Entry. Please enter a postive integer \n";
		cin >> num;
	}
}

bool isLower(int lower, int higher) // Checks if the first value is lower than the second value
{
	return lower <= higher;
}

void showLowest(int acc_1, int acc_2, int acc_3, int acc_4, int acc_5, string region_1, string region_2, string region_3, string region_4, string region_5)
{
	// This function runs through all of the values from the inputs and checks which value is the lowest.
	// When a lower value is found the value for the safest region is changed
	// Once all regions have been sifted through, the name of the region and the accidents it had 
	// will be shown

	int lowest = acc_1;
	string safest = region_1;

	if (isLower(acc_2, lowest))
	{
		lowest = acc_2;
		safest = region_2;
	}

	if (isLower(acc_3, lowest))
	{
		lowest = acc_3;
		safest = region_3;
	}

	if (isLower(acc_4, lowest))
	{
		lowest = acc_4;
		safest = region_4;
	}
	if (isLower(acc_5, lowest))
	{
		lowest = acc_5;
		safest = region_5;
	}

	cout << "The safest region is " << safest << endl;
	cout << "with " << lowest << " accidents \n";
}


int main()
{
	string region1, region2, region3, region4, region5;
	int acc1, acc2, acc3, acc4, acc5;

	//  Runs the get region function for each region
	
	getRegInfo(region1, acc1);
	getRegInfo(region2, acc2);
	getRegInfo(region3, acc3);
	getRegInfo(region4, acc4);
	getRegInfo(region5, acc5);

	showLowest(acc1, acc2, acc3, acc4, acc5, region1, region2, region3, region4, region5);

}