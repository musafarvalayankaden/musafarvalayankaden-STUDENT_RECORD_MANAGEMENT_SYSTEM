#include "student.h"

int main()
{
	SLL *headptr =0;
	char op;
	readFile(&headptr);
	while(1)
	{
		printf("\033[33m \nEnter your choice\n");
		printf("A)add new record\nD)Delete a record\nS)show the list\nM)Modify a record\nV)Save records\nE)Exit\nT)Sort the list\nL)Delete all the records\nR)Reverse the list\n \033[0m");
		scanf(" %c",&op);

		switch(op)
		{
			case 'A':addMiddle(&headptr);break;
			case 'D':deleteNode(&headptr);break;
			case 'S':printNode(headptr);break;
			case 'M':modifyNode(headptr);break;
			case 'V':saveFile(headptr);break;
			case 'E':printf("S : Save and exit\nE: Exit without saving\n");
				 char ch;
				 scanf(" %c",&ch);
				 if(ch=='S') { 
					 saveFile(headptr);
					 deleteAll(&headptr);
					 exit(0); }
				 else if(ch=='E') {
					 deleteAll(&headptr);
					 exit(0);}
				 else 
					 printf("invalid option\n"); 
				 break;
			case 'T':sortData(headptr);break;
			case 'L':deleteAll(&headptr);break;
			case 'R':reverseLinks(&headptr);break;

			default:printf("invalid option\n");

		}
	}

	return 0;
}

