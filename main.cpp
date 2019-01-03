

/*************************************************************
 * Adem Cemil YALÇIN
 * 
 * Generate Calendar
 * 
 * v 1.0
 * 
 * acemilyalcin@gmail.com
 * ***********************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int startOfDay; // Declared start day of month
	int calendar[5][7];
	int endOfMonth;
	bool flag = true; // Check point for started
	int counterOfDay = 1;
	cout << "0 - Monday" << endl <<"1 - Tuesday" << endl <<"2 - Wednesday" << endl <<"3 - Thursday" << endl <<"4 - Friday" << endl <<"5 - Saturday" << endl << "6 - Sunday";
	cout << endl <<"Enter start day of month :" << endl;
	cin >> startOfDay;
	cout << "Enter end day of month :";
	cin >> endOfMonth;
	for (int i = 0; i <5; i++) {
		for (int j = 0; j < 7; j++) {
			if (flag == false) {
				calendar[i][j] = counterOfDay;
			}
			else if (startOfDay == j && flag == true)  {
				calendar[i][j] = counterOfDay; flag = false;
				}
			else {
				calendar[i][j] = ' ';
			}
			
			if (counterOfDay == endOfMonth + 1) { // If counter of day equal to end a day of the month then leave the remaining cells empty and break
				for (int k = j; k < 7; k++) {
					calendar[i][k] = ' ';
				}
				break;
			}
			if (flag==false) counterOfDay++;// increase counter of day
		}
	}
	// Prit to screen
	cout << "     -----------------------------------" << endl;
	cout << setw(10) << "|  Mon" << setw(5) << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << setw(5) << " Sun |" <<endl;
	cout << "    |-----------------------------------|" << endl;
	for (int i = 0; i <5; i++) {
		cout << setw(5) << "|";
		for (int j = 0; j < 7; j++) {
			if(calendar[i][j] == ' ') cout << setw(5) << " ";	
			else cout << setw(5) << calendar[i][j];
		}
		cout << "|";
		cout << endl;
	}
	cout << endl;
	return 0;
}