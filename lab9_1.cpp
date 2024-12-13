#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan;
	double per;
	double pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1;
	while( i != 0)
	{
		cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << loan;
	    cout << setw(13) << left << loan*(per/100);
	    cout << setw(13) << left << loan+loan*(per/100);
	    if( loan+loan*(per/100) <= pay)
		{
			cout << setw(13) << left << loan+loan*(per/100);
		    cout << setw(13) << left << "0.00" ;
		}
		else
		{
			cout << setw(13) << left << pay;
	        cout << setw(13) << left << (loan+loan*(per/100))-pay;
		}
	    cout << "\n";
	    if( loan+loan*(per/100) <= pay) break;
		loan = (loan+loan*(per/100))-pay;
		i++;

	}
	
	return 0;
}
