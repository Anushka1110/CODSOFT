#include<iostream>//library for performing input and output operations
using namespace std;//This line allows the use of names from the std namespace without prefixing them with std::.

int main()
{
	cout<<"WELCOME TO MY CALCULATOR! "<<endl;
	int operand_1,operand_2;//declared two variable which will store the values of two operands
	
	cout<<"Enter the value of operand_1 = ";
	cin>>operand_1;//Taking the user input for first operand.
	
	cout<<"Enter the value of operand_2 = ";
	cin>>operand_2;//Taking the user input for 2nd operand
	
	cout<<"Which Operation Do You Want to perform?"<<endl;
	int choice;//variable for storing the choice given by the user
	cout<<"Choose 1 for Addition "<<endl;
	cout<<"Choose 2 for substraction"<<endl;
	cout<<"Choose 3 for Multiplication"<<endl;
	cout<<"Choose 4 for Division"<<endl;
	cin>>choice;
	switch(choice)// The switch statement begins, and it evaluates the value of the variable choice.
	{
		case 1://If the value of choice is 1, it executes the code block following this case label.
			cout<<"Addition = "<<operand_1+operand_2<<endl;
			break;
		case 2://If the value of choice is 2, it executes the code block following this case label.
			cout<<"Substraction = "<<operand_1-operand_2<<endl;
			break;
		case 3://If the value of choice is 3, it executes the code block following this case label.
			cout<<"Multiplication = "<<operand_1*operand_2<<endl;
			break;
		case 4://If the value of choice is 4, it executes the code block following this case label.
			cout<<"Division = "<<operand_1/operand_2<<endl;
			break;
		default://If the value of choice doesn't match any of the specified cases (1, 2, 3, or 4), it executes the code block following default
			cout<<"INVALID CHOICE"<<endl;
	}
	
}
