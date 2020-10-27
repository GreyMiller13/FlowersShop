#pragma once
#include <string>

using namespace std;

class FlowerShop : public WholesaleFlowerShop, public Gardenshop {
public:
	void GraphicMenu() {
		cout << "========================================" << endl
			<< "== Welcome to our online flower shop! ==" << endl
			<< "========================================" << endl
			<< "== 1. View price list                 ==" << endl
			<< "== 2. Add item to cart                ==" << endl
			<< "== 3. Items in the cart               ==" << endl
			<< "== 4. Empty cart                      ==" << endl
			<< "== 5. Delivery                        ==" << endl
			<< "== 6. Contacts                        ==" << endl
			<< "== 7. Exit                            ==" << endl
			<< "========================================" << endl;
	}
	void ChoiceMenu() {
		int choice;
		do {
			cout << "\nChoose an action: "; cin >> choice;
			if (choice > 7 || choice < 1) {
				cout << "Wrong choice. Try again" << endl;
			}
			switch (choice)
			{
			case 1:
				ShowPrice();
				break;
			case 2:
				AddItem();
				break;
			case 3:
				ShowItems();
				break;
			case 4:
				Clear();
				break;
			case 5:
				Dilivery();
				break;
			case 6:
				Contacts();
				break;
			case 7:
				system("cls");
				cout << "=======================================" << endl
					<< "== Thank you for visiting our store! ==" << endl
					<< "=======================================" << endl;
				break;
			}
		} while (choice != 7);
	}
	void ShowPrice() {
		int choice;
		do {
			system("cls");
			cout << "\nWhat are you interested in?" << endl
				<< "1. Flowers" << endl
				<< "2. Garden" << endl
				<< "3. Back to menu" << endl;
			cout << "\nPlease select (1-3): "; cin >> choice;
			if (choice > 3 || choice < 1) {
				cout << "Wrong choice. Try again" << endl;
			}
			switch (choice)
			{
			case 1:
				system("cls");
				ShopFlower.ShowPriceWholesaleFlowerShop();
				system("pause");
				break;
			case 2:
				system("cls");
				ShopFlower.ShowPriceGardenshop();
				system("pause");
				break;
			case 3:
				system("cls");
				GraphicMenu();
				break;
			}
		} while (choice != 3);
	}
	void ShowItems() {
		if (ShopFlower.WholesaleFlowerShop::finalOrder == true) {
			cout << "Your order: " << endl;
			ShopFlower.WholesaleFlowerShop::FinalOrder();
		}
		else if (ShopFlower.Gardenshop::finalOrder == true) {
			cout << "Your order: " << endl;
			ShopFlower.Gardenshop::FinalOrder();
		}
		else if (ShopFlower.WholesaleFlowerShop::finalOrder == false && ShopFlower.Gardenshop::finalOrder == false) {
			cout << "Cart is empty" << endl;
		}
	}
	void Clear() {
		if (ShopFlower.WholesaleFlowerShop::finalOrder == true || ShopFlower.Gardenshop::finalOrder == true) {
			char char_choice;
			cout << "Clear cart? (y/n)"; cin >> char_choice;
			if (char_choice == 'y') {
				ShopFlower.WholesaleFlowerShop::Clear();
				ShopFlower.Gardenshop::Clear();
				cout << "Cart is empty." << endl;
			}
		}
		else {
			cout << "Cart is empty. Nothing to delete." << endl;
		}
	}
	void Contacts() {
		cout << "Wholesale flower base contacts: " << endl;
		ShopFlower.WholesaleFlowerShop::Contacts();
		cout << endl << "Garden contacts: " << endl;
		ShopFlower.Gardenshop::Contacts();
	}
	void AddItem() {
		int choice;
		do {
			system("cls");
			cout << "\nWhat are you interested in?" << endl
				<< "1. Flowers" << endl
				<< "2. Garden" << endl
				<< "3. Back to menu" << endl;
			cout << "Select a product section (1-3): "; cin >> choice;
			if (choice > 3 || choice < 1) {
				cout << "Wrong choice. Try again" << endl;
			}
			switch (choice)
			{
			case 1:
				system("cls");
				ShopFlower.WholesaleFlowerShop::Checkout();
				system("pause");
				break;
			case 2:
				system("cls");
				ShopFlower.Gardenshop::Checkout();
				system("pause");
				break;
			case 3:
				system("cls");
				GraphicMenu();
				break;
			}
		} while (choice != 3);
	}
	void Dilivery() {
		if (ShopFlower.WholesaleFlowerShop::finalOrder == true) {
			ShopFlower.WholesaleFlowerShop::Delivery();
		}
		else if (ShopFlower.Gardenshop::finalOrder == true) {
			ShopFlower.Gardenshop::Delivery();
		}
		else if (ShopFlower.WholesaleFlowerShop::finalOrder == false && ShopFlower.Gardenshop::finalOrder == false) {
			cout << "Your order is empty. There is nothing to deliver." << endl;
		}
	}
}ShopFlower;