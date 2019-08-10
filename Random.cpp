#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int r , num;
	srand(time(NULL));
	r = 1+rand()% 100;
	cout << setfill('=') << setw(24) << ""<< endl;
	cout << "Program guessing number" << endl;
	cout << setw(25) << " "<< endl;
	do
	{
		cout << "Enter Integer number (0-99) : " ;
		cin >> num;
		if(num > r) cout << "Your number is more than." << endl<<endl;
		else cout << "Your number is lower than." << endl<<endl;
	}while (num != r);
	cout << "Correct, Random number is " << r << endl << endl;
	return(0);
}