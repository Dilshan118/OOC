/*Exercise 1:

a) In Visual C++, create a new Win32 Console Application project. Save the project in your
Desktop. Name the project as Lab-02-ex1. ( refer Lab-01 for creating a new project in
Visual Studio )

b) Write a C++ program to do the following;
i) Input 10 integers from the keyboard and store them in an array of called numbers.

ii) Write a function called searchKey() to send an integer to the function as
parameter and search for the number in the number array. If the value is found
then return the index of the element and if not found then return -1. Print the index
in the main program or a message “Value not found”.

iii) Write a function called findMax() to find the maximum number of this array and
print the number in the main program. */


#include<iostream>

int searchKey(int num, int* numbers);
int findMax(int* numbers);

using namespace std;
int main()
{
	int numbers[10], i, search_key, search_key_value, max_num;

	for (i = 0; i < 10; i++)
	{
		cout << "Enter the intiger number "<<i+1 <<":";
		cin >> numbers[i];

	}

		cout << "send a search key :";
		cin >> search_key;

		search_key_value = searchKey(search_key, numbers);

		if (search_key_value < 0)
		{
			cout << "Value not found!"<<endl;
		}
		else
		{
			cout<<"Index No : " << search_key_value<<endl;
		}

		max_num = findMax(numbers);

		cout << "Max num is : "<< max_num<<endl;

		return 0;
}

int searchKey(int num, int numbers[])
{
	int i, value = -1;

	for (i = 0; i < 10; i++)
	{
		if (numbers[i] == num)
		{
			value = i;
		}
	}
	return value;
}
int findMax(int* numbers)
{
	int i, max = 0;

	for (i = 0; i < 10; i++)
	{

		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}

	return max;
}
