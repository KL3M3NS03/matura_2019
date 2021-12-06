// matura_2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
// n%2 == 1
int wypelnienie_tablicy(int M[], int n)
{
	int random = rand() % 100 + 1;
	for (int i = 0; i < n; i++)
	{
		M[i] = random;
		random = rand() % 100 + 1;
	}

	std::cout << "[ ";
	for (int i = 0; i < n; i++)
	{
		std::cout << M[i] << ", ";
	}
	std::cout << " ]" << std::endl;
	return *M;
}

// n%2 == 0
int sprawdzenie(int M[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (M[i] % 2 == 0)
		{
			std::cout << "Pierwsza liczba napisana przez Jasia to: " << M[i] << std::endl;
			break;
		}
	}
	return *M;
}

int main()
{
	srand(time(NULL));
	int n;
	std::cout << "Podaj n: ";
	std::cout << std::endl;
	std::cin >> n;
	if (n < 2)
	{
		std::cout << "Podaj n, ktore jest wieksze lub rowne 2: ";
		std::cout << std::endl;
		std::cin >> n;
	}

	int* M = new int[n];
	wypelnienie_tablicy(M, n);
	sprawdzenie(M, n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
