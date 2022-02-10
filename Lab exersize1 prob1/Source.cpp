#include <iostream>


using namespace std;




int main() {

	string Name, Emotion, Animal, Number, Letter, FloatingpointNumber, name;


	cout << "Welcome to Madlibs!" << endl;
	cout << "Name:" << endl;
	cin >> Name;
	cout << "Emotion:" << endl;
	cin >> Emotion;
	cout << "Animal:" << endl;
	cin >> Animal;
	cout << "Number;" << endl;
	cin >> Number;
	cout << "Letter:" << endl;
	cin >> Letter;
	cout << "FloatingpointNumber:" << endl;
	cin >> FloatingpointNumber;
	cout << "Name:" << endl;
	cin >> name;

	cout << "Dear " << Name << " ," << endl;
	cout << "I am " << Emotion << " that I was not able to complete my homework on time. my pet " << Animal << " ate my textbook, and I was only able to retreive " << Number << " pages from its jaws. I hope I can get at least a " << Letter << " grade because I've done " << FloatingpointNumber << " of the work." << endl;
	cout << "Sincerely," << endl;
	cout << name << endl;

		
	return 0;
}