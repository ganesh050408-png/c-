#include<iostream>
#include<string>
using namespace std;

class Book
{
    int id;
    string title;
    string author;
    int copies;

public:
  
    {
        if(copies > 0)
        {  void addBook()
    {
        cout<<"Enter Book ID: ";
        cin>>id;
        cin.ignore();

        cout<<"Enter Title: ";
        getline(cin,title);

        cout<<"Enter Author: ";
        getline(cin,author);

        cout<<"Enter Copies: ";
        cin>>copies;
    }

    void issueBook()
            copies--;
            cout<<"Book Issued Successfully\n";
        }
        else
        {
            cout<<"No Copies Available\n";
        }
    }

    void returnBook()
    {
        copies++;
        cout<<"Book Returned Successfully\n";
    }

    void display()
    {
        cout<<"\nBook ID: "<<id;
        cout<<"\nTitle: "<<title;
        cout<<"\nAuthor: "<<author;
        cout<<"\nAvailable Copies: "<<copies<<endl;
    }
};

int main()
{
    Book b1;

    b1.addBook();
    b1.issueBook();
    b1.returnBook();
    b1.display();

    return 0;
}