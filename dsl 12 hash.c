/*
Given a File of N employee records with a set K of Keys (4-digit) which uniquely determine 
the records in file F. Assume that file F is maintained in memory by a Hash Table (HT) of m 
memory locations with L as the set of memory addresses (2-digit) of locations in HT. Let the 
keys in K and addresses in L are Integers. Develop a Program in C that uses Hash function H: 
K →L as H(K)=K mod m (remainder method), and implement hashing 
technique to map a given key K to the address space L. Resolve the collision (if any) using 
linear probing. 
*/

#include<stdio.h>
#include<stdlib.h>
int count=0,key[20],n,m,*ht,idx=0,i;

void insert(int value)
{
	idx = value%m;
	while(ht[idx]!=-1)
	{
		printf("collission detected..at index %d \nCollission handled successfully using linear probing\n",idx);
		idx=(idx+1)%m;}
		ht[idx]=value;
	count++;
	}/*Insert Function*/
	
void display()
{
	printf("Hash table contents:-");
	if(count==0)
		printf("Hash table is empty..\n");
	else
	{
		for(i=0;i<m;i++)
			printf("\n%d   %d",i,ht[i]);
	}
}

int main()
{
	printf("\nEnter the records(N):");
	scanf("%d",&n);
	printf("Enter the 2 digit memory location(max size) for each hash table");
	scanf("%d",&m);
	if(n>m)
	{
		printf("Invalid size.. Exiting");
		exit(0);
	}
	ht=(int *)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
		ht[i]=-1;
	
	printf("Enter 4 digit value (key) for %d Employees",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&key[i]);
		if(count == m)
		{
			printf("Hash table is full\n\n");
			break; 
		}
		else
			insert(key[i]);
	}
	
	display();
	free(ht);
	return 0;
}

/*
Enter the records(N):5
Enter the 2 digit memory location(max size) for each hash table
50
Enter 4 digit value (key) for 5 Employees
1524
2563
2593
2563
collission detected..at index 13
5863
collission detected..at index 13
collission detected..at index 14
Hash table contents:-
0   -1
1   -1
2   -1
3   -1
4   -1
5   -1
6   -1
7   -1
8   -1
9   -1
10   -1
11   -1
12   -1
13   2563
14   2563
15   5863
16   -1
17   -1
18   -1
19   -1
20   -1
21   -1
22   -1
23   -1
24   1524
25   -1
26   -1
27   -1
28   -1
29   -1
30   -1
31   -1
32   -1
33   -1
34   -1
35   -1
36   -1
37   -1
38   -1
39   -1
40   -1
41   -1
42   -1
43   2593
44   -1
45   -1
46   -1
47   -1
48   -1
49   -1



Enter the records(N):5
Enter the 2 digit memory location(max size) for each hash table10
Enter 4 digit value (key) for 5 Employees
1234
1254
collission detected..at index 4
Collission handled successfully using linear probing
1245
collission detected..at index 5
Collission handled successfully using linear probing
1258
1256
collission detected..at index 6
Collission handled successfully using linear probing
Hash table contents:-
0   -1
1   -1
2   -1
3   -1
4   1234
5   1254
6   1245
7   1256
8   1258
9   -1
*/