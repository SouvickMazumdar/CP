#include<bits/stdc++.h>
using namespace std;

bool comp(int el1,int el2)//comparator
{
    if(el1<=el2)
    {
        return true;
    }
    else
    return false;
}
bool comp1(pair<int,int>el1,pair<int,int>el2)
{
    if(el1.first<el2.first)
    {
        return true;
    }
    if(el1.first==el2.first)
    {
        if(el1.second>el2.second)
        {
            return true;
        }
    }
    return false;
}
//arr
//pair<int,int> arr[]={{1,4},{5,2},{5,9}};
//after sorting arr[]={{1,4},{5,9},{5,2}};
sort(arr,arr+3,comp1);
//i want you to sort this in such a way
//that the element who have first element in pair smaller
//appears first, and if first is equal the sort according
//to second and keep the larger second

int main()
{
    //*******************  bitset
    //they are generally used in segment tree
    //size specificatin is very important
    //int a[100]
    char a[100];
    //bitset--> 1 bit
    bitset<5> bt;//it is a container which only stores "1" or "0"
    //it takes very very small space as compare to integer array of size 10
    cin>>bt;//10101
    //all
    cout<<bt.all();//returns true if all bits are set/"1" else false
    //any
    cout<<bt.any();//it prints true if any of the bit is set/"1" else false
    //count
    cout<<bt.count();//if bt--> 101000    output -->2//i.e it will print the no. of set/"1" in bitset
    //flip
    cout<<bt.flip();//if flips 1->0 and 0->1
    cout<<bt.flip(2);//if flips only the bit at position 2

    //none
    cout<<bt.none();//it will print true if none is set/"1" else false
    //set
    cout<<bt.set();//entire betset is filled with set/"1"  i.e-> 101010----->111111
    cout<<bt.set(2);//it will change the  bit at index 2 with "1"
    cout<<bt.set(2,0);//it will change the  bit at index 2 with "0"
    //reset
    cout<<bt.reset();//101010-->000000
    cout<<bt.reset(2);//101010-->100010// 2nd index to 0
    
    //size
    cout<<bt.size();//will print the size of bitset

    //test
    cout<<bt.test(1);//it checks if the bit is set/"1" or not at index 1;



    //********* ALGORITHM **************
    // SORITNG

    //in interview always use merge sort due to its minimum time 
    //complexity

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
     // sort it so that only indexes from 1 to 3
     sort(arr+1,arr+4);

    vector<int> vec(5,0);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    } 
    sort(vec.begin(),vec.end());//[)
    //vec-->{1,6,2,7,4}
    //       0 1 2 3 4
    // sort it so that only indexes from 1 to 3
    //fival vec-->{1,2,6,7,4}
    sort(vec.begin()+1,vec.begin()+4);


    // IF WE WANT TO REVERSE
    //reverse(start iteratr, end iterator)--->[)
    reverse(arr,arr+n);
    reverse(arr+1,arr+4);
    reverse(vec.begin(),vec.end());
    reverse(vec.begin()+1,vec.begin()+4);

    //to find max and min element of array and vector
    int k=*max_element(arr,arr+n);
    int k=*min_element(arr,arr+n);

    int el=*max_element(vec.begin(),vec.end());
    int el=*min_element(vec.begin(),vec.end());

    //to find out the sum in that range
    int sum=0;
    for(int k=i;k<=j;k++)
    {
        sum+=arr[k];
    }
    //accumulate(startIterator,endIterator, initialSum);
    int sum=accumulate(arr,arr+n,0);
    int sum=accumulate(vec.begin(),vec.end(),0);
    
    //ar=[]->{1,6,7,1,2,1,3}
    //x=1
    //tell me how mant times the element 1 occurs int the array
    int fcnt=0;
    for(int i=0;i<n;i++)//O(n)
    {
        if(arr[i]==x)
        {
            fcnt++;
        }
    }
    cout<<cnt;
    //count(firstiterator, lastiterator, x)
    int cnt=count(arr,arr+n,1);//O(n)
    int cnt=count(vec.begin(),vec.end(),1);//O(n)

    //arr[]--> {1,2,5,1,2,4,4}
    //i want to find the first occurrence of 2
    //it is in the index 1
    int ind=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ind=i;
            break;
        }
    }
    cout<<ind;
    auto it=find(arr,arr+n,2);//return an iterator
    //pointing to the first instance of it, or else it
    //returns pointing to the end() if it is not there
    //in order to get the index 
    //just subtract begin()
    
    ///whenever you want to get index from iterator 
    //subtract begin() because it will point the starting memory
    //and in this way we will get the index
    //it-arr.begin()
    int ind=it-arr;//for array we can use this way because it also point the first element
    auto it1=find(vec.begin(),vec.end(),2);
    int ind1=it1-vec.begin();

    //if the element which we are finding is not present then
    //then the iterator will point to end
    auto it2=find(vec.begin(),vec.end(),4);
    if(it2==vec.end())
    cout<<"Element is not present";
    else
    cout<<"Element is first present at: "<<it2-vec.begin();
    
    ///binarysearch
    //this stl only works on sorted array
    //ar[]={1,5,7,9.10}
    //x=9
    //true--> 9 exists in my arr
    //x=8
    //false--> 8 does not exist in my arr


    //binary_search(firstIterator, lastIterator,x)
    //return a true or returns a false
    //works in log n complexity
    bool res=binary_search(arr,arr+n,8);
    bool res=binary_search(vec.begin(),vec.end(),8);
    
    //lower_bound function
    //returns an iterator pointing to the first
    //element which is not less than x
    //arr[]={1,5,7,8,10,10,10,11,11,12};
    //x=10
    //x=6   #iterator will point to 7
    //x=13  # iterator will point to arr.end()
    //O(log n)
    auto it3=lower_bound(arr,arr+n,x);
    int ind =it3-arr;
    
    auto it4=lower_bound(vec.begin(),vec.end(),x);
    int ind=it4-vec.begin();
    //upper_bound function
    //returns an iterator pointing to the first
    //element which is just greater than x
    //arr[]={1,5,7,8,10,10,10,11,11,12};
    //x=10  ## iterator will point the 11
    //x= 6 #iterator will point to 7
    //x=12  # iterator will point to arr.end()
    //x=12  # iterator will point to arr.end()
    //x=15  # iterator will point to arr.end()
    //O(log n)
    auto it3=upper_bound(arr,arr+n,x);
    int ind =it3-arr;
    
    auto it4=upper_bound(vec.begin(),vec.end(),x);
    int ind=it4-vec.begin();

    //to find the first occurrence of x
    int ind=lower_bound(arr,arr+n,x);
    if(ind!=n && arr[ind]==x)
    cout<<"yes it exists";
    else
     cout<<"it does not exists";
     ///you can also use binary_search()


     //to get thhe last occurence of x
     //it is sorted
     int ind=upper_bound(arr,arr+n,x)-arr;
     ind-=1;
     if(ind>=0 && arr[ind]==x)
     {
         cout<<"last occurenc"<<ind;
     }
     else{
         cout<<"Does not exist";
     }
     //tell me of times the x appears in array
     //ar[]  = {1,5,7,7,8,10,10,10,11,11,12}
     //index/   0,1,2,3,4,5,  6,7,  8, 9,10,

     //x=10  ans=3///upperbound - lower boud
     //x=6   ans=0//upperbound=2(index) lower boound=2(ind)
     //so its is working for edge cases also


     //next permutation
     // string s="abc"
     //all permutations are as follows:
     //abc
     //acb
     //bac
     //bca
     //cab
     //cba
     string s="bca";
     bool res1=next_permutation(s.begin(),s.end());
     //if no next permutation exist then it will return false;
     // if I give you  any random string s="bca"
     // I want you to print all the permutation
     string s="bca";
     sort(s.begin(),s.end());//O(nlog(n))
     //sorting is necessary to use next_permutation
     //because form where you started all permutation which ar more
     //than than the entered string, lexogreaphically...so we will miss those
     //which are less than the entered string..
     //very very important
     //for interview

     do{
         cout<<s<<endl;

     }while(next_permutation(s.begin(),s.end()));//n!--> 
     //see utube to check working of next_permutation using recursion
     bool res1=prev_permutation(s.begin(),s.end());

    //next_permutation with array
     int ar[]={1,4,53,2,9};
     int n=sizeof(ar)/sizeof(ar[0]);
     sort(ar,ar+n);   
     do{
         for(int i=0;i<n;i++) cout<<ar[i]<<" ";
     }while(next_permutation(ar,ar+n));

     //prev permutation
     bool res=prev_permutation(s.begin(),s.end());<
     



     //COMPARATOR
     //check line 13 
     
     sort(arr,arr+n,comp);
     //descending
      sort(arr,arr+n,comp);//userdefined comp
      //greater<int> is an inbuilt comparator
      //which works only when you wanna do this in descending order
      sort(arr,arr+n,greater<int>);
        //greater<int> will work with pair also
        //elements will be sorted on the basis of first element if equal 
        //then sorting will be done on the basis of second element is 
// complexity is (n log n)

    return 0;
}