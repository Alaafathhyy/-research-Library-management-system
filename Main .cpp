#include <iostream>
#include<string>
#include "List.h"
using namespace std;
//this code unsing different datastructures and manipulate them to make a library managment system
int main() {
int copiesCounter =0;
List a;
cout<<"enter the number of books in the library" <<endl;
int n;
cin >> n;
for (int i = 0; i < n; i++) {
infolist y;
cout << "Enter the Number of copies " << endl;
cin >> y.NumberOfCopiess;
cout<< "enter the ISBN"<<endl;
cin >> y.ISBN ;
cout<<"enter the book name"<<endl;
cin>> y.BookName;
for (int j = 0; j < y.NumberOfCopiess; j++) {
info b;
y.q.Push(b);
}
a.insert(y);
}
int NumberofPeople;
cout << "Enter the Number of people who want to borrow books" << endl;
cin >> NumberofPeople;
for (int i = 0; i < NumberofPeople; i++) {
string c;
cout << "Enter the name of the requested book " << endl;
cin >> c;
a.Find1(c);
}
a.Print();
cout<<endl;
cout << "Enter Number of people who want to return books" << endl;
int d;
cin >> d;
for (int i = 0; i < d; i++) {
string c;
cout << "Enter the name of the book" << endl;
cin >> c;
a.Find2(c);
}
a.Print();
a.Find3();
return 0;
}
