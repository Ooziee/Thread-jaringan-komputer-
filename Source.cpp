#include<iostream>
#include<thread>
#include<chrono>
#include<ctime>

using namespace std;

void oddnumber(int x) {		
	for (int i = 1; i <= x; i++) //rumus oddnumber dan even hampir sama
	{
		if (i % 2 != 0)
		{
			this_thread::sleep_for(chrono::seconds(1));
			cout << i << " " << "(oddnumber) BROOOO"<<endl;
		}
	}
}

void evennumber(int y) {
	for (int i = 1; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			this_thread::sleep_for(chrono::milliseconds(2500)); // untuk delay 2.5 an soalnya gk bisa pake koma oh no anyway
			cout << i << " "<< "(evennumber) ohno"<<endl;
		}
	}
}

int main() 
{
	thread th1(oddnumber, 20);// manggil thread
	
	thread th2(evennumber, 20);
	th2.join(); //memastikan thread bisa dan selesai dijalankan
	th1.join();
	
	
	return 0;
}