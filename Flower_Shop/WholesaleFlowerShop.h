#pragma once
#include <string>

using namespace std;

class WholesaleFlowerShop {
public:
	struct Flowers {
		string rose = "rose";
		string carnation = "carnation";
		string chrysanthemum = "chrysanthemum";
		string tulip = "tulip";
		string pion = "pion";
	}flowers;
	struct Attributes {
		string packaging = "packaging";
		string tape = "tape";
	}attributes;
	struct FlowersInPots {
		string citrusTree = "citrus tree";
		string moneyTree = "money tree";
	}flowersInPots;
	struct Order {
		int o_rose = 0;
		int o_carnation = 0;
		int o_chrysanthemum = 0;
		int o_tulip = 0;
		int o_pion = 0;
		int o_packaging = 0;
		int o_tape = 0;
		int o_cirtusTree = 0;
		int o_moneyTree = 0;
	}order;
	bool finalOrder = false;

	void ShowPriceWholesaleFlowerShop() {
		cout << "Flowers: " << endl
			<< "1." << flowers.rose << endl
			<< "2." << flowers.carnation << endl
			<< "3." << flowers.chrysanthemum << endl
			<< "4." << flowers.tulip << endl
			<< "5." << flowers.pion << endl << endl;
		cout << "Attributes: " << endl
			<< "6." << attributes.packaging << endl
			<< "7." << attributes.tape << endl << endl;
		cout << "Flowers in pots: " << endl
			<< "8." << flowersInPots.citrusTree << endl
			<< "9." << flowersInPots.moneyTree << endl;
	}
	void Contacts() {
		cout << "Our address: Voronezh, Leninsky prospect, 174/6, 1st floor." << endl
			<< "You can call us by phone: +7-950-768-78-32, +7-951-548-69-74" << endl;
	}
	void FinalOrder() {
		if (order.o_rose > 0) {
			cout << flowers.rose << " " << order.o_rose << endl;
			finalOrder = true;
		}
		else if (order.o_carnation > 0) {
			cout << flowers.carnation << " " << order.o_carnation << endl;
			finalOrder = true;
		}
		else if (order.o_chrysanthemum > 0) {
			cout << flowers.chrysanthemum << " " << order.o_chrysanthemum << endl;
			finalOrder = true;
		}
		else if (order.o_tulip > 0) {
			cout << flowers.tulip << " " << order.o_tulip << endl;
			finalOrder = true;
		}
		else if (order.o_pion > 0) {
			cout << flowers.pion << " " << order.o_pion << endl;
			finalOrder = true;
		}
		else if (order.o_packaging > 0) {
			cout << attributes.packaging << " " << order.o_packaging << endl;
			finalOrder = true;
		}
		else if (order.o_tape > 0) {
			cout << attributes.tape << " " << order.o_tape << endl;
			finalOrder = true;
		}
		else if (order.o_cirtusTree > 0) {
			cout << flowersInPots.citrusTree << " " << order.o_cirtusTree << endl;
			finalOrder = true;
		}
		else if (order.o_moneyTree > 0) {
			cout << flowersInPots.moneyTree << " " << order.o_moneyTree << endl;
			finalOrder = true;
		}
		else if (order.o_rose == 0 && order.o_carnation == 0 && order.o_chrysanthemum == 0 && order.o_tulip == 0 && order.o_pion == 0
			&& order.o_packaging == 0 && order.o_tape == 0 && order.o_cirtusTree == 0 && order.o_moneyTree == 0) {
			finalOrder = false;
		}
	}
	void Checkout() {
		cout << "You want to order: " << endl << endl;
		ShowPriceWholesaleFlowerShop();
		cout << "\n0.back to menu" << endl << endl;
		int choice;
		do {
			cout << "Select an item for order: "; cin >> choice;
			if (choice < 0 || choice>9) {
				cout << "Incorrect input. The given position is not in the database. Try again" << endl;
			}
			switch (choice) {
			case 1:
				cout << "You have chosen roses. " << order.o_rose << " roses per order. How many roses to order?" << endl;
				do {
					cin >> order.o_rose;
					if (order.o_rose < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_rose < 0);
				cout << order.o_rose << " roses added to order." << endl << endl;
				break;
			case 2:
				cout << "You have chosen carnation. " << order.o_carnation << " carnation per order. How many carnation to order?" << endl;
				do {
					cin >> order.o_carnation;
					if (order.o_carnation < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_carnation < 0);
				cout << order.o_carnation << " carnation added to order." << endl << endl;
				break;
			case 3:
				cout << "You have chosen chrysanthemums. " << order.o_chrysanthemum << " chrysanthemums per order. How many chrysanthemums to order?" << endl;
				do {
					cin >> order.o_chrysanthemum;
					if (order.o_chrysanthemum < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_chrysanthemum < 0);
				cout << order.o_chrysanthemum << " chrysanthemums added to order." << endl << endl;
				break;
			case 4:
				cout << "You have chosen tulips. " << order.o_tulip << " tulips per order. How many tulips to order?" << endl;
				do {
					cin >> order.o_tulip;
					if (order.o_tulip < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_tulip < 0);
				cout << order.o_tulip << " tulips added to order." << endl << endl;
				break;
			case 5:
				cout << "You have chosen peonies. " << order.o_pion << " peonies per order. How many peonies to order?" << endl;
				do {
					cin >> order.o_pion;
					if (order.o_pion < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_pion < 0);
				cout << order.o_pion << " peonies added to order." << endl << endl;
				break;
			case 6:
				cout << "You have chosen packaging. " << order.o_packaging << " packaging per order. How many packaging to order?" << endl;
				do {
					cin >> order.o_packaging;
					if (order.o_packaging < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_packaging < 0);
				cout << order.o_packaging << " packaging added to order." << endl << endl;
				break;
			case 7:
				cout << "You have chosen tape. " << order.o_tape << " tape per order. How many tape to order?" << endl;
				do {
					cin >> order.o_tape;
					if (order.o_tape < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_tape < 0);
				cout << order.o_tape << " tape added to order." << endl << endl;
				break;
			case 8:
				cout << "You have chosen citrus tree. " << order.o_cirtusTree << " citrus tree per order. How many citrus tree to order?" << endl;
				do {
					cin >> order.o_cirtusTree;
					if (order.o_cirtusTree < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_cirtusTree < 0);
				cout << order.o_cirtusTree << " citrus tree added to order." << endl << endl;
				break;
			case 9:
				cout << "You have chosen money tree. " << order.o_moneyTree << " money tree per order. How many money tree to order?" << endl;
				do {
					cin >> order.o_moneyTree;
					if (order.o_moneyTree < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_moneyTree < 0);
				cout << order.o_moneyTree << " money tree added to order." << endl << endl;
				break;
			case 0:
				FinalOrder();
				break;
			}
		} while (choice != 0);

	}
	void Delivery() {
		if (!finalOrder) {
			cout << "Your order is empty. There is nothing to deliver." << endl;
		}
		else {
			cout << "Order delivery by courier? (y/n) ";
			char choice;
			string city, street, house, flat, phonenumber;
			cin >> choice;
			if (choice == 'y') {
				cout << "Enter your address." << endl;
				cout << "City: "; cin >> city;
				cout << "\nStreet: "; cin >> street;
				cout << "\nHouse: "; cin >> house;
				cout << "\nFlat: "; cin >> flat;
				cout << "\nEnter your phone number: "; cin >> phonenumber;
				cout << "Manager will contact you by phone " << phonenumber << " to confirm the order. Please wait." << endl;
			}
			else {
				cout << "You can pick up your order in our store at the address: Voronezh, Leninsky prospect, 174/6, 1st floor." << endl
					<< "You can call us by phone: +7-950-768-78-32, +7-951-548-69-74" << endl;
			}
		}
	}
	void Clear() {
		order.o_rose = 0;
		order.o_carnation = 0;
		order.o_chrysanthemum = 0;
		order.o_tulip = 0;
		order.o_pion = 0;
		order.o_packaging = 0;
		order.o_tape = 0;
		order.o_cirtusTree = 0;
		order.o_moneyTree = 0;
		FinalOrder();
	}
};