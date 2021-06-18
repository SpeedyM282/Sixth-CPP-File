/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: In a small company there are five salesmen.
Each salesman is supposed to sell three products.
Write a program using 2D array to print 
1) The total sales by each salesman and 
2) Total sales of each item.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	system("Color f"); // To change color of text
	int a[3][5], sales[5], prod[3], total = 0; 
	cout << "Enter how many products has sold each salesman:" << endl;
/*To input how many products has sold each salesman*/	
	for(int i = 0; i < 3; i++){
		cout << setfill('-') << setw(40) << "-" << endl;
		cout << "Product" << i+1 << ":" << endl;
		cout << setfill('-') << setw(40) << "-" << endl;
		prod[i] = 0;
		for(int j = 0; j < 5; j++){
			cout << "Salesman" << ": ";
			cin >> a[i][j];
			prod[i] += a[i][j];
		}
	}
/*To calculate how many products has sold each salesman totally*/	
	for(int i = 0; i < 5; i++){
		sales[i] = 0;
		for(int j = 0; j < 3; j++){
			sales[i] += a[j][i];
		}
	}
	cout << setfill('-') << setw(125) << "-" << endl;
/*To output amount of each product by each salesman*/	
	for(int i = 0; i < 3; i++){
		cout << "Product" << i + 1 << ":\t";
		for(int j = 0; j < 5; j++){
			cout << "Salesman" << j+1 << ": " << a[i][j] << "\t\t";
		}
		cout << "\t" << endl;
		cout << setfill('-') << setw(125) << "-" << endl;
/*To output total amount of each product by each salesman*/		
		cout << "\nProduct total: " << prod[i] << endl << endl;
		cout << setfill('-') << setw(125) << "-" << endl;
	}	
	cout << endl;
/*To output how many products has sold each salesman totally*/	
	for(int j = 0; j < 5; j++){
		cout << "Salesman" << j + 1 << "'s total sales: " << sales[j] << endl << endl;
	}
	cout << setfill('-') << setw(28) << "-" << endl;
	system("pause");
	return 0;
}



