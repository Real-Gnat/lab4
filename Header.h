#include "pch.h"
#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	cout << "First Helicopter" << endl;
	Helicopter my_Helicopter;
	my_Helicopter.enter();
	my_Helicopter.show();
	cout << "Second Helicopter" << endl;
	Helicopter my_Helicopter2;
	my_Helicopter2.enter();
	my_Helicopter2.show();
	cout << "Third Helicopter" << endl;
	Helicopter my_Helicopter3;
	my_Helicopter3.enter();
	my_Helicopter3.show();

}
