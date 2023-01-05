#pragma once
#include <stdio.h>

#define MAX_LEN 255

typedef struct
{
	char*	name;
	int		id;
	float	avg;
}Student;



void showStudent(Student* st);
int initStudent(Student* st);
void showStudentArr(Student* st,int count);
void freeStudentArr(Student* stArr, int count);
