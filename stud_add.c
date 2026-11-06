#include "student.h"


void addMiddle(SLL **ptr)
{

	SLL *new,*t=*ptr;;
	new =malloc(sizeof(SLL));
l:
	printf("enter the name and percentage:\n");
	scanf("%s %f",new->name,&new->percentage);

	if((new->percentage < 0) || (new->percentage > 100))
	{
		printf("\npercentage must be within the range of 0 to 100\n");
		goto l;
	}

	int i,c=countNode(*ptr),*roll;
	roll=malloc(sizeof(int)*c);

	for(i=0;i<c;i++)
	{
		roll[i] = t->rollno;
		t=t->next;
	}
	int check,num=1;
	while(1){
		check=0;
		for(i=0;i<c;i++)
		{
			if(roll[i]==num)
			{
				check=1;
				break; 
			}
		}
		if(check==0)
		{
			new->rollno = num;
			break;
		}
		num++;
	}


	if(*ptr==0 || new->rollno <(*ptr)->rollno)
	{
		new->next=*ptr;
		*ptr=new;
		return;
	}
	else
	{
		SLL *t=*ptr;
		while((t->next!=0) && new->rollno > t->next->rollno)
			t=t->next;

		new->next=t->next;
		t->next=new;
	}


}


