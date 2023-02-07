#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d)
{
	int B[] = {a, b, c, d};
	
	for(int i = 0 ; i < 4 ; i++)
	{
		int s =  rand() % 4;
		int r = rand() % 4;
		int temp = B[s];
		B[s] = B[r];
		B[r] = temp;
	}
	*a = B[0];
	*b = B[1];
	*c = B[2];
	*d = B[3];
}