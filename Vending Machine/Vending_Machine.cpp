#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


void first_screen(),menu(),turkish_m(),espresso_m(),mocha_m(),hot_chocolate_m(),sahlep_m(),payement(string,int);


// Coffee Types
struct {

	string name   = "Turkish coffee";
	string type_1 = "Plain Turkish Coffee";
	string type_2 = "Milky Turkish Coffee";
	string type_3 = "Turkish Coffee With Chocolate";
	int price_1 = 40;
	int price_2 = 49;
	int price_3 = 50;
	
}turkish_coffee;

struct {

	string name	  = "Espresso";
	string type_1 = "Plain Espresso";
	string type_2 = "Espresso Macchiato";
	string type_3 = "Double Espresso";
	string type_4 = "Double Espresso Macchiato";
	int price_1 = 40;
	int price_2 = 43;
	int price_3 = 40;
	int price_4 = 50;

}espresso;

struct {

	string name = "Mocha";
	string type_1 = "Plain Mocha";
	string type_2 = "Mocha With Chocolate";
	int price_1 = 70;
	int price_2 = 75;

}mocha;

struct {

	string type_1 = "Americano";
	string type_2 = "Cappucino";
	string type_3 = "Caffee Latte";
	int price_1 = 47;
	int price_2 = 52;
	int price_3 = 54;

}one_type;

struct {

	string name   = "Hot Chocolate";
	string type_1 = "Hot Chocolate With Coffee";
	string type_2 = "White Hot Chocolate";
	int price_1 = 69;
	int price_2 = 73;

}hot_chocolate;

struct {

	string name   = "Sahlep";
	string type_1 = "Sahlep With Sugar(free)";
	string type_2 = "Sahlep Without Sugar";
	int price_1 = 73;
	int price_2 = 73;

}sahlep;

const int mainElements = 8; // Global Variable
string main_menu[mainElements]{ turkish_coffee.name,espresso.name,mocha.name,one_type.type_1,one_type.type_2,one_type.type_3,hot_chocolate.name,sahlep.name }; // Global type array
int main_price[mainElements]{ turkish_coffee.price_1,espresso.price_1,mocha.price_1,one_type.price_1,one_type.price_2,one_type.price_3,hot_chocolate.price_1,sahlep.price_2 }; // Global price array

const int turkishElements = 4; // Turkish Coffee Menu
string turkish_coffee_menu[turkishElements]{ turkish_coffee.type_1,turkish_coffee.type_2,turkish_coffee.type_3 };
int turkish_coffe_price[turkishElements]{ turkish_coffee.price_1,turkish_coffee.price_2,turkish_coffee.price_3 };

const int espressoElements = 4; // Espresso Menu
string espresso_menu[espressoElements]{espresso.type_1,espresso.type_2,espresso.type_3,espresso.type_4};
int espresso_price[espressoElements]{ espresso.price_1,espresso.price_2,espresso.price_3,espresso.price_4 };

const int mochaElements = 2; // mocha menu
string mocha_menu[mochaElements]{ mocha.type_1,mocha.type_2 }; 
int mocha_price[mochaElements]{ mocha.price_1,mocha.price_2};

const int hotchocolateElements = 2; //hot chocolate menu
string hotchocolate_menu[hotchocolateElements]{ hot_chocolate.type_1,hot_chocolate.type_2 };
int hotchocolate_price[hotchocolateElements]{ hot_chocolate.price_1,hot_chocolate.price_2 };

const int sahlepElements = 2; // sahlep menu
string sahlep_menu[sahlepElements]{ sahlep.type_1,sahlep.type_2 };
int sahlep_price[sahlepElements]{ sahlep.price_1,sahlep.price_2 };

const int onetypeElements = 3; // one type menu
string one_type_menu[onetypeElements]{ one_type.type_1,one_type.type_2,one_type.type_3 };
int one_type_price[onetypeElements]{ one_type.price_1,one_type.price_2,one_type.price_3 };


int main(){
	
	char inp; // input variable
	string order;
	int price = 0 ;
	int getch();

	do {

		first_screen();

		inp = _getch();
		if (inp == 'D' || inp == 'd') { // for continue
			system("CLS");
			menu();
			inp = _getch();
			
			if (inp == '1') {

				turkish_m();
				inp = _getch();
				if (int(inp) - 48 < turkishElements) {
					order = turkish_coffee_menu[int(inp) - 49];
					price = turkish_coffe_price[int(inp) - 49];
				}
				else { system("CLS"); cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"; cout << "Please use only valid values!(Press any button to continue)"; inp = _getch(); inp = 'n'; continue; }
			
			}
			else if (inp == '2') {
				espresso_m();
				inp = _getch();
				if (int(inp) - 48 < espressoElements) {
					order = espresso_menu[int(inp) - 49];
					price = espresso_price[int(inp) - 49];
				}
				else { system("CLS"); cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"; cout << "Please use only valid values!(Press any button to continue)"; inp = _getch(); inp = 'n'; continue; }

			}
			else if (inp == '3') {
				mocha_m();
				inp = _getch();
				if (int(inp) - 49 < mochaElements) {
					order = mocha_menu[int(inp) - 49];
					price = mocha_price[int(inp) - 49];
				}
				else { system("CLS"); cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"; cout << "Please use only valid values!(Press any button to continue)"; inp = _getch(); inp = 'n'; continue; }

			}
			else if (inp == '4' ) {
				inp = '4';
				order = one_type_menu[0];
				price = one_type_price[0];
				
			}
			else if (inp == '5') {
				
				order = one_type_menu[1];
				price = one_type_price[1];

			}
			else if (inp == '6') {
				
				order = one_type_menu[2];
				price = one_type_price[2];

			}
			else if (inp == '7') {
				hot_chocolate_m();
				inp = _getch();

				if (int(inp) - 49 < hotchocolateElements) {
					order = hotchocolate_menu[int(inp) - 49];
					price = hotchocolate_price[int(inp) - 49];
				}
				else { system("CLS"); cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"; cout << "Please use only valid values!(Press any button to continue)"; inp = _getch(); inp = 'n'; continue; }

			}
			else if (inp == '8') {
				
				sahlep_m();
				inp = _getch();
				
				if (int(inp) - 49 < sahlepElements) {
					order = sahlep_menu[int(inp) - 49];
					price = sahlep_price[int(inp) - 49];
				}
				else { system("CLS"); cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"; cout << "Please use only valid values!(Press any button to continue)"; inp = _getch(); inp = 'n'; continue; }

			}
			else { system("CLS"); cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"; cout << "Please use only valid values!(Press any button to continue)"; inp = _getch(); inp = 'n'; continue; }

			system("CLS");
			payement(order, price);
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Press any button to continue";
			inp = _getch();
			inp = 'n'; // when press esc this command blocked exit without ask 'are u sure'.
		}
		else if (inp == char(27)){
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
			cout << "Are you sure to exit? y/n";
			inp = _getch();
			if (inp == 'y' || inp == 'Y') {

				inp = char(27); // to exit the code

			}
			else{

				inp = 'n'; //  when press esc this command blocked exit without ask 'are u sure'.
				continue;

			}
		}
		else {
			inp = 'n'; //  when press esc this command blocked exit without ask 'are u sure'.
			continue;

		}
	} while (inp != char(27)); // char(27) is "esc" button


	return 0;

}



void first_screen() {

	system("CLS");
	system("color F1");
	
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t"; // this line exist to put text on middle of screen
	cout << char(201); // top left corner
	
	for (int i = 0; i < 50; i++) {

		cout << char(205); // loop for top edge (horizonal double line) 

	}
	
	cout << char(187); // top right corner

	for (int i = 0; i < 3; i++) {

		cout << "\n\t\t\t\t\t\t\t";
		cout << char(186); // vertical double line
		for (int i = 0; i < 50; i++) {

			cout << " ";

		}
		cout << char(186); // vertical double line
	}

	cout << "\n\t\t\t\t\t\t\t";
	cout << char(186);
	cout << "            Welcome to Vending Machine            ";// firs text in the first screen
	cout << char(186);

	for (int i = 0; i < 5; i++) {

		cout << "\n\t\t\t\t\t\t\t";
		cout << char(186); // vertical double line
		for (int i = 0; i < 50; i++) {

			cout << " ";

		}
		cout << char(186); // vertical double line
	}
	
	cout << "\n\t\t\t\t\t\t\t";
	cout << char(186);
	cout << "       Press d/D to continue or esc to exit       ";// firs text in the first screen
	cout << char(186);

	for (int i = 0; i < 5; i++) {

		cout << "\n\t\t\t\t\t\t\t";
		cout << char(186); // vertical double line
		for (int i = 0; i < 50; i++) {

			cout << " ";

		}
		cout << char(186); // vertical double line
	}
	
	cout << "\n\t\t\t\t\t\t\t";
	cout << char(200); // bottom left corner
	for (int i = 0; i < 50; i++) {

		
		cout << char(205); // loop for bottom edge (horizonal double line) 

	}
	cout << char(188); // bottom right corner
}

void menu() {
	// first menu function
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
	cout << "COFFEE MENU" << "\n\t\t\t\t\t\t\t";
	cout << "-----------------------------------------" << "\n\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i < mainElements; i++) {
		cout << "\n\t\t\t\t\t\t\t";
		cout << i + 1 << "-" << main_menu[i] << "(" << main_price[i] << " TL)" << endl;

	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Enter Your Order: ";
};

void turkish_m() {
	// turkish coffee menu
	system("CLS");
	system("color E0");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
	cout << "TURKISH COFFEE MENU" << "\n\t\t\t\t\t\t\t";
	cout << "-----------------------------------------" << "\n\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i + 1 < turkishElements; i++) {
		cout << "\n\t\t\t\t\t\t\t";
		cout << i + 1 << "-" << turkish_coffee_menu[i] << "(" << turkish_coffe_price[i] << " TL)" << endl;

	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Enter Your Order: ";
}

void espresso_m() {
	// espresso menu
	system("CLS");
	system("color A0");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
	cout << "ESPRESSO MENU" << "\n\t\t\t\t\t\t\t";
	cout << "-----------------------------------------" << "\n\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i + 1  < espressoElements; i++) {
		cout << "\n\t\t\t\t\t\t\t";
		cout << i + 1 << "-" << espresso_menu[i] << "(" << espresso_price[i] << " TL)" << endl;

	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Enter Your Order: ";
}

void mocha_m() {
	// mocha menu
	system("CLS");
	system("color D0");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
	cout << "MOCHA MENU" << "\n\t\t\t\t\t\t\t";
	cout << "-----------------------------------------" << "\n\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i  < mochaElements; i++) {
		cout << "\n\t\t\t\t\t\t\t";
		cout << i + 1 << "-" << mocha_menu[i] << "(" << mocha_price[i] << " TL)" << endl;

	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Enter Your Order: ";
}
void hot_chocolate_m() {
	// hot chocolate menu
	system("CLS");
	system("color D0");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
	cout << "HOT CHOCOLATE MENU" << "\n\t\t\t\t\t\t\t";
	cout << "-----------------------------------------" << "\n\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i  < hotchocolateElements; i++) {
		cout << "\n\t\t\t\t\t\t\t";
		cout << i + 1 << "-" << hotchocolate_menu[i] << "(" << hotchocolate_price[i] << " TL)" << endl;

	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Enter Your Order: ";
}
void sahlep_m() {

	// sahlep menu
	system("CLS");
	system("color A0");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t";
	cout << "SAHLEP MENU" << "\n\t\t\t\t\t\t\t";
	cout << "-----------------------------------------" << "\n\t\t\t\t\t\t\t\t\t";
	for (int i = 0; i  < sahlepElements; i++) {
		cout << "\n\t\t\t\t\t\t\t";
		cout << i + 1 << "-" << sahlep_menu[i] << "(" << sahlep_price[i] << " TL)" << endl;

	}
	cout << "\t\t\t\t\t\t\t";
	cout << "Enter Your Order: ";
}
void payement(string o, int p) {
	system("color B0");
	int i = 0;
	int pay = 0;
	int payed = 0;
	int amount = 0;
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "How many " << o << " do you want to buy:";
	cin >> i;
	amount = i * p;
	system("CLS");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Total Amount: " << amount << " for " << i << " " << o;
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Payed: " << payed;
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Make Payement: ";
	cin >> pay;
	payed = payed + pay;
	while (payed < amount) {
		system("CLS");
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Total Amount: " << amount << " for " << i << " " << o;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Payed: " << payed;
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Make Supplementary  Payement: ";
		cin >> pay;
		payed = payed + pay;
	}
	system("CLS");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Thanks For Trading";
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << "Cashback: " << payed - amount;
}
