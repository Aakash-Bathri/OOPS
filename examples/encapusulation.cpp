#include<bits/stdc++.h>
using namespace std;

// You are tasked to design a class Book to manage the book details in a library. The class should contain the following specifications :

// Attributes :

// title (list<string>) : The title of the book (public).
// author (list<string>) : The author of the book (public)
// isAvailable (list<boolean>) : The availability status of the book (private).
// Methods :

// Parameterised constructor to initialize the title, author, isAvaialble list.
// borrowBook(string bookName) : If the availability status for book 'bookName' is true then the book can be borrowed, Once borrowed mark its status as false. 
// If availability status for book 'bookname' is false then the book is already borrowed by some user and cannot be borrowed until its returned, so print "Book is not available.".

// returnBook (string bookName) : The book with bookName is returned and should be marked as available by setting its available flag to true.
// getAvailability (string bookName) : Prints the availability status of the book with name 'bookName' (true for available , false for unavailable).

class Book{
private:
    vector<bool> isAvailable;
public:
    vector<string> title;
    vector<string> author;
    Book(vector<string> title, vector<string> author, vector<bool> isAvailable){
        this->title = title;
        this->author = author;
        this->isAvailable = isAvailable;
    }
    bool borrowBook(string bookName){
        auto index = find(title.begin(), title.end(), bookName) - title.begin();
        if(isAvailable[index]){
            isAvailable[index] = false;
            return true;
        }else{
            cout << "Book is not Available" << endl;
            return false;
        }
    }
    void returnBook(string bookName){
        auto index = find(title.begin(), title.end(), bookName) - title.begin();
        isAvailable[index] = true;
    }
    bool getAvailability(string bookName){
        auto index = find(title.begin(), title.end(), bookName) - title.begin();
        return isAvailable[index];
    }
};