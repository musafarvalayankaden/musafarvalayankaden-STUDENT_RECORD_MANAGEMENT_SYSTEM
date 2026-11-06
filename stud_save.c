#include "student.h"

void saveFile(SLL *ptr)
{
	if(ptr==0)
	{
		printf("NO DATA FOUND\n");
		return;
	}

	FILE *fp;
	fp=fopen("student.dat","w");


	while(ptr)
	{
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}

	printf("DATA SAVED INTO THE FILE\n");
	fclose(fp);
}






void readFile(SLL **ptr)
{
FILE *fp;

fp=fopen("student.dat","r");

if(fp==0)
{
//printf("No DATA FOUND!!!!!");
return;
}

while(1){
SLL *new,*last;
new=malloc(sizeof(SLL));

if((fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage))==EOF)
break;

new->next=0;
if(*ptr==0)
*ptr=new;
else
{
 last=*ptr; 
    
 while(last->next)   
  last=last->next;   
    
 last->next=new;   
}

}
printf("FILE COPIED sucessfully\n");
}


