#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(int argc,char *argv[])
{
	
	HANDLE write,read;
	write = (HANDLE)atoi(argv[1]);
	read = (HANDLE)atoi(argv[2]);
	cout << "lol" << endl;
	DWORD dw;
	int a;

	if(!ReadFile(read,&a,sizeof(a),&dw,NULL))
	{
		cout << " eror read " << endl;
		getch();
		return 0;
	}
	a=a*a;

	if(!WriteFile(write,&a,sizeof(a),&dw,NULL))
	{
		cout << " eror write " << endl;
		getch();
		return 0;
	}

	CloseHandle(read);
	CloseHandle(write);	
	return 0;
}






	





        