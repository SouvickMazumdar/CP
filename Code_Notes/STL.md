# std::partial_sort

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







# std::nth_element in C++
Last Updated : 15 Nov, 2023
std::nth_element() is an STL algorithm that rearranges the list in such a way such that the element at the nth position is the one which should be at that position if we sort the list.

It does not sort the list, just that all the elements, which precede the nth element are not greater than it, and all the elements which succeed it are not less than it.

It has two versions, which are defined below:

1. Comparing elements using “<“:
Syntax

void nth_element (RandomAccessIterator first, RandomAccessIterator nth,
                  RandomAccessIterator last);
Parameters

first: Random-access iterator to the first element in the list.
last: Random-access iterator to the last element in the list.
nth: Random-access iterator pointing to the position in the list, which should be sorted.
If it points to the end, then this function will do nothing.

Return Value

Since the return type is void, so it does not return any value.
Example




// C++ program to demonstrate the use of std::nth_element
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i;
 
    // Using std::nth_element with n as 5
    std::nth_element(v, v + 4, v + 8);
 
    // Since, n is 5 so 5th element should be sorted
    for (i = 0; i < 8; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
Output
3 2 10 23 33 56 45 47 
Here, the fifth element is 33, and all elements to its left are smaller than it and all elements to its right are greater than it.
