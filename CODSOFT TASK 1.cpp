#include<iostream>//library for input output operations
#include<ctime>//library for dealing with time function
#include<cstdlib>//library for random number generation
using namespace std;
int main()
{
	int max=100;//max representing the upper limit of the range of random number.
	
	int random;//variable holding the randomly generated number
	
	int num_guessed=0;//num_guessed stores the user guessed number
	
	int attempt = 0;//attemp Keeps track of the number of attempts made by the user.
	
	srand(time(0));//This line initializes the random number generator with the current time as a seed. This ensures a different random number in each program run.
	
	random = (rand()%max)+1;//This line generates a random number between 1 and 100 using the rand() function.
	
	cout<<"LET'S PLAY A NUMBER GUSSING GAME!"<<endl;
	
	while(num_guessed!=random)//This loop continues until the user correctly guesses the random number.
	{
		cout<<"Guess a number entered by a machine between the range(1 to 100)!   ";
		cin>>num_guessed;
		attempt++;
		if(num_guessed>random){
		cout<<"THE NUMBER GUESSED IS TOO HIGH "<<endl;
		}
		else if(num_guessed<random){
		cout<<"THE NUMBER GUESSED IS TOO LOW"<<endl;
		}
	}
	cout<<"You guessed the number correct "<<random<<" In "<<attempt<<" Attempts";

	return 0;
}
