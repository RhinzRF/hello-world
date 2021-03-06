//converting all sorts.
//23-X-2017
//24-X-2017
//25-X-2017

#include "stdafx.h"
#include <iostream>
#include <string>
void header();

class Converter
{
public:
	float cmToInches(float cm)
	{
		float inches = cm * 0.393701f;
		return inches;
	}
	float kmToMiles(float km)
	{
		float miles = km * 0.621371f;
		return miles;
	}
	float swedishKronaToSterling(float krona)
	{
		float sterling = krona * 0.093f; //correct conversion rate as of 25-X-2017
		return sterling;
	}
	float kilogramsToPounds(float kilograms)
	{
		float pounds = kilograms * 2.20462f;
		return pounds;
	}
	float litresToGallons(float litres)
	{
		float gallons = litres * 0.219969f;
		return gallons;
	}
	std::string englishToUg(std::string english)
	{
		std::string ug;
		if (english.compare("over and out") == 0)
		{
			ug = "uger und ug";
		}
		if (english.compare("Broccoli") == 0)
		{
			ug = "Ugguli";
		}
		if (english.compare("ug") == 0)
		{
			ug = "UGUGUGUGUGUUGUGUG!";
		}
		if (english.compare("Pork chops and chips") == 0)
		{
			ug = "ugug and ug!";
		}
		if (english.compare ("mommy") == 0)
		{
			ug = "Uuuug <3";
		}
		if (english.compare ("daddy") == 0)
		{
			ug = "ugug!";
		}
		return ug;
	}
};

int main()
{
	int userChoice;
	float cm;
	float inches;
	float km;
	float miles;
	float krona;
	float sterling;
	float kilograms;
	float pounds;
	float litres;
	float gallons;
	std::string english;
	std::string ug;
	Converter ugverter;
	
	header();

	std::cin >> userChoice;

	if(userChoice == 0)
	{
		std::cout << "Please enter the amount in Centimeters : ";
		std::cin >> cm;
		inches = ugverter.cmToInches(cm);
		std::cout << cm << "cm in inches is : " << inches << std::endl;
	}
	if (userChoice == 1)
	{
		std::cout << "Please enter the amount in Kilometers : ";
		std::cin >> km;
		miles = ugverter.kmToMiles(km);
		std::cout << km << "km in miles is : " << miles << std::endl;
	}
	if (userChoice == 2)
	{
		std::cout << "Please enter the amount in Swedish Krona : ";
		std::cin >> krona;
		sterling = ugverter.swedishKronaToSterling(krona);
		std::cout << krona << " Swedish Krona in Pound Sterling is : " << sterling << std::endl;
	}
	if (userChoice == 3)
	{
		std::cout << "Please enter the amount in Kilograms : ";
		std::cin >> kilograms;
		pounds = ugverter.kilogramsToPounds(kilograms);
		std::cout << kilograms << "kg in pounds is : " << pounds << std::endl;
	}
	if (userChoice == 4)
	{
		std::cout << "Please enter the amount in litres : ";
		std::cin >> litres;
		gallons = ugverter.litresToGallons(litres);
		std::cout << litres << " Litres in Gallons is : " << gallons << std::endl;
	}
	if (userChoice == 5)
	{
		std::cout << "Please enter a common phrase in English : ";
		std::cin.ignore();
		std::getline(std::cin, english);
		ug = ugverter.englishToUg(english);
		std::cout << "In Ug that would be : " << ug << std::endl;
	}
    return 0;
}

void header()
{
	std::cout << "Press 0 to convert Centimeters to Inches" << std::endl;
	std::cout << "Press 1 to convert Kilometers to Miles" << std::endl;
	std::cout << "Press 2 to convert Swedish Krona to Sterling" << std::endl;
	std::cout << "Press 3 to convert Kilograms to Pounds" << std::endl;
	std::cout << "Press 4 to convert Litres to Gallons" << std::endl;
	std::cout << "Press 5 to conver English to Ug" << std::endl;
}