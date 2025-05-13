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
}