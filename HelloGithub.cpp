/* Daniel Plowman
	COSC 2030
	Jan 28, 2019
	Lab 00		*/

#include "stdafx.h"      /* These first 4 lines of code all load header files which allow the program to utilize input/output capabilities and other utilities*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() // this initializes the main block of code, which can also call other programs
{
	string line, response;	//defines two variables as strings, named line and response
	cout << "Hello Github!" << endl;	//outputs hello github to the command line
	ifstream file_squestns;		//creates an input file stream named file_squestions
	file_squestns.open("StudentQuestions.txt");	//opens StudentQuestions.txt as the input file
	ofstream file_sanswers;		//creates an output file stream names file_sanswers
	file_sanswers.open("StudentAnswers.txt"); //opens or creates StudentAnswers.txt as the ouput file
	while (getline(file_squestns, line))	//starts a loop that continues looping while the input file has another line in it
	{
		cout << line << " "; //ouputs the line that is being looked at in the input file
		cin >> response;  //sets the string named "response" to the input entered by the user
		file_sanswers << response << endl; //writes "response" to the input file, then returns
	}
	cout << "Goodbye Github!" << endl;	//ouputs goodbye github! then returns
	return 0;							// returns 0 to the upper level program, in the main code block it closes the program
}
