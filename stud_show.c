#include"student.h"

void printNode(SLL *ptr)
{

	if(ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}


	printf("------------------\nRollno  Name  percentage\n------------------\n");
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}

}



