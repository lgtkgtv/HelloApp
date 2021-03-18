// Example of lgtm.yml
// https://lgtm.com/help/lgtm/lgtm.yml-configuration-file#example- lgtm.yml-file
// Ref https://github.com/Tencent/TscanCode/tree/master/samples/cpp

#include <cassert>  // for  assert()
#include <cstring>  // for  std::strcpy()
using namespace std;
#include <iostream>

void UnintentionalOverflow(int i, int j)
{
	long long ll = i * j;
}

void arrayIndexCheckDefect(int i)
{
	char buf[10] = {};
	if(i < 0 || i > 10)
		return;

	buf[i] = 'Q';
}

void arrayindexoutofbounds(int b)
{
	int max = 5;
	int a[10];
	if (b > 0)
	{
		max = 10;
	}
	a[max] = max;
}

void arrayindexthencheck( int index)
{
	const int INDEX = 9;
	char buf[10] = {0};
	if( buf[index] > 0 && index < INDEX)
		return;
}

void assignif(int x)
{
	int y = x & 4;
	if (y == 3)  
	{
	}
}

void assignmentinassert()
{
	int i=0;
	assert(i=5);
}

char * autovar()
{
	char sz[]="hello TspyCode!";
	return sz;
}

void bitwiseonboolean(bool b)
{
	int r = b & 0x01;
}


bool RetFunc()
{
	if (rand() > 10)
	{
		return 10;
	}
	return 1;
}
void boolfuncreturn()
{
	RetFunc();
}

 void bufferaccessoutofbounds()
{
	char dst[4];
	strcpy(dst, "123");
}

typedef struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;
int checkNullDefect(Book* npBook)
{
	if(npBook == nullptr && npBook->book_id)
	{
		return npBook->book_id;
	}
	return 0;
}

void DoSomething() {}
void clarifycondition(int x,int a)
{
	if (x = a < 0)
	{
		DoSomething();
	}
}


void comparedefectinfor(short count)
{
	for (char i = 0; i < count; ++i)
	{

	}
}

bool compare1(int n) { return true;}
bool compare2(int n) { return false;}

void comparisonofboolwithbool(){
	bool b = compare2(6);
	bool a = compare1(4);
    if(b > a){
		printf("foo");
	}
}


void comparisonofboolwithint(int x)
{
	if ((x && 0x0f) == 6)
		DoSomething();
}


bool Rand()
{
	return rand() > 10;
}
void comparisonwithbool()
{
	if (Rand() > 3)
		DoSomething();
}



int main() {
    std::cout << "Hello World!";
    return 0;
}


