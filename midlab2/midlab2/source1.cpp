#include<iostream>
using namespace std;
class vehicle {
protected:
	int enginecapacity;
	int seatcapacity;
public:
	vehicle() {
		enginecapacity = 0;
		seatcapacity = 0;
		cout << "Default Constructor of Vehicle" << endl;
	}
	vehicle(int a, int b) {
		enginecapacity = a;
		seatcapacity = b;
		cout << "Parameterized Constructor of Vehicle" << endl;
	}
	void display() {
		cout << "engine capacity is=" << enginecapacity << endl;
		cout << "seat capacity is=" << seatcapacity << endl;
	}
	void changeenginecapacity(int a) {
		enginecapacity = a;
	}
	void channgeseatcapacity(int a) {
		seatcapacity = a;
	}
	~vehicle() {
		cout << "vehicle destructer" << endl;
	}
};
class car :public vehicle {
private:
	int windscreensize;
	int steeringsize;
public:
	car() {
		windscreensize = 0;
		steeringsize = 0;
		cout << "default constructer" << endl;
	}
	car(int a, int b, int c, int d) :vehicle(c, d) {
		windscreensize = a;
		steeringsize = b;
		enginecapacity = c;
		seatcapacity = d;
		cout << "parametrized constructer of car" << endl;
	}
	void display() {
		cout << "wind screen size is=" << windscreensize << endl;
		cout << "steering size is=" << steeringsize << endl;
		cout << "engine capacity is=" << enginecapacity << endl;
		cout << "seat capacity is=" << seatcapacity << endl;
	}
	~car() {
		cout << "destructer of car" << endl;
	}
};
class bike :public vehicle {
private:
	int handlesize;
public:
	bike() {
		handlesize = 0;
		cout << "default constructer of bike" << endl;
	}
	bike(int a, int b, int c) :vehicle(b, c) {
		handlesize = a;
		enginecapacity = b;
		seatcapacity = c;
		cout << "parametrized constructer of bike" << endl;

	}
	void display() {
		cout << "handle size is=" << handlesize << endl;
		cout << "engine capacity is=" << enginecapacity << endl;
		cout << "seat capacity is=" << seatcapacity << endl;
	}
	~bike() {
		cout << "destructer of bike" << endl;
	}
};


int main() {
	bike* b = new bike(13, 400, 2);
	car* c = new car(2, 13, 400, 4);
	b->display();
	c->display();
	c->changeenginecapacity(700);
	b->changeenginecapacity(150);
	cout << "\n\nafter changing\n\n\n" << endl;
	b->display();
	c->display();
	delete b;
	delete c;

	return 0;
}
