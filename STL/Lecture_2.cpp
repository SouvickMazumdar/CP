#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,5,3,2,1,3};
    set<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);//insertion in set takes O(log(n)) of time compolexity{Red Black Tree}
    }
    //in order to access set element we have to use iterator
    //*st.begin();==> first element
    //*st.begin()+1;==> second element
    //set store unique elements and in linearly increasing order
    //Inside set storing is done in followinf manner==>{1,2,3,5}
    //Function of set
    st.erase(st.begin());//st==>{2,3,5}//O(log n) //time
   // st.erase(st.begin(),st.begin()+2);//==>[)//O(log n)//time
    //st.erase(startIterator,endIterator)==>{3,5}
    st.erase(5);//it will erase the element 5==>{3}
    set<int> st1={1,3,6,7,0};
    set<int> set1(st1.begin(),st1.end());

    auto t=st.find(7);//log n// it will return iterator to 7
    auto it=st.find(9);//it =st.end();//since it does not contain 7 
    st.emplace(9);//st.insert(9); emplace works faster than insert
    cout<<st.size();
    for(auto it:st)
    {
        cout<<it<<endl;
    }
    st.erase(st.begin(),st.end());
    ///***************unordered set**************
    unordered_set<int> st2;
    st2.insert(2);
    st2.insert(3);
    st2.insert(1);
    //element will be inserter in random order uniquely
    //average time complexity is O(1)
    //NOTE: always use unordered set if you do not require the ascending order criteria//TLE= switch to set
    // but the worst case is linear in nature==>O(set size);
   //**************Multi Set***********
   multiset<int> ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(3);
   ms.insert(2);
   ms.insert(2);//ms.emplace(3);
   //st->{1,1,2,2,3};//stores element in ordered manner
   ms.erase(2);//delete all the instances  of 2;
   auto it=ms.find(2);//returns the iterator pointing the first instance
   ms.erase(ms.begin(),ms.end());//delete all the elements betweend the iterator
   ms.clear();//delete all the element
   ms.erase(ms.find(2));//deleted the first instance of 2 in ms
   
   st.count(2);//counts how many times 2 occured
   
   ///************ MAP ***************
   //key--> value
   //raj-> 27
   //hima-> 31
   //sandeep--> 67
   //tank-> 89
   //map only stores unique keys in linearly increasing order of keys
   map<string, int> mpp;
   mpp["raj"]=27;
   mpp["hima"]=31;
   mpp["sandeep"]=67;
   mpp["tank"]=89;
   mpp["raj"]=29;//this overrides the earlier value
   //You can use emplace()
   
   //MAP IMPLEMENTS AVL TREE

   mpp.emplace("raj",45);
   mpp.erase("raj");//mpp.erase(key);
   mpp.erase(mpp.begin());//mpp.erase(iterator)
   mpp.clear();//entire map is cleaned up
   //mpp.erase(mpp.begin(),mpp.begin()+2);//cleans upp within the range
   auto it=mpp.find("raj");//points tob where raj lies

if(mpp.empty())
{
    cout<<"map is empty"<<endl;
}
mpp.count("raj");//always return 1 as it stores only one instance of "raj"



//*************pair**********
// pair<int,int> pr;
// pr.first(1);
// pr.second(10);
//printing map
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;//map stores value in the form of pair->here it stores pair<string,int>
    //so we can use first and second to access the key and value of map
    //here it is pair that's why we can access element usind ".";

}

for(auto it=mpp.begin();it!=mpp.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;//here it is iterator that's why "->" is used
}
//does not stores in any order
unordered_map<int, int> mpp;
//unordered map do not support pair
//O(1) is almost all cases
//O(n) in the worst case , where n is the container size

//Pair class

pair<int, int> pr={1,2};
pair<pair<int,int>,int> pr2={{1,2},3};
cout<<pr2.first.second<<endl;
pair<pair<int,int>,pair<int,int>> pr3={{1,2},{3,4}};
cout<<pr3.first.first<<endl;//-->1
cout<<pr3.second.second<<endl;//-->4
vector<pair<int,int>>vec;
set<pair<int,int>> spr;
map<pair<int,int>,int> mpr;


multimap<string,int> mtp;
mtp.emplace("rarj",13);
mtp.emplace("rarj",134);
//it can store multiple similar keys in ascending order, without any error


////Stack and Queue
stack<int> stk;//lifo ds
//pop
//top
//size
//empty
//push and emplace

stk.push(2);
stk.push(4);
stk.push(3);
stk.push(1);
cout<<stk.top();//prints 1;
stk.pop();
cout<<stk.top();//prints 3;
stk.pop();
cout<<stk.top();
while(!st.empty())
{
    stk.pop();
}
cout<<stk.size()<<endl;
stack<int> stk1;
//cout<<st.top()<<endl///this statement will through error because their is no element in the stack, before using top() always check first;
if(!stk1.empty())
{
    cout<<st.top()<<endl;
}

//*************Queue*************
queue<int> q;//fifo
q.push(1);
q.push(5);
q.push(3);
q.push(6);
cout<<q.front()<<endl;///prints 1
q.pop();
cout<<q.front()<<endl;///prints 5
//deletion of all the element takes linear time

while(!q.empty())
{
    q.pop();
}
//their is no iterator concept in stack and queue

///***************Priority Queue***************
//stores all the elements in descending order(max at the top) and can perform various function
//it uses the concept of heapify
//FUNCTION:
//priority_queue
//push
//size
//top pop empty

priority_queue<int> pq;
pq.push(1);
pq.push(5);
pq.push(2);
pq.push(6);


cout<<pq.top();//print 6

pq.pop();
cout<<pq.top();//print 5
priority_queue<pair<int,int>> pq10;
pq10.push(1,5);
pq10.push(1,6);
pq10.push(1,7);
//if irst elements are equal then depending upon the second element ,elements will be inserted in piriority queue
// A TRICK TO CONVERT MAX priority_queue TO MIN priority_queue
priority_queue<int> pq3;
pq3.push(-1);
pq3.push(-5);
pq3.push(-2);
pq3.push(-6);
cout<<-1*pq3.top()<<endl;//prints 1;

pq3.pop();
cout<<-1*pq3.top()<<endl;//prints 2;

//minimum priority_queue
priority_queue<int,vector<int>,greater<int>> pq4;
pq4.push(4);
pq4.push(1);
pq4.push(6);
pq4.push(3);
cout<<pq4.top();//prints 1
//minimum element will be at the top


//Priority Queue support duplicate

//if you want to store pair
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq4;


     




//DEQUEUE

//dequeue<int> dq;
//push_front();
//push_back();
//pop_front();
//pop_back();
//begin,end,rbegin,rend
//size
//clear
//empty
//at
//remove



 //push_front();
//push_back();
//pop_front();
//pop_back();
//begin,end,rbegin,rend
//size
//clear
//empty
//at
//remove-->O(1)
list<int> lst1;
lst1.push_front(1);
lst1.push_front(2);
lst1.push_front(3);
lst1.push_front(4);
lst1.remove(2);//-->O(1) very fast
//HW Question 
//given N elements, print the elements that occurs maximum
//number of times
//input
//5
//1 3 3 3 2

//SOLUTION:

int n;
cin>>n;
map<int,int> mpt;
int maxi=0;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    mpt[x]++;
    if(mpt[x]>mpt[maxi])//mpt[0]==> return null which is truncatred to 0
    {
        maxi=x;
    }
}
//Time complexity of above solution
//O(n*logn)

//if we will use unorderd map
//time complexity==> O(N)
//worst case --> O(N^2)
//If TLE appears roll back to map

//given N elements, print ALL the elements in sorted order
//input
//n=6;
//6 6 3 2 3 5
//


int n;
cin>>n;
multiset<int> ms;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    ms.insert(x);
}
for(auto it:ms)
{
    cout<<it<<endl;
}
cout<<maxi;
 return 0;
}
