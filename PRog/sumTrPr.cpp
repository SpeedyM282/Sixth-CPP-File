/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Write a menu driven program to read and display an m × n matrix.
Also find the sum, transpose and product of two m × n matrices.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int m, n, a[15][15], x, y, b[15][15], resr, resc;
	int sum[15][15], trn[15][15], trn1[15][15], prod[15][15];
	cout << "Enter number of rows of 'A' matrix: ";
	cin >> m;
	cout << "Enter number of columns of 'A' matirx: ";
	cin >> n;
	cout << setfill('-') << setw(40) << "-" << endl;
	cout << "Enter number of rows of 'B' matrix: ";
	cin >> x;
	cout << "Enter number of columns of 'B' matirx: ";
	cin >> y;
	cout << setfill('-') << setw(40) << "-" << endl;
/*To input elements of 'A' matrix*/	
	cout << "Enter elements of 'A' matrix:" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	cout << setfill('-') << setw(40) << "-" << endl;
/*To input elements of 'B' matrix*/	
	cout << "Enter elements of 'B' matrix:" << endl;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cin >> b[i][j];
		}
	}
	cout << setfill('-') << setw(40) << "-" << endl;
/*To output elements of 'A' matrix*/
	cout << "Elements of 'A' matrix:" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << setfill('-') << setw(40) << "-" << endl;
/*To output elements of 'B' matrix*/	
	cout << "Elements of 'B' matrix:" << endl;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}
	cout << setfill('-') << setw(40) << "-" << endl;
/*To output sum of 'A' and 'B' matrixes*/
	cout << "Sum of 'A' and 'B': " << endl;
	if(m == x && n == y){
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				sum[i][j] = a[i][j] + b[i][j]; // To calculate sum of matrixes
			}
		}
	}else{
		cout << "Number of rows and columns of 'A' must be equal to 'B'!" << endl;
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << sum[i][j] << "\t";
		}
		cout << endl;
	}
	cout << setfill('-') << setw(40) << "-" << endl;
/*To output transpose of 'A' matrix*/
	cout << "Transpose of 'A':" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			trn[i][j] = a[j][i];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << trn[i][j] << "\t";
		}
		cout << endl;
	}
	cout << setfill('-') << setw(40) << "-" << endl;
/*To output transpose of 'B' matrix*/
	cout << "Transpose of 'B':" << endl;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			trn1[i][j] = b[j][i];
		}
	}
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << trn1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << setfill('-') << setw(40) << "-" << endl;
	if(n != x && y != m){
		cout << "Number of columns of 'A' must be equal to number of columns 'B'!" << endl;
	}else if(n == x){
		resr = m;
		resc = y;
	}else if(m == y){
		resr = x;
		resc = n;
	}
	for(int i = 0; i < resr; i++){
		for(int j = 0; j < resc; j++){
			prod[i][j] = 0;
			for(int k = 0; k < x; k++){
				prod[i][j] += a[i][k] * b[k][j]; // To calculate product of matrixes
			}
		}
	}
/*To output product of 'A' and 'B' matrixes*/	
	cout << "Product of 'A' and 'B':" << endl;
	for(int i = 0; i < resr; i++){
		for(int j = 0; j < resc; j++){
			cout << prod[i][j] << "\t";
		}
		cout << endl;
	}
	
	
	system("pause");
	return 0;
}









