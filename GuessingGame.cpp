#include <iostream>

using namespace std;

int main()
{
	int refNum = 20;
	int userNum = 0;

	cout << "Welcome to the guessing game!" << endl;
	while(refNum != userNum)
	{	
		cout << "Enter a number: " << endl;
		cin >> userNum;

		cout << "Incorrect, would you like to keep guessin (y/n)" << endl;
		char playOn = '\0';
		cin >> playOn;
		if (playOn == 'y')
		{
			continue;
		}
		else{
			userNum = 20;
		}
	}
	cout << "The reference number was 20... thanks for playing!" << endl;

	return 0;
}