// Number is Even or Odd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cout << "Enter a Number " << endl;
	cin >> n;
	if (n % 2 == 0) cout << n <<  " is Even number" << endl;
	else cout << n << " Odd number" << endl;
    return 0;
}

