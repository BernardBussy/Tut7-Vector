//Tutorial 7, Vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> intVector;
	for (int i = 0; i < 20; i++)
	{
		intVector.push_back(rand()%200); //Push back will automatically increment the vector
	}
	vector<int>::iterator intVectorIterator = intVector.begin();

	cout << "The Integer Array Before Sorting:\n";
	while (intVectorIterator != intVector.end())
	{
		cout << *intVectorIterator << " ";
		intVectorIterator++;
	}
	cout << endl;

	sort(intVector.begin(), intVector.end());
	cout << "The Integer Array after Sorting:\n";
	intVectorIterator = intVector.begin();
	while (intVectorIterator != intVector.end())
	{
		cout << *intVectorIterator << " ";
		intVectorIterator++;
	}
	cout << endl;

	reverse(intVector.begin(), intVector.end());
	cout << "The Integer Array after Reversing:\n";
	intVectorIterator = intVector.begin();
	while (intVectorIterator != intVector.end())
	{
		cout << *intVectorIterator << " ";
		intVectorIterator++;
	}
}