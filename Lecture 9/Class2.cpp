#include<bits/stdc++.h>
using namespace std;

// Class: //Automatically invoke :

//1. Constructor
//2.Copy Constructer
//3. Copy assignment Operator
//4. Destructor


//1.Constructor:

class Car {
private:
	int price;
	int minimum = 1000;
public:
	int model_no;
	char name[100];
	string condition;

	Car() {
		cout << "Inside Our own default Constructor" << endl;
	}

	//Parameterised Constructor:

	Car(int m, char *n, string c, int p) {
		cout << "Inside My own Parameterised Constructor" << endl;
		model_no = m;
		strcpy(name, n);//character array ko copy karna:
		condition = c;
		if (price < minimum) {
			price = minimum;
		} else {
			price = p;
		}
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
	}
};



int main() {

	Car c;
	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';

	c.model_no = 20;
	c.condition = "Good";

	c.set_price(12345);
	c.print();

	cout << endl;

	//Kya main jab variable banata hu ? usko initialise
	//directly nahi kar paata?

	//Class ke objects ko initialise karne ka koi way to hona chahiye?

	//Constructor:


	Car d(110, "Ferrari", "Very Good", 11111);
	d.print();


}

