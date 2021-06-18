/*
Name: Akhadbek Rizakulov
ID: 2010227
Purpose: Write a program to generate Pascal’s triangle.
*/

#include<iostream>
#include<iomanip>
using namespace std;

/*To calculate factorial*/
long fact(long n){
   int i, fact = 1;
   for(i = n; i>1; i--){
      fact *= i;
   }
   return fact;
}
/*Function for the Pascals Triangle*/
long nCr(long n, long r){
   long nume = 1, i;
   for(i = n; i>r; i--){
      nume *= i;
   }
   return long(nume/fact(n-r));
}
/*To output elements of Pascals Triangle*/
void PascalsTriangle(long n){
	int array[n][n];
    for(int i = 0; i<n; i++){
      for(int j = 0; j<(i+1); j++){	
	    array[i][j] = nCr(i, j);
	  }
   }
    for(int i = 0; i <n;i++){
         for(int j = 0; j<(i+1); j++){	
         cout <<array[i][j];
	  }
	  cout<< endl;
	}
}


int main(){
   int n;
   cout << "Enter Number of lines: "; cin >> n;
   PascalsTriangle(n); // Calling function to display Pascals Triangle
}








