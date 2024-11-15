#include <bits/stdc++.h>
using namespace std;
//Maximum size of the array is = 10^7 for (int,char,double) outside the main
//Maximum size of the array is = 10^8 for (boolean) outside the main
int main()
{
    //container array in the STL
    //array<int, 5> arr;//-->{?,?,?}
    // array<int, 5> arr={1,5,6};//-->{1,5,6,0,0}
    // array<int, 5> arr={0};//-->{0,0,0,0,0}
    // array<int, 5> arr={1};//-->{1,0,0,0,0}
    // array<int, 5> arr;
    // arr.fill(5);//-->{5,5,5,5,5}
    //iterators
    //begin(): it point the first element of the array
    //rbegin() : it point the last element of the array
    //end(): it point the right after the last element
    //rend(): it point the right before the first element
    array<int, 5> ar1={1,3,4,5,6};
    for(auto it= ar1.begin();it!=ar1.end();it++)
    { 
         cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it =ar1.rbegin();it!=ar1.rend();it++)//since it is a reverse iterator so it will be ++ so automatically it will go reverse
    { 
         cout<<*it<<" ";//since it is a pointer we need start to access the element
    }
    cout<<endl;
    for(auto it = ar1.end()-1;it>=ar1.begin();it--)
    { 
         cout<<*it<<" ";//this and above for loop will give array is reverse order
    }
//     for(auto it:ar1)
//     {
//         cout<<it<<" ";//since this is a for each loop "it" is the element itself so no need of "*"
//     }
//     string s="ajsidfi";
//     for(auto c:s)
//     {
//         cout<<c<<" ";
//     }
// //     //size
// //     cout<<ar1.size();
//     //front
//     cout<<ar1.front();
    
//     //back
//     cout<<ar1.back();
//  //Maximum size of the array is =10^6 for int, double, char  inside int main
//     //int arrr[1000000];
//     //Maximum size of the array is = 10^7 for boolean inside int main
    
    
//     //********************VECTOR*******************
//    vector<int> arr;
//    cout<<arr.size()<<endl;
//    arr.push_back(0);
//    arr.push_back(2);
//    cout<<arr.size()<<endl;
//    arr.pop_back();
//     cout<<arr.size()<<endl;
//     arr.push_back(0);
//     arr.push_back(2);
//     //segmentation fault   --->  if the size of the array is more than 10^7
//     arr.clear();//----->erase all the elements of the vector;
//     vector<int> vec1(4,0);//{0,0,0,0}
//     vector<int> vec2(4,10);//{10,10,10,10}
//     //fixing the size of the vector does not mean that you can not add elements after defined size, you can do it
//     // copies entire vec2 in vec3
//     vector<int> vec3(vec2.begin(),vec2.end());//--> [)
//     //vector<int> vec3(vec2);


//     vector<int> raj;
//     raj.push_back(1);//raj.emplace_back(1);----> it is faster than push_back;
//     raj.push_back(2);
//     raj.push_back(3);
//     raj.push_back(4);//----> {1,2,3,4}

//     vector<int> raj1(raj.begin(),raj.begin()+2);//->{1,2}
//    // swap(raj1,vec1);//swapping two vectors
//     /// defining 2D vectors

//     vector<vector<int>> sk;
     
//      vector<int> sk1;
//      sk1.push_back(6);
//      sk1.push_back(8);
//      sk1.push_back(9);

//      vector<int> sk2;
//      sk2.push_back(60);
//      sk2.push_back(80);
//      sk2.push_back(90);
//      sk2.push_back(190);
     
//      vector<int> sk3;
//      sk3.push_back(30);
//      sk3.push_back(50);
//      sk3.push_back(70);
//      sk3.push_back(1900);

//      sk.push_back(sk1);
//      sk.push_back(sk2);
//      sk.push_back(sk3);//  vk={{6,8,9},{60,80,90,190}}

//      for(auto vctr:sk)
//      {
//          for(auto it: vctr)
//          {
//              cout<<it<<" ";
//          }
//      }
//     //OUTPUT: 6 8 9 60 80 90 190 30 50 70 1900
//     //defining a 2D vector
//     //10X20 sixe 2D vector
//     // vector<vector<int>> vec1(10,vector<int>(20,0));
//     // vec1.push_back(vector<int>(20,0));
//     // cout<<vec1.size()<<endl;
//     // vector<int> arr[4];//4 size array of vectors
//     // arr[1].push_back(0);
//     //arr[0].push_back(2);//storing 2 i the first vector
//     // length of array is not dynamic but every vector stored in it is dynamic
    
    
//     //3D vector
//     //10 X 20 X 30
//     vector<vector<vector<int>>> vec(10,vector<vector<int>>(20,vector<int>(30,0)));
//     int count=0;
//     for(auto tec:vec)
//     {
//         for(auto rec: tec)
//         {
//             for(auto it:rec)
//             {
//                 cout<<it<<" ";count++;
//             }
//         }
//     }
//     cout<<"\n"<<count;
    return 0;
}