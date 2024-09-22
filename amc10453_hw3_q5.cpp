// amc10453_hw3_q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// get user pounds/inches and convert in kg and meters

#include <iostream>
using namespace std;

int main()
{

	double weightInPounds, heightInInches;
	double kilos = 0.453;
	double meters = 0.0254;
	

	cout << "Please enter weight (in pounds): "; cin >> weightInPounds;
	cout << "Please enter height (in inches): "; cin >> heightInInches;


	double weightConversion = weightInPounds * kilos;
	double heightConversion = heightInInches * meters;

	double BMI = weightConversion / (heightConversion * heightConversion);

	if (BMI < 18.5)
	{
		cout << "The weight status is: Underweight" << endl;
	}
	else if (BMI >= 18.5 && BMI <= 25 ) 
	{
		cout << "The weight status is: Normal" << endl;
	}
	else if (BMI >= 25 && BMI <= 30) 
	{
		cout << "The weight status is: Overweight" << endl;
	}
	else if (BMI >= 30)
	{
		cout << "The weight status is: Obese" << endl;
	}


	return 0;
}

