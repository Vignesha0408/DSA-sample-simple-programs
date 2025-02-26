/*
8. Develop a menu driven Program in C for the following operations on Doubly Linked List 
(DLL) of Employee Data with the fields: SSN, Name, Dept, Designation, 
Sal, PhNo 
a. Create a DLL of N Employees Data by using end insertion. 
b. Display the status of DLL and count the number of nodes in it. 
c. Perform Insertion and Deletion at End of DLL.
d. Perform Insertion and Deletion at Front of DLL. 
e. Demonstrate how this DLL can be used as Double Ended Queue. 
f. Exit.
*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int count=0;
struct employee
{
	char ssn[15],name[20],dept[10],desg[20],phno[15];
	int sal;
	struct employee *rl,*ll;
};
typedef struct employee EMPLOYEE;
EMPLOYEE *first=NULL,*newnode,*prev,*temp;

void createNode()
{
	newnode =(EMPLOYEE *)malloc(sizeof(EMPLOYEE));
	printf("\n Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively. \n");
	scanf("%s%s%s%s%d%s",newnode->ssn,newnode->name,newnode->dept,newnode->desg,&newnode->sal,newnode->phno);
	newnode->rl = NULL;
	newnode->ll = NULL; 
}

void insertBeg() 
{
    createNode();       
    if (first == NULL) 
		first = newnode;
     else 
	 {
        newnode -> rl = first;
        first -> ll = newnode;
        first = newnode;
     }
}/*insertBeg() */



void deleteBeg() 
{
    if (first == NULL) 
        printf("\nThe list is empty.\n");
	else if(first->rl==NULL)
	{
		temp=first;
		printf("\n%-20s %-20s %-20s %-20s %-20d %-20s is deleted\n ",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		first=NULL;
		free(temp);
	}
	else 
	{
		temp = first;
        first = first->rl;
        first->ll = NULL;
		printf("\n%-20s %-20s %-20s %-20s %-20d %-20s is deleted\n ",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		free(temp);
    }
}/*deleteBeg() */










void insertEnd() 
{
    createNode();
    if (first == NULL)
        first  = newnode;
    else 
	{
		temp=first;
		while (temp->rl != NULL)
		 temp=temp->rl;	 
        temp->rl = newnode;
        newnode->ll = temp;
    }
}/*insertEnd()*/











void deleteEnd() 
{
    if (first == NULL) 
        printf("\nThe list is empty.\n");
    else if (first->rl == NULL) 
	{
		printf("%-20s %-20s %-20s %-20s %-20d %-20s is deleted",first->ssn,first->name,first->dept,first->desg,first->sal,first->phno);
        free(first);
        first = NULL;
    } 
	else 
	{
    temp = first;
	while (temp->rl != NULL) 
			{
				prev = temp;
				temp = temp -> rl;
			}
			prev->rl = NULL;	
			printf("\n%-20s %-20s %-20s %-20s %-20d %-20s is deleted\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
			free(temp);
		}
	
}/* deleteEnd() */







void display() 
{
	count = 0;
    if (first == NULL) 
	printf("\nThe list is empty.\n");
	else
	{
    printf("\nDoubly Linked List Status:\n");
    printf("\nSSN\t\tName\t\tDept\t\tDesignation\t\tSalary\t\tPhone No:\t\t\n");             
    temp = first;
    while (temp != NULL) 
		{   count++;
			printf("%-16s %-16s %-16s %-16s %-16d %-16s\n",temp->ssn, temp->name, temp->dept, temp->desg, temp->sal, temp->phno);
			temp = temp->rl;
		}
    printf("Total number of Nodes: %d\n", count);
	}/*else*/
}/*display()*/



void creatlist() 
{
    int n,i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    insertEnd();
}
void dqueue()
{
	int choice;
	first = NULL;
	do{
		printf("Queue operation");
        printf("\n 1.Insert begining\n 2.delete begining\n 3.Insert rear\n 4.delete rare\n 5.Display\n 6.exit\n");
        printf("Enter choice..");
		scanf("%d",&choice);
		switch (choice)
	{
	case 1: insertBeg();break;
	case 2: deleteBeg();  break;
	case 3: insertEnd();break;
	case 4: deleteEnd();break;
	case 5: display();break;
	}
	}while(choice<6);
}/*dequeue*/


 
void main()
{
int ch,n,i;
 do{
 printf("\n 1.Create a list employees\n 2.Display\n 3.Insert begining\n 4.delete begining\n 5.Insert End\n 6.delete End\n 7.Dqueue\n8.exit\n");
 printf("\n Enter choice : ");
 scanf("%d",&ch);
 switch (ch)
	{
	case 1: creatlist();break;
	case 2: display();  break;
	case 3: insertBeg();break;
	case 4: deleteBeg();break;
	case 5: insertEnd();break;
	case 6: deleteEnd();break;
	case 7: dqueue();
	}
  }while(ch<8);
}





/*
 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice :
1
Enter number of employees: 5

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
1 john ise teacher 55000 8754125698

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
2 k 1 2 1 1

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
2 1 1 4 1 4

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
v
v v c 2 1

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
2 5 8 7 4 5

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 2

Doubly Linked List Status:

SSN             Name            Dept            Designation             Salary          Phone No:
1                john             ise              teacher          55000            8754125698
2                k                1                2                1                1
2                1                1                4                1                4
v                v                v                c                2                1
2                5                8                7                4                5
Total number of Nodes: 5

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 3

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
1 2 3 4 5 6

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 5

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
6 5 4 3 2 1

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 2

Doubly Linked List Status:

SSN             Name            Dept            Designation             Salary          Phone No:
1                2                3                4                5                6
1                john             ise              teacher          55000            8754125698
2                k                1                2                1                1
2                1                1                4                1                4
v                v                v                c                2                1
2                5                8                7                4                5
6                5                4                3                2                1
Total number of Nodes: 7

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 6

6                    5                    4                    3                    2                    1
      is deleted

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 4

1                    2                    3                    4                    5                    6
      is deleted

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 7
Queue operation
 1.Insert begining
 2.delete begining
 3.Insert rear
 4.delete rare
 5.Display
 6.exit
Enter choice..1

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
1 2 3 4 5 6
Queue operation
 1.Insert begining
 2.delete begining
 3.Insert rear
 4.delete rare
 5.Display
 6.exit
Enter choice..2

1                    2                    3                    4                    5                    6
      is deleted
 Queue operation
 1.Insert begining
 2.delete begining
 3.Insert rear
 4.delete rare
 5.Display
 6.exit
Enter choice..3

 Enter fields: SSN, Name, Dept, Designation, Sal, PhNo respectively.
1 2 3 4 5 6
Queue operation
 1.Insert begining
 2.delete begining
 3.Insert rear
 4.delete rare
 5.Display
 6.exit
Enter choice..4
1                    2                    3                    4                    5                    6
      is deletedQueue operation
 1.Insert begining
 2.delete begining
 3.Insert rear
 4.delete rare
 5.Display
 6.exit
Enter choice..5

The list is empty.
Queue operation
 1.Insert begining
 2.delete begining
 3.Insert rear
 4.delete rare
 5.Display
 6.exit
Enter choice..6

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 2

The list is empty.

 1.Create a list employees
 2.Display
 3.Insert begining
 4.delete begining
 5.Insert End
 6.delete End
 7.Dqueue
8.exit

 Enter choice : 8
*/