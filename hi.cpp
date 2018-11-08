#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
FILE * hi_file;

int fun()
{
	return 16;
}

int main(){
	int hz = 0;
	hz = fun();
	cout<<"hi:"<<hz<<endl;
	printf ("hz is %d\n", hz);

	hi_file = fopen("hi_file.out", "w");
	fprintf(hi_file, "%d", hz);
	fclose(hi_file);

	// system("pause");
	return 0;
}
