#!/bin/bash
#include<stdio.h>
int main()
{
	char=1byte;
	short=2bytes;
	integer=4bytes;
	long=8bytes;
	{
		printf("size of int is=%i bytes\n",sizeof(char));
		printf("size of int is=%i bytes\n",sizeof(short));
		printf("size of int is=%i bytes\n",sizeof(interger));
		printf("size of int is=%i bytes\n",sizeof(long));
		return (0);
	}

