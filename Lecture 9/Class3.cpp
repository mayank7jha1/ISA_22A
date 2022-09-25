#include<bits/stdc++.h>
using namespace std;

// Class: //Automatically invoke :

//1. Constructor
//2.Copy Constructer
//3. Copy assignment Operator
//4. Destructor


//1.Copy Constructor:

class Car {
private:
	int price;
	int minimum = 1000;
public:
	int model_no;
	char name[100];
	string condition;
	char* fuel;

	Car() {
		cout << "Inside Our own default Constructor" << endl;
	}

	//Parameterised Constructor:

	Car(int m, char *n, string c, int p, char *z) {
		cout << "Inside My own Parameterised Constructor" << endl;
		model_no = m;
		strcpy(name, n);//character array ko copy karna:
		condition = c;
		if (price < minimum) {
			price = minimum;
		} else {
			price = p;
		}
		fuel = new char[strlen(z) + 1];
		strcpy(fuel, z);
	}

	//COpy Construtor:
	Car(Car &x) {
		//Copy Constructor of our own:
		model_no = x.model_no;
		strcpy(name, x.name);
		price = x.price;
		condition = x.condition;
		//strcpy(fuel, x.fuel);
		fuel = new char[strlen(x.fuel) + 1];
		strcpy(fuel, x.fuel);
	}

	int get_price() {
		return price;
	}

	void set_price(int x) {
		if (x < minimum) {
			price = minimum;
		} else {
			price = x;
		}
	}


	void print() {
		cout << "The Name of the Car is " << name << endl;
		cout << "Price of the Car is " << price << endl;
		cout << "Model_no of the Car is " << model_no << endl;
		cout << "Condition of the Car is " << condition << endl;
		cout << "Fuel of my Car is " << fuel << endl;
	}
};



int main() {

	Car d(110, "Ferrari", "Very Good", 11111, "Limited");
	d.print();
	cout << endl << endl;

	/*Default copy constructor call hua and
	usne copy kardiya e ke ander d ki values ko?*/

	Car e(d);
	e.print();
	cout << endl << endl;

	d.name[0] = 'B';
	d.print();

	cout << endl << endl;
	e.print();

	cout << endl << endl;

	d.fuel[0] = 'N';
	d.print();
	cout << endl << endl;

	e.print();





}

