
/* 
 * File:   newmain.cpp
 * Author: chrystallahavadjia
 * Purpose: array of names
 * 8.7
 */

#include <iostream>
#include <string>
using namespace std;
//User Libraries

//Global Constants
const int SIZE = 20;

// Function prototype
int searchStudent(string name[], int, string);
void nameOrdering(string name[SIZE], int size);

//Execution Begins Here
int main()
{
    
    string name[SIZE] =
    {"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
    "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
    "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
    "Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
    "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};
    
    string value;
    int result;
    string studentName;
    
    nameOrdering( name, SIZE);
    searchStudent(name, SIZE, value);
    
    //Display Names
    cout << "The names on this list are" << endl ;
    for (int i = 0; i < SIZE; i++)
    {
        cout << name[i] << endl;
    }
    
    //user input
   cout << "Enter the first and last name of the student you are looking for" << endl;
   getline (cin, studentName);
    
    if (result == -1)
	cout << "This name is not on the list " << endl;
    else
	cout << name[result] << " was found in " << result << ".\n"; 

	return 0;
}
// 
int studentSearch(string name[SIZE], int size, string value)
{
	int first = 0,						
		last = size - 1,				
		middle,						
		place = -1;					
	bool found = false;					

	while (!found && first <= last)
	{
		middle = (first + last) / 2; 	
		if (name[middle] == value)	
		{
			found = true;
			place = middle;
		}
		else if (name[middle] > value) 
			last = middle - 1;
		else
			first = middle + 1;			
	}
	return place;	
}
//order students
void nameOrdering(string name[], int size)
{
	int  minI;
	string minValue;
        int start;

	for (start = 0; start < (size - 1); start++)
	{
		minI = start;
		minValue = name[start];
		for (int i = 0; i < size; i++)
		{
			minValue = name[i];
			minI = i;
		}
                
		name[minI] = name[start];
		name[start] = minValue;
	}
}

