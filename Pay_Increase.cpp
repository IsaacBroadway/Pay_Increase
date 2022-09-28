// Isaac Broadway
// Date: 09/16/22
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>


using namespace std;

// Named constant//
// yay

int main()
{
	string first_name1, last_name1, first_name2, last_name2, first_name3, last_name3; 
	double salary1, salary2, salary3;
	double pay_inc_1, pay_inc_2, pay_inc_3;
	double up_sal_1, up_sal_2, up_sal_3;

	// Declare file stream variables
	ifstream inData;
	ofstream outData;

	//Open the output file
	inData.open("Ch3_Ex5Data.txt");
	outData.open(" Ch3_Ex5Data.txt.out");

	//Code for data manipulation
	inData >> last_name1 >> first_name1;
		inData >> salary1;
			inData >> pay_inc_1;
				

	inData >> last_name2 >> first_name2;
		inData >> salary2;
			inData >> pay_inc_2;
				

	inData >> last_name3 >> first_name3;
		inData >> salary3;
			inData >> pay_inc_3;
				

	

	// Calc.
	up_sal_1 = salary1 * pay_inc_1;
	up_sal_2 = salary2 * pay_inc_2;
	up_sal_3 = salary3 * pay_inc_3;


	// Output to file
	outData << fixed << showpoint << setprecision(2);

	outData << setw(11) << left << "First Name: " << setw(5) << "Last Name: " << setw(8) << "Updated Salary: " << endl;
	outData << setw(11) << left << first_name1 << " " << last_name1 << setw(8) << " " << up_sal_1 << endl;
	outData << setw(11) << left << first_name2 << " " << last_name2 << setw(8) << " " << up_sal_2 << endl;
	outData << setw(11) << left << first_name3 << " " << last_name3 << setw(8) << " " << up_sal_3 << endl;
	// Output to screen
	cout << "Processing data" << endl;
	cout << "Please check output.out file" << endl;

	//Close files
	inData.close();
	outData.close();


	return 0;
}