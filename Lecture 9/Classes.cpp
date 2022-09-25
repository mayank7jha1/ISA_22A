#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



class Car {
private:
	int price;
	int minimum = 1000;
public:
	int model_no;
	char name[100];
	string condition;


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

//Getters and Setters:


int main() {

	Car c, d;
	c.model_no = 2;
	d.model_no = 100;

	c.name[0] = 'B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';


	d.name[0] = 'A';
	d.name[1] = 'Z';
	d.name[2] = 'Z';
	d.name[3] = '\0';

	cout << c.model_no << " " << c.name << endl;
	cout << d.model_no << " " << d.name << endl;

	//Maan lo tumko value chahiye kisi private entity ki?
	//Jisko aap class ke bahar access nahi kar sakte?
	//Setters ko


	//Agar mujhe value change karni hain kisi private
	//emtity ki class ke bahar toh main use karta hu getter ko



	c.set_price(123456);
	cout << c.get_price() << endl;

	cout << d.get_price() << endl;

}

