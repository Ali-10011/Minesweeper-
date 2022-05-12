#include <iostream>
#include <string.h>
using namespace std;
class Minesweeper {

public:
	Minesweeper() {};
	void print() {
		
	}
	
};
class Board : public Minesweeper {
private:
	char**board;
public:
	Board():Minesweeper(){
		board = new char* [5];
		for (int i = 0; i < 5; i++) {
			*(board + i) = new char[5];
		}
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				*(*(board + j) + k) = 'X';
			}
		}
	}
	void print() {

		cout << "The Board " << endl;
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				cout << *(*(board + j) + k) << " ";
			}
			cout << endl;
		}
	}
};
class Player: public Board {
private:
	char* name;
public:
	Player(char* name) : Board(){
		this->name = name;
	}
	 void print() {
		cout << "Player: " << name << endl;
	}
};


int main() {
	Minesweeper* ptr;
	Board* ptr2;
	Player* ptr3;
	Player P1("Lucifer");
	ptr2 = &P1;
	ptr2->print(); 

	system("pause");
	return 0;
}