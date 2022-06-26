#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";
	cout << "Enter a number: ";
	cin >> adventurers;
	cout << "Enter a number, smaller than the first: ";
	cin >> killed;
	survivors = adventurers - killed;
	cout << "Enter your last name: ";
	cin >> leader;
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << " -- in search of the lost treasure of the Ancient Dwareves. ";
	cout << "The group was led by that legendary rogue, " << leader << " .\n";
	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fougth bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventures. " << killed << " were vanquished. ";
	cout << " leaving just " << survivors << " in the group.\n";
	return 0;

}