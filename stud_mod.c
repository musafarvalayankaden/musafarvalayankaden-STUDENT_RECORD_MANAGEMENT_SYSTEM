#include "student.h"


//logic need to write
void modifyNode(SLL *ptr)
{

	if(ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}

	SLL *t=ptr;
	int op,f=0;
	char ch;
	printf("R:Search by roll number\nN:Search by name\nP:Search by percentage\n\nSelect your choice: ");
	scanf("%s",&ch);

	if(ch=='R'){     //rollno
roll:
		printf("enter the rollno: ");
		scanf("%d",&op);
		ptr=t;
		while(ptr)
		{
			if(ptr->rollno==op)
			{
				printf("%d %s %f\n" ,ptr->rollno,ptr->name,ptr->percentage);
n:
				printf("\nenter the updated name and percentage:\n");
				scanf(" %s %f",ptr->name,&ptr->percentage);

				if((ptr->percentage < 0) || (ptr->percentage > 100))
				{
					printf("\npercentage must be within the range of 0 to 100\n");
					goto n;
				}
				return;
			}

			ptr = ptr->next;
		}

	}

	else if(ch=='N'){ 
		//name
		char n[20];
		printf("enter the name: ");
		scanf(" %s",n);
		ptr=t;
		while(ptr)
		{
			if(strcmp(ptr->name,n)==0)
			{
				f++;
				printf("%d %s %f\n" ,ptr->rollno,ptr->name,ptr->percentage);

				if(f==1)
					t=ptr;
			}
			ptr = ptr->next;
		}

	}
	else if(ch=='P')    
	{
		float p;
		printf("enter the percentage: "); //percentage
		scanf("%f",&p);
		ptr=t;
		while(ptr)
		{
			if(ptr->percentage==p)
			{
				f++;
				printf("%d %s %f\n" ,ptr->rollno,ptr->name,ptr->percentage);

				if(f==1)
					t=ptr;
			}

			ptr = ptr->next;
		}
	}
	else{
		printf("Invalid choice\n");
		return;
	}

	if(f==1)
	{
m:
		printf("\nenter the updated name and percentage: \n");
		scanf(" %s %f",t->name,&t->percentage);

		if((t->percentage < 0) || (t->percentage > 100))
		{
			printf("\npercentage must be within the range of 0 to 100\n");
			goto m;
		}
		return;
	}

	else if(f>=2)
	{
		printf("\nMultiple data available\n");
		goto roll;

	}
	printf("NO DATA FOUND\n");
}





void sortData(SLL *ptr)
{
	if(ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}

	char ch;
	printf("Enter your choice:\n\nN:Sort with name\nP:Sort with percentage\n");
	scanf(" %c",&ch);

	if(ch=='N'){
		int i,j,c=countNode(ptr);
		SLL t,*p1,*p2;
		p1=ptr;
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(strcmp(p1->name,p2->name)>0)
				{
					t.rollno = p1->rollno; 
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno = p2->rollno; 
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno = t.rollno; 
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}

			p1=p1->next;
		}
	}
	else if(ch=='P'){
		int i,j,c=countNode(ptr);
		SLL t,*p1,*p2;
		p1=ptr;
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-1-i;j++)
			{
				if(p1->percentage < p2->percentage)
				{
					t.rollno = p1->rollno; 
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno = p2->rollno; 
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno = t.rollno; 
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
				p2=p2->next;
			}

			p1=p1->next;
		}
	}
	else{
		printf("\ninvalid option\n");
		return;
	}

	printf("\nSORTED SUCCESSFULLY\n");

}





int countNode(SLL *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}

	return c;
}




void reverseLinks(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}


	int i,c=countNode(*ptr);
	if(c>1){
		SLL *t=*ptr;
		SLL **a=malloc(sizeof(SLL *)*c);

		for(i=0;i<c;i++){
			a[i]=t;
			t=t->next;
		}
		for(i=c-1;i>0;i--)
			a[i]->next=a[i-1];

		a[0]->next=0;
		*ptr=a[c-1];
	}

	printf("LIST REVERSED SUCCESSFULLY\n");
}






