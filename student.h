#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
}SLL;
int countNode(SLL *ptr);
void addMiddle(SLL **);
void deleteNode(SLL **);
void deleteAll(SLL **);
void printNode(SLL *ptr);
void modifyNode(SLL *ptr);
void saveFile(SLL *ptr);
void reverseLinks(SLL **ptr);
void sortData(SLL *ptr);
void readFile(SLL **ptr);



