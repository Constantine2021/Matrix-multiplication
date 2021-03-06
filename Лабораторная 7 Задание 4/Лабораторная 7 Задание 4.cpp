
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	cout << "===Задание 4=======" << endl;
	const int nrows = 3, ncols = 3;
	int A[nrows][ncols], B[nrows][ncols];
	srand(time(0));
	cout << "Матрицы А и В:\n";
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++)
			cout <<setw(5)<< (A[i][j] = -9 + rand() % 19);
		cout << "         ";
		for (int j = 0; j < ncols; j++)
			cout << setw(5)<< (B[i][j] = -9 + rand() % 19);
		cout << endl;
	}
	cout << endl;

	int Mult[nrows][ncols];
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++)
			Mult[i][j] = 0;
	}

	cout << "Произведение матриц А*В:\n";
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			for (int k = 0; k < ncols; k++) // ncols - columns of A's matrix 
				Mult[i][j] += A[i][k] * B[k][j];
			cout << setw(5) << Mult[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

