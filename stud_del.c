#include"student.h"


//delete one node //edit
void deleteNode(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}
	int f2=0;
	char name[20];
	char ch;
	printf("R)Enter roll number to delete\nN)Enter name to delete\n\nSelect your choice: ");
	scanf(" %c",&ch);

	if(ch=='R'){
roll:
		int op;
		printf("enter the rollno\n"); 
		scanf("%d",&op);
		SLL *del,*prev;
		del=*ptr;

		while(del)
		{
			if(del->rollno==op)
			{
				if((f2==1) && (strcmp(del->name,name)!=0))    
				{
					printf(">>>The rollno you entered does not match the name <<<\n");
					return;
				}

				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;  

				free(del);
				printf("DATA DELETED SUCCESSFULLY\n");
				return; 
			}
			prev=del; 
			del=del->next;
		}

		printf("\nRollno not found\n");
	}


	else if(ch=='N')
	{
		int f=0;

		printf("enter the name\n");
		scanf(" %s",name);

		SLL *del,*prev,*t1,*t2;
		del=*ptr;
		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				f++;
				printf("%d %s %f\n",del->rollno,del->name,del->percentage);

				if(f==1)
					t1=del;
			}
			prev=del; 
			if(f==0)
				t2=del;

			del=del->next;
		}



		if(f==1){
			del=t1;
			prev=t2;
			if(del==*ptr)
				*ptr=del->next;
			else
				prev->next=del->next; 

			free(del);

			printf("\nDATA DELETED SUCCESSFULLY\n");
			return;
		}
		else if(f>=2)
		{
			printf("\n>>>>Multiple records available <<<<\n");
			f2=1;
			goto roll; 
		}  

		printf("\nName not found\n");
	}
	else{
		printf("\nInvalid choice\n");
		return;
	}
}




//delete all the record
void deleteAll(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}
	SLL *del=*ptr;


	while(del)
	{
		*ptr=del->next;
		free(del);
		del=*ptr;
	}
	*ptr=0;

	printf("ALL DATA DELETED\n");
}


