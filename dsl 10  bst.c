/*
Develop a menu driven Program in C for the following operations on Binary Search Tree 
(BST) of Integers . 
a. Create a tree of N Integers: 6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2 
b. Traverse the tree in Inorder, Preorder and Post Order 
c. Search the tree for a given element (KEY) and report the appropriate message 
d. Exit 
*/


#include <stdio.h>
#include <stdlib.h>

struct tree {
    int data;
    struct tree *lchild, *rchild;
};
typedef struct tree TREE;
TREE *root=NULL,*nnode=NULL,*temp=NULL,*prev=NULL;

void insertnode(int x) 
    {
    nnode = (TREE *)malloc(sizeof(TREE));
    nnode->data = x;
    nnode->lchild = NULL;
	nnode->rchild = NULL;
    if(root == NULL) 
	    root = nnode;
    else 
	{
	    temp=root;
		prev = NULL; 
        while(temp!=NULL)
        {   prev = temp;	       
			if(x>temp->data)
				temp=temp->rchild;
			else if(x<temp->data)
				temp=temp->lchild;
			else
            {      
	               printf("\n\n%d is duplicate key",x);
                   return;
            }/*if*/
		}/*while*/
		
    if(x > prev->data)
	     prev->rchild=nnode;
	 
    else if(x<prev->data)
	     prev->lchild=nnode;
	  
	}/*first else */	
  }/*insertnode*/
	
	
void search(int key) 
{
    temp = root;
    while (temp != NULL)
	    {
           if (key == temp->data) 
		   {
             printf("Key %d found in the tree.\n", key);
              return;
           }
		   else if(key < temp->data) 
		       temp = temp->lchild;
		   else 
		       temp = temp->rchild;
        }/*while*/
    printf("Key %d not found in the tree.\n", key);
}/*search*/

void inorder(TREE *root) 
  {
    if(root != NULL) 
	    {
        inorder(root->lchild);
        printf("%d ", root->data);
        inorder(root->rchild);
        }
 }/*inorder*/

void preorder(TREE *root) 
  {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }/*if*/
  }/*preorder*/

void postorder(TREE *root) 
  {
    if (root != NULL) {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d ", root->data);
    }
  }/*postorder*/




void main() 
{
    int choice,key,n,x;

    printf("Enter the number of nodes to insert: ");
    scanf("%d", &n);
    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d",&x);
        insertnode(x);
    }/*for*/
	
    
        printf("\nMenu:\n");
        printf("1. Inorder\n");
        printf("2. Preorder\n");
        printf("3. Postorder\n");
        printf("4. Search\n");
        printf("5. Exit\n");
      do {  printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("\n\nInorder: ");
                inorder(root);
                break;
            case 2:
                printf("\n\nPreorder: ");
                preorder(root);
                break;
            case 3:
                printf("\n\nPostorder: ");
                postorder(root);
                break;
            case 4:
                printf("\n\nEnter key: ");
                scanf("%d", &key); search(key);
                break;
        }/*switch*/
    } while (choice < 5);
     
}/*main */


/*

Enter the number of nodes to insert: 12
Enter 12 elements: 6 9 5 2 8 15 24 14 7 8 5 2


 duplicate key

 duplicate key

 duplicate key
Menu:
1. Inorder
2. Preorder
3. Postorder
4. Search
5. Exit
Enter your choice: 1


Inorder: 2 5 6 7 8 9 14 15 24
Menu:
1. Inorder
2. Preorder
3. Postorder
4. Search
5. Exit
Enter your choice: 2


Preorder: 6 5 2 9 8 7 15 14 24
Menu:
1. Inorder
2. Preorder
3. Postorder
4. Search
5. Exit
Enter your choice: 3


Postorder: 2 5 7 8 14 24 15 9 6
Menu:
1. Inorder
2. Preorder
3. Postorder
4. Search
5. Exit
Enter your choice: 4


Enter key: 6
Key 6 found in the tree.

Menu:
1. Inorder
2. Preorder
3. Postorder
4. Search
5. Exit
Enter your choice: 5
*/