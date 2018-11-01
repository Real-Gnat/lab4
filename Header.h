#include "pch.h"
#pragma once
#include <iostream>
#include "string"
using namespace std;

class Helicopter
{
private:
	string max_high, name, max_weight;
public:
	string fuel_tank;
	int number_lobs;

	Helicopter() {
		max_high = "0";
		name = "0";
		max_weight = "0";
		fuel_tank = "0";
		number_lobs = 0;
		name = "0";
		color = "0";
		age = "0";

	}
	void enter() {
		cout << "enter max high =";
		cin >> max_high;
		cout << "enter name of helicopter =";
		cin >> name;
		cout << "enter max weight =";
		cin >> max_weight;
		cout << "enter fuel tank =";
		cin >> fuel_tank;
		cout << "enter number of lobs =";
		cin >> number_lobs;


	}
	void show() {
		cout << "enter max high =" << max_high << endl;
		cout << "enter name of helicopter =" << name << endl;
		cout << "enter max weight =" << max_weight << endl;
		cout << "enter fuel tank =" << fuel_tank << endl;
		cout << "enter number of lobs =" << number_lobs << endl;


	}
	~Helicopter() {


	}
protected:
	string color, age;


};