#include <iostream>
using namespace std;

//membuat struktur untuk objek double linkedlist
struct Node
{
    //deklarasi noMhs dan name untuk menampung data
    int noMhs;
    string name;  
    //deklarasi pointer next dan pref untuk penunjukan data sebelum dan sesudah
    Node *next;
    Node *prev;
};

//deklarasi pointer start dan pemberian nilai
Node *START = NULL;

//deklarasi prosedur addNote
void addNode()
{

    //pembuatan node dan pemberian value untuk data noMhs dan name
    Node *newNode = new Node();
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;
    cout << "\nEnter the name of student : ";
    cin >> newNode->name;

    //jika start = null atau nomhs node baru <= nomhs start
    if (START == NULL || newNode->noMhs <= START->noMhs)
    {
      if (START != NULL && newNode->noMhs == START-> noMhs)  
    }
}