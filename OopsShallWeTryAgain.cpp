#include <iostream>
#include <cctype>

using namespace std;

int prompt(int, int, string, string);

int main() 
{
   int value = prompt(0, 100, "Please enter a value: ", "Your value is invalid");
   cout << "The value chosen by the user is " << value << endl;
   return 0;
 }

int prompt(int x, int y, string entry, string error)
{
	int num;
	cout << entry;
	cin >> num;
	while(!(num>=x && num<=y))
	{
		cout << error << endl;
		cout << entry;
		cin >> num;
	}
	
	return num;
}
