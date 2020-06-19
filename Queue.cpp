#include "Queue.h"
Queue::Queue() {
Front = NULL;
tail = NULL;
counterSize = 0;
NumberOfCopies = 0;
}
Queue::Queue(int n) {
Front = NULL;
tail = NULL;
counterSize = 0;
NumberOfCopies = n;
for (int i = 0; i < n; i++) {
Node a;
Push(a.x);
}
}
void Queue::Push(info y) {
Node *node = new Node;
node->x = y;
if (Front == NULL) {
Front = node;
tail = node;
counterSize++;
return;
}
tail->next = node;
tail = node;
counterSize++;
}
void Queue::Push2() {
Node *node = new Node;
cout << "Availability" << endl;
cin >> node->x.Available;
// cout << "Enter COPY DATE " << endl;
// cout<<"enter day"<<endl;
// cin >> node->x.CopyDate.day ;
// cout<<"enter month as a number"<<endl;
// cin>> node->x.CopyDate.mon ;
// cout<<"enter year"<<endl;
// cin>> node->x.CopyDate.year;
cout << "ENTER Borrow Date " << endl;
cout<<"enter day"<<endl;
cin >> node->x.BorrowDate.day;
cout<<"enter month"<<endl;
cin >> node->x.BorrowDate.mon;
cout<<"enter year"<<endl;
cin >> node->x.BorrowDate.year;
cout << "Enter Borrower Name" << endl;

cin >> node->x.BorrowerName;
cout<<"enter number of days to return the book copy"<<endl;
cin>>node->x.NumberOfDays;
if (Front == NULL) {
Front = node;
tail = node;
counterSize++;
return;
}
tail->next = node;
tail = node;
counterSize++;
}
info Queue::front() {
if (Front == NULL) {
cout << "No available copies " << endl;
} else
return Front->x;
}
int Queue::size() {
return counterSize;
}
void Queue::pop() {
Node* temp;
if (Front == NULL) {
tail = NULL;
counterSize--;
return;
}
else if (Front == tail)
{
temp = Front;
delete(temp);
Front = NULL;
tail = NULL;
counterSize--;
return;
}
temp = Front;
Front = Front->next;
counterSize--;
delete temp;
}

