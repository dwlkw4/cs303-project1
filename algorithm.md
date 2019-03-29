#Algorithm


	Goal:
-	Keep track of two lists of book types
      o	Circulation of books
          	Will circulate books from employee to employee
      o	Archived books
          	When the last employee waiting for a book is finished, the book will be archived. 

-	Book has functions: name, start date, end date, and archived. 

-	Program will track the employees
      o	progress of the circulation of books from employee to a waiting employee. 
          	Track of employee to receive the book next
              •	The total waiting time for the employee
              •	How many days the employee waited to get a book since the beginning of the circulation 
          	The total retaining time: how many days the employee has had the book. 
      o	It will also keep track of archived books. 
          	Once all employees have used the book, the book will be archived into an archive queue. 

-	Priority queue will be organized to push and pop items 
      o	Employee with highest priority will be popped
      o	Priority queue will be updated whenever an item is popped

-	Concept of priority
      o	Employee at the front of the queue will get the book
      o	Employee’s with the longest wait time will have higher priority
          	Priority= waiting_time – retaining_time

-	Transfer of book from employee to the next employee
      o	The book will be passed onto the next employee with the highest priotiy 
      o	If there is no employee to obtain the book, the book will be archived. 
      o	Total retaining time for the employee who passed on the book gets adjusted.
          	(retaining time of the next employee = 0 and the count starts again) 
      o	Total waiting time for the employee who got the book gets adjusted 
          	 (waiting time = 0 for the employee who just received the book) 
