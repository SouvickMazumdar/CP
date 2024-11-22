#std::partial_sort

 which is used for sorting not the entire range, but only a sub-part of it. It rearranges the elements in the range [first, last), 
in such a way that the elements before middle are sorted in ascending order, whereas the elements after middle are left without any specific order. It can be used in two ways as shown below:

Template 
void partial_sort (RandomAccessIterator first, RandomAccessIterator middle,
                   RandomAccessIterator last);

first: Random-Access iterator to the first element in the container.
last: Random-Access iterator to the last element in the container.
middle: Random-Access iterator pointing to the element in the 
range [first, last), that is used as the upper boundary for the elements 
to be sorted.

Return Value: It has a void return type, so it does not return any value.

// C++ program to demonstrate the use of
// std::partial_sort
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> v = { 10, 45, 60, 78, 23, 21, 3 };

	vector<int>::iterator ip;

	// Using std::partial_sort
	std::partial_sort(v.begin(), v.begin() + 1, v.end());

	// Displaying the smallest element after applying
	// std::partial_sort

	ip = v.begin();
	cout << "The smallest element is = " << *ip;

	return 0;
}

Output:
1 1 3 10 3 3 7 7 8 

Here, only first three elements are sorted from first to middle, and here first is v.begin() and middle is v.begin() + 3, and rest are without any order.
