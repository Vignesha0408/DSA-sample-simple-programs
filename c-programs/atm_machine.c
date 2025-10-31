#include<stdio.h>
#include<stdlib.h>
int balance=0,pin1=0000,oldpin,ch;
void deposite();
void withdraw();

int main()
{
	int pin2;
	newpin:
	printf("Enter pin:");
	
	scanf("%d",&pin2);
	if(pin1 == pin2)
	{
		while(1)
		{
		printf("\n1.Deposite\n2.Withdraw\n3.Balance\n4.Pin change\n5.Exit\n Choose=");
		scanf("%d",&ch);
		switch(ch)
		 {
		  case 1:deposite(); break;
		  case 2:withdraw(); break;
		  case 3:printf("Your balance: $%d ",balance); break;
		  case 4:printf("Enter the new pin:");
			 scanf("%d",&pin1);pin2=pin1;
			 goto newpin;
			 break;
		  default: exit(0);
		 }
		}
	}
	else 
		goto newpin;
	
	return 0;
}

void deposite()
{
	int dep;
	printf("\nEnter the amount to deposite:");
	scanf("%d",&dep);
	balance=balance+dep;
	printf("$%d is deposited, balance = $%d\n",dep,balance);
}

void withdraw()
{
	int amt;
	printf("\nEnter amount = ");
	scanf("%d",&amt);
	if (amt<balance)
		{balance=balance-amt;
		printf("$%d is withdrawn,balance = $%d\n",amt,balance);
		}
	else
		printf("Not enough balance you have..");
}