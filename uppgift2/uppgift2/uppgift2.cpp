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
	//Här skriver du in sekunderna i varibeln "seconds"
	cin >> seconds;

	//Här skriver jag in så att variabeln hours = varibeln seconds /så många sekunder är det på en timme.
	hours = seconds / 3600;

	// Här skriver jag in varibeln minutes = "seconds modulus" som ska ge resterna från heltalsdivison som är delat med så många minuter det är på en timme.
	minutes = (seconds % 3600) / 60;
	// "seconds" variabeln = "seconds modulus" så många sekunder det är på en minut.
	seconds = seconds % 60;

	// Jag la in en till "cout" för att kunna lägga till ett mellanrum mellan texterna.
	cout << " " << endl;

	//Här visar jag ut alla variblarna hours, minutes, seconds.
	cout << "Det blir " << endl
		<< "timmar: " << hours << endl
		<< "minuter: " << minutes << endl
		<< "sekunder: " << seconds << endl;

	system("PAUSE");
	return 0;
}