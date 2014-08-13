#include <iostream>
using namespace std;

#define STACK_SIZE 256
typedef char arreglo[STACK_SIZE];

class Pila {

	int sp;
	int items;
	int itemsize;
	arreglo pila;

	public:

		Pila() {
			sp = STACK_SIZE-1;
			items = 0;
			itemsize = 1;

		 }


		~Pila() {};


	int size() { return items; }


	int empty() { return items == 0; }




	int put(int d)
	{
		if ( sp >= 0) {
			pila[sp] = d;
			sp --;
			items ++;
		}
		return d;
	}


	int get()
	{
		if ( ! empty() ) {
			sp ++;
			items --;
		}
		return pila[sp];
	}

};
int main()
{
    int d;
    Pila s;


    for (d=1; d<=20; d++) s.put(d);

    cout << "pila =" << s.size() << endl;


    while ( s.size() ) cout << (int)s.get() << " ";

    cout << "\nPara terminar oprima <Enter>...";
    cin.get();
    return 0;
}

