#include <iostream> 
using namespace std; 

int main()
{
	//Jag skapade tre int variablar som heter hours,  minutes, seconds.
	int hours, minutes, seconds;

	//cout = see out
	//"ange sekunder" kommer visas i terminalen
	cout << "Ange sekunder: ";

	//cin = see in
	//H�r skriver du in sekunderna i varibeln "seconds"
	cin >> seconds;

	//H�r skriver jag in s� att variabeln hours = varibeln seconds /s� m�nga sekunder �r det p� en timme.
	hours = seconds / 3600;

	// H�r skriver jag in varibeln minutes = "seconds modulus" som ska ge resterna fr�n heltalsdivison som �r delat med s� m�nga minuter det �r p� en timme.
	minutes = (seconds % 3600) / 60;
	// "seconds" variabeln = "seconds modulus" s� m�nga sekunder det �r p� en minut.
	seconds = seconds % 60;

	// Jag la in en till "cout" f�r att kunna l�gga till ett mellanrum mellan texterna.
	cout << " " << endl;

	//H�r visar jag ut alla variblarna hours, minutes, seconds.
	cout << "Det blir " << endl
		<< "timmar: " << hours << endl
		<< "minuter: " << minutes << endl
		<< "sekunder: " << seconds << endl;

	system("PAUSE");
	return 0;
}