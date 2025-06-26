#include <iostream>
#include <ctime>
using namespace std;


int main(){
	srand(time(0));
	
	int numOfAttempts = 10;
	int number = rand() % 90 + 10;
	int userInput;
	int i = numOfAttempts;
	
	cout << "Find a number from 10 to 100" << endl << "You have " << numOfAttempts << " attempts" << endl;
	
	do {
		cin >> userInput;
		numOfAttempts --;	
	
		if(numOfAttempts == 0){
			cout << endl << "You lose! Correct answer is " << number << endl;
		}else{
			if(userInput == number){
				cout << endl << "Number is guessed from the " << i - numOfAttempts << " attempt" << endl << endl;
				numOfAttempts = 0;
			}
			else if(userInput < number){
				cout << endl << "The number is greater than the entered" << endl << "You have " << numOfAttempts << " attempts left" << endl;
			}	
			else{
				cout << endl << "The number is less than the entered" << endl << "You have "  << numOfAttempts << " attempts left" << endl;	
			}
		}
		
	} while(numOfAttempts>0);

	return 0;
	 
}