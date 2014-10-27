// ArrayImplementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>
using namespace std;

struct Node {
	int age;
	string Name;
};

void printArray(int s[], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << "["<<s[i]<<"]";
	}
}

void printArray(Node s[], int length) {
	for (int i = 0; i < length; i++)
	{
		
		cout << "[" << s[i].Name <<", " <<s[i].age << "]";
	}
	cout << endl;
}

void printArray(Node* s[], int length) {
	for (int i = 0; i < length; i++)
	{

		cout << "[" << s[i]->Name << ", " << s[i]->age << "]";
	}
	cout << endl;
}

void sortArray(int s[], int length) { //bubblesort O(n^2) time this shit blows
	for (int i = 0; i < length; i++) { //for the integer at position 0 to the end
		for (int x = 0; x < length - 1; x++) { // for the integer at position 0 to the end - 1
			if (s[x] > s[x+1]) { // compare itself and neighbor
				int temp = s[x]; //save what x holds
				int temp2 = s[x+1]; // save what neighbor holds
				s[x] = temp2; //perform swap
				s[x+1] = temp; //perform swap
				printArray(s, length);
			}
		}
	}
}

int binarySearch(int s[], int start, int end, int search) { //O(log n) time to search for ya number
	int middle = (end + start)/2;
//  end = length - 1; since its a array we start from 0
//  search = value we're looking for;
	if (start == end) {
		if (s[start] == s[end] == search) {
			cout << "It is at position:" << start << endl;
			return start;
		}
	}
	else {
		if (s[middle] == search) {
			cout << "Value is at index: " << middle << endl;
			return (middle);
		}

		else if (s[middle] > search) {
			return binarySearch(s, start, middle, search);
		}
		else {
			return binarySearch(s, middle, end, search);
		}
	}
}

//Node age sort!!===========================================================================================
void sortArray(Node s[], int length) { //bubblesort O(n^2) time this sucks
	for (int i = 0; i < length; i++) { //for the integer at position 0 to the end
		for (int x = 0; x < length - 1; x++) { // for the integer at position 0 to the end - 1
			if (s[x].age > s[x + 1].age) { // compare itself and neighbor
				int temp = s[x].age; //save what x holds
				string nameTemp = s[x].Name;
				s[x].age = s[x+1].age; //perform swap
				s[x].Name = s[x + 1].Name;
				s[x + 1].age = temp; //perform swap
				s[x + 1].Name = nameTemp;
				//printArray(s, length);
			}
		}
	}
}

void sortArray(Node* s[], int length) { //bubblesort O(n^2) time this sucks
	for (int i = 0; i < length; i++) { //for the integer at position 0 to the end
		for (int x = 0; x < length - 1; x++) { // for the integer at position 0 to the end - 1
			if (s[x]->age > s[x + 1]->age) { // compare itself and neighbor
				int temp = s[x]->age; //save what x holds
				string nameTemp = s[x]->Name;
				s[x]->age = s[x + 1]->age; //perform swap
				s[x]->Name = s[x + 1]->Name;
				s[x + 1]->age = temp; //perform swap
				s[x + 1]->Name = nameTemp;
				//printArray(s, length);
			}
		}
	}
}
//===========================================================================================================
//Node Name sort!!===========================================================================================
void sortArrayName(Node s[], int length) { //bubblesort O(n^2) time this shit blows, age sort
	for (int i = 0; i < length; i++) { //for the integer at position 0 to the end
		for (int x = 0; x < length - 1; x++) { // for the integer at position 0 to the end - 1
			if (s[x].Name > s[x + 1].Name) { // compare itself and neighbor
				string temp = s[x].Name; //save what x holds
				int numberTemp = s[x].age;

				s[x].Name = s[x + 1].Name; //perform swap
				s[x].age = s[x + 1].age;
				s[x + 1].Name = temp; //perform swap
				s[x + 1].age = numberTemp;
				//printArray(s, length);
			}
		}
	}
}

void sortArrayName(Node* s[], int length) { //bubblesort O(n^2) time this shit blows, age sort
	for (int i = 0; i < length; i++) { //for the integer at position 0 to the end
		for (int x = 0; x < length - 1; x++) { // for the integer at position 0 to the end - 1
			if (s[x]->Name > s[x + 1]->Name) { // compare itself and neighbor
				string temp = s[x]->Name; //save what x holds
				int numberTemp = s[x]->age;
				
				s[x]->Name = s[x + 1]->Name; //perform swap
				s[x]->age = s[x + 1]->age;
				s[x + 1]->Name = temp; //perform swap
				s[x+1]->age = numberTemp;
				//printArray(s, length);
			}
		}
	}
}
//===========================================================================================================



//Array 
//get = O(1)
//set = O(1)
//search = amortized binary search is O(log n), search = O(n - index)



int main()
{
	//==================================================================
	/*Node myNodeStuff[5];
	Node Apple;
	Apple.age = 16;
	Apple.Name = "Apple";
	Node Grape;
	Grape.age = 17;
	Grape.Name = "Grape";
	Node Orange;
	Orange.age = 18;
	Orange.Name = "Orange";
	Node Lemon;
	Lemon.age = 19;
	Lemon.Name = "Lemon";
	Node Berry;
	Berry.age = 20;
	Berry.Name = "Berry";
	
	myNodeStuff[0] = Apple;
	myNodeStuff[1] = Grape;
	myNodeStuff[2] = Orange;
	myNodeStuff[3] = Lemon;
	myNodeStuff[4] = Berry;
	
	sortArrayName(myNodeStuff, 5);
	printArray(myNodeStuff, 5);*/

	
	//===================================================================
	//Works now========================================
	Node* sumStuff[5];
	Node* America = new Node();
	America->age = 125325;
	America->Name = "America";
	sumStuff[0] = America;
	Node* Japan = new Node();
	Japan->age = 1543;
	Japan->Name = "Japan";
	sumStuff[1] = Japan;
	Node* Mexico = new Node();
	Mexico->age = 5;
	Mexico->Name = "Mexico";
	sumStuff[2] = Mexico;
	Node* China = new Node();
	China->age = 5833;
	China->Name = "China";
	sumStuff[3] = China;
	Node* Russia = new Node();
	Russia->age = 99;
	Russia->Name = "Russia";
	sumStuff[4] = Russia;
	//==========================================================================
	printArray(sumStuff,5);
	sortArrayName(sumStuff, 5);
	printArray(sumStuff, 5);
	sortArray(sumStuff, 5);
	printArray(sumStuff, 5);
	int x;
	/*
	int i;
	int p = 0;
	int *myShit;
	cout << "How many elements do you want in your array?" << endl;
	cin >> i;
	


	myShit = new int[i];
	memset(myShit, 0, i);
	if (myShit == nullptr) {
		cout << "Memory cannot be allocated" << endl;
	}
	else {
		for (p; p < i; p++) {
			cin >> myShit[p];
		}
	}

	
	sortArray(myShit, i);
	printArray(myShit, i);
	//binarySearch(myShit, 0, (i - 1), 0);*/
	cin >> x;
	return 0;
}

