#pragma once
#include <string>

using namespace std;

class Gardenshop {
public:
	struct Agriculture {
		string ground = "ground";
		string fertilizers = "fertilizers";
		string pesticides = "pesticides";
	}agriculture;
	struct Tools {
		string shovel = "shovel";
		string rake = "rake";
		string hoe = "hoe";
		string secateurs = "secateurs";
		string atomizer = "atomizer";
		string hose = "hose";
	}tools;
	struct Order {
		int o_ground = 0;
		int o_fertilizers = 0;
		int o_pesticides = 0;
		int o_shovel = 0;
		int o_rake = 0;
		int o_hoe = 0;
		int o_secateurs = 0;
		int o_atomizer = 0;
		int o_hose = 0;
	}order;
	bool finalOrder = false;

	void ShowPriceGardenshop() {
		cout << "Agriculture: " << endl
			<< "1." << agriculture.ground << endl
			<< "2." << agriculture.fertilizers << endl
			<< "3." << agriculture.pesticides << endl << endl;;
		cout << "Tools: " << endl
			<< "4." << tools.shovel << endl
			<< "5." << tools.rake << endl
			<< "6." << tools.hoe << endl
			<< "7." << tools.secateurs << endl
			<< "8." << tools.atomizer << endl
			<< "9." << tools.hose << endl << endl;
	}
	void Contacts() {
		cout << "Our address: Voronezh, Montazhny proezd, 2" << endl
			<< "You can call us by phone: +7(4732)-330-456" << endl;
	}
	void Checkout() {
		cout << "You want to order: " << endl << endl;
		ShowPriceGardenshop();
		cout << "0.back to menu" << endl << endl;
		int choice;
		do {
			cout << "Select an item for order: "; cin >> choice;
			if (choice < 0 || choice>9) {
				cout << "Incorrect input. The given position is not in the database. Try again" << endl;
			}
			switch (choice) {
			case 1:
				cout << "You have chosen ground. " << order.o_ground << " ground per order. How many ground to order?" << endl;
				do {
					cin >> order.o_ground;
					if (order.o_ground < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_ground < 0);
				cout << order.o_ground << " ground added to order." << endl << endl;
				break;
			case 2:
				cout << "You have chosen fertilizers. " << order.o_fertilizers << " fertilizers per order. How many fertilizers to order?" << endl;
				do {
					cin >> order.o_fertilizers;
					if (order.o_fertilizers < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_fertilizers < 0);
				cout << order.o_fertilizers << " fertilizers added to order." << endl << endl;
				break;
			case 3:
				cout << "You have chosen pesticides. " << order.o_pesticides << " pesticides per order. How many pesticides to order?" << endl;
				do {
					cin >> order.o_pesticides;
					if (order.o_pesticides < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_pesticides < 0);
				cout << order.o_pesticides << " pesticides added to order." << endl << endl;
				break;
			case 4:
				cout << "You have chosen shovel. " << order.o_shovel << " shovel per order. How many shovel to order?" << endl;
				do {
					cin >> order.o_shovel;
					if (order.o_shovel < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_shovel < 0);
				cout << order.o_shovel << " shovel added to order." << endl << endl;
				break;
			case 5:
				cout << "You have chosen rake. " << order.o_rake << " rake per order. How many rake to order?" << endl;
				do {
					cin >> order.o_rake;
					if (order.o_rake < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_rake < 0);
				cout << order.o_rake << " rake added to order." << endl << endl;
				break;
			case 6:
				cout << "You have chosen hoe. " << order.o_hoe << " hoe per order. How many hoe to order?" << endl;
				do {
					cin >> order.o_hoe;
					if (order.o_hoe < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_hoe < 0);
				cout << order.o_hoe << " hoe added to order." << endl << endl;
				break;
			case 7:
				cout << "You have chosen secateurs. " << order.o_secateurs << " secateurs per order. How many secateurs to order?" << endl;
				do {
					cin >> order.o_secateurs;
					if (order.o_secateurs < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_secateurs < 0);
				cout << order.o_secateurs << " secateurs added to order." << endl << endl;
				break;
			case 8:
				cout << "You have chosen atomizer. " << order.o_atomizer << " atomizer per order. How many atomizer to order?" << endl;
				do {
					cin >> order.o_atomizer;
					if (order.o_atomizer < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_atomizer < 0);
				cout << order.o_atomizer << " atomizer added to order." << endl << endl;
				break;
			case 9:
				cout << "You have chosen hose. " << order.o_hose << " hose per order. How many hose to order?" << endl;
				do {
					cin >> order.o_hose;
					if (order.o_hose < 0) {
						cout << "Data error. Minimum lot 0 piece. Try again" << endl;
					}
				} while (order.o_hose < 0);
				cout << order.o_hose << " hose added to order." << endl << endl;
				break;
			case 0:
				FinalOrder();
				break;
			}
		} while (choice != 0);
	}
	void FinalOrder() {
		if (order.o_ground > 0) {
			cout << agriculture.ground << " " << order.o_ground << endl;
			finalOrder = true;
		}
		else if (order.o_fertilizers > 0) {
			cout << agriculture.fertilizers << " " << order.o_fertilizers << endl;
			finalOrder = true;
		}
		else if (order.o_pesticides > 0) {
			cout << agriculture.pesticides << " " << order.o_pesticides << endl;
			finalOrder = true;
		}
		else if (order.o_shovel > 0) {
			cout << tools.shovel << " " << order.o_shovel << endl;
			finalOrder = true;
		}
		else if (order.o_rake > 0) {
			cout << tools.rake << " " << order.o_rake << endl;
			finalOrder = true;
		}
		else if (order.o_hoe > 0) {
			cout << tools.hoe << " " << order.o_hoe << endl;
			finalOrder = true;
		}
		else if (order.o_secateurs > 0) {
			cout << tools.secateurs << " " << order.o_secateurs << endl;
			finalOrder = true;
		}
		else if (order.o_atomizer > 0) {
			cout << tools.atomizer << " " << order.o_atomizer << endl;
			finalOrder = true;
		}
		else if (order.o_hose > 0) {
			cout << tools.hose << " " << order.o_hose << endl;
			finalOrder = true;
		}
		else if (order.o_ground == 0 && order.o_fertilizers == 0 && order.o_pesticides == 0 && order.o_shovel == 0 && order.o_rake == 0
			&& order.o_hoe == 0 && order.o_secateurs == 0 && order.o_atomizer == 0 && order.o_hose == 0) {
			finalOrder = false;
		}
	}
	void Clear() {
		order.o_ground = 0;
		order.o_fertilizers = 0;
		order.o_pesticides = 0;
		order.o_shovel = 0;
		order.o_rake = 0;
		order.o_hoe = 0;
		order.o_secateurs = 0;
		order.o_atomizer = 0;
		order.o_hose = 0;
		FinalOrder();
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
				cout << "You can pick up your order in our store at the address: Voronezh, Montazhny proezd, 2" << endl
					<< "You can call us by phone: +7(4732)-330-456" << endl;
			}
		}
	}
};