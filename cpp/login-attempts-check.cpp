// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int pause;

int main()
{

	string pwd1, pwd2;
	pwd1 = "1234";

	

	

	int attempts = 3;
	do {
	sm:
		cout << "enter password" << endl;
		cin >> pwd2;
		attempts--;

		if (pwd1 == pwd2) {
			cout << "you have been logged in successfully";
			break; 
		}

		else if (attempts > 0) {
			cout << attempts << "attempts left" << endl;
			goto sm;
		}

		else {
			cout << "you have used up all your chances and we are closing this form for you " << endl;
		}
	}

	while (attempts > 0); 
	

	cin >> pause;
    return 0;
}

