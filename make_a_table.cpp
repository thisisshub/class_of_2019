/* make a table to display
   name, board, marks, division */
   
#include <iostream>
#include <iomanip>
using namespace std;
  
int main(void){
	
	string name, division;
	int marks, board;
	
	cout<<"Enter the student's name: ";
	cin >> name;
	cout<<"Enter the marks: ";
	cin >> marks;
	cout<<"Enter the division: ";
	cin>>division;

	cout<<"Select choice of BOARD"<<endl;
	cout<<"1. MP Board Selected"<<endl;
	cout<<"2. CBSE Board Selected"<<endl;
	cout<<"3. ICSE Board Selected"<<endl;
	cin >>board;

	switch(board){
		case 1: if (board == 1)
					cout<<"MP Board Selected"<<endl;
				break;
		case 2: if (board == 2)
					cout<<"CBSE Board Selected"<<endl;
				break;
		case 3: if (board == 3)
					cout<<"ICSE Board Selected"<<endl;
				break;
		default: cout<<"bleh"<<endl;	
		}
		
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(15) <<"Name" << setw(15) << "Board" << setw(15) << "Marks" << "Division"<<endl;
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(15) << name << setw(15)  << board << setw(15) << marks << division <<endl;
	
}	
   
