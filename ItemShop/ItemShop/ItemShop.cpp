// ItemShop

#include <iostream>

using namespace std;

int shopSelection;
int coin = 200;
int potion = 50;
int sword = 100;
int shield = 80;

int main()
{
	cout << "(Enter the Item shop. The shopkeeper greets you)\n\n";
	cout << "Hello, Adventurer! Please, have a gander at our items.\n";
	do {
		int itemAmount;
		int confirmPurchase;
		cout << "(To buy an item, type the number of the item you wish to purchase)\n\n";
		cout << "(1) Sword  ---- 100 Coin\n";
		cout << "(2) Shield ----- 80 Coin\n";
		cout << "(3) Potion ----- 20 Coin\n";
		cout << "(Press 4 to exit the shop)\n";
		cout << "You have " << coin << " coins.\n\n";
		cin >> shopSelection;

		if ((shopSelection == 1) && (sword == true)) {
			cout << "You already own this item\n\n";
		}
		else if (shopSelection == 1) {
			if (coin >= 100) {
				cout << "This will cost 100 coins. Are you sure?\n";
				cout << "(Press 1 to confirm, 2 to go back)\n";
				cin >> confirmPurchase;
				cout << "\n\n\n";
				if (confirmPurchase == 1) {
					cout << "You have bought a Sword for 100 coins.\n";
					coin = coin - 100;
					sword = true;
					cout << "You have " << coin << " coins remaining.\n";
				}
			}
			else {
				cout << "You do not have enough coin.\n\n";
			}
		}
		if ((shield == true) && (shopSelection == 2)) {
			cout << "You already own this item\n\n";
		}
		else if (shopSelection == 2) {
			if (coin >= 80) {
				cout << "This will cost 80 coins. Are you sure?\n";
				cout << "(Press 1 to confirm, 2 to go back)\n";
				cin >> confirmPurchase;
				cout << "\n\n\n";
				if (confirmPurchase == 1) {
					cout << "You have bought a Shield for 80 coins.\n";
					shield = true;
					coin = coin - 80;
					cout << "You have " << coin << " coins remaining.\n";
				}
			}
			else {
				cout << "You do not have enough coin.\n\n";
			}
		}
		if (shopSelection == 3) {
			cout << "How many would you like to buy? (Press 0 to go back)\n\n";
			cin >> itemAmount;
			cout << "\n\n";
			while ((itemAmount * 20 > coin) && (itemAmount != 0)) {
				cout << "You do not have enough coin.Please press 0 to go back\n\n";
				cin >> itemAmount;
			}
			if (itemAmount != 0) {
				cout << "This will cost " << itemAmount * 20 << " coins. Are you sure?\n";
				cout << "(Press 1 to confirm, 2 to go back)\n";
				cin >> confirmPurchase;
				cout << "\n\n\n";
				if (confirmPurchase == 3) {
					cout << "You have bought " << itemAmount << " Potion(s) for " << itemAmount * 20 << " coins.\n";
					coin = coin - (itemAmount * 20);
					cout << "You have " << coin << " coins remaining.\n\n";
				}
			}
		}
	}
	while (shopSelection != 4);
		cout << "Thanks for coming! Please stop by again!\n\n";
		cout << "(Press enter to continue)\n";
		cin.ignore();
		cin.get();
		
		return 0;
}