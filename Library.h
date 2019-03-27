//
// Created by Brad Starnes on 2019-03-14.
//

#ifndef CS303_PROJECT1_LIBRARY_H
#define CS303_PROJECT1_LIBRARY_H

#include <stdio.h>
#include <string>
#include <queue>
#include <list>
#include "book.cpp"


class Library {

private:
    list<Book> toBeCirculated;
    list<Book> archivedBooks;
    list<Employee*> universityEmployeeList;

public:
    Library();
    ~Library();

    void add_book(string newBook);
    void add_employee(string newPerson);
    void circulate_book(string bookToMove, Date dayOfMove);
};


#endif //CS303_PROJECT1_LIBRARY_H
