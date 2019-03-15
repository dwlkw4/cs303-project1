# Project 1
# Team Members: Adam Smith, David Leatherman, 
Project Option 1B - Book Tracker

**Member Responsibilities**

	Adam: 
	
	David:
	
	Brad:
	
**To-Do**

- Book Class
	* Book List Tracker
- Employee Class
	* Employee Tracking System (Whos Next)
- Book Retention Tracker
- UML Layout
- Main.cpp
- Algorithm Design

**Project Guidelines (Rules)**

- All variables must begin with lowercase and follow the rules of Camel case labeling with variables
- All commits must have a unique message to github. We do not need duplicate commit messages that specifically say what was changed
- Comment where needed
- Create your OWN branch on your local machine and/or GitHub and this push to your branch. We will need to create a branching into master system that works best for all.



# Technical Requirements

• (**Weight: 10%**) The system should keep track of two lists: (1) Books to be circulated: these are
the books that will be circulated to employees. (2) Archived books: when the last employee on
the queue returns the book to the library, the book gets added to the list of archived books.

• (**Weight: 5%**) The system should keep track of employees: these are the employees that will get
the books later on.

• (**Weight: 25%**) Circulate a book to the employees in the system. The circulation starts on a given
date. Further, the system makes a queue of employees that should receive the book. The queue
should be prioritized based on two factors: (1) the total waiting time for the employee: How
many days the employee waited to get a book since the beginning of the circulation. (2) The
total retaining time: How many days the employee retained books.

• (**Weight: 20%**) Make a data structure (priority queue) that allows the pushing and popping of
items. The popped item is the item with the highest priority. The queue should also be
updatable whenever an item’s priority changes.

• The more the employee waited, the higher the priority. The more she retained a book, the lower
the priority. To put it simply, the priority is: waiting_time – retaining_time.
The employee in front of the queue gets the book.

• (**Weight: 40%**) The system should allow the employee to pass the book on to the next employee
on the queue on a given date.

• Passing on the book has the following outcome:

     • If the employee who is passing on the book is the last in the queue, the book gets
       archived.
       
     • The total retaining time for the employee who passed on the book gets adjusted.
     
     • The total waiting time for the employee who got the book gets adjusted.
     
     • If there are other queues for other books, and these queues contain the employee who
       passed on the book and the employee who got the book, then adjust these queues
       (because the priorities have changed).
       
     • See Figure 1 for an illustration.
     
     
![alt text](https://github.com/RedGrinGrumbler/cs303-project1/blob/master/fullsizeoutput_521.jpeg)
     
     
