// TextRPG

#include"pch.h"
#include"Player.h"
#include"Warrior.h"
#include"Mage.h"
#include"Archer.h"
#include<iostream>
#include<string>

using namespace std;

string name;
string from;
string age;
string choice;
int command;
int health = 10;
bool dead = false;

//Commands to choose from and what they do to your health
/*void fight() {
	cout << "\n\nFighting.";
	health = health - 50;
	cout << "\nHealth: ";
	cout << health;

}

void run() {
	cout << "\n\nRunning.";
	health = health + 10;
	cout << "\nHealth: ";
	cout << health;
}

void potion() {
	cout << "\n\nConsume potion.";
	health = health + 30;
	cout << "\nHealth: ";
	cout << health;
}*/
// Basic story with decisions, inputting name and where your from

int main()
{
	cout << "\tYour surrounded by darkness. You try to look around you but all you see is nothing. You try to move, but you feel as if there's nothing there to move. You try to listen but hear no sound. You try to smell but not only can you smell nothing but you dont even know if your nose is even there. You ponder for a moment, trying to recollect memories..... but you have none. You cant even remember what you were doing or where you were going......wait......what is your name?\n";
	cout << "\nMy name is......\n";
	cout << "\nMy..name......\n";
	cin >> name;
	cout << "\nRight my name is " + name + " but how old am I?\n";
	cin >> age;
	cout << "\nI am " + age + " years old ...... wow im that old, dang. Now where am I from?\n";
	cout << "\nCome on " + name + " you know this!!!\n";
	cin >> from;
	cout << "\nOk right im from " + from + ". I'm " + age + " years old and my name is " + name + ". Ok well thats good at least I remember that much.\n";
	cout << "\nYou still cant see, hear, or do anything. Are you dead maybe? Naaahhh, You can't be dead.\n";
	cout << "\nFeels like you exist but you just not sure if your unconcious or in a deep sleep.\n";
	cout << "\nTime passes as you contemplate your own existence\n";
	cout << "\nFinally something starts to happen.....\n";
	cout << "\nIt feels as if your being pulled\n";
	cout << "\nDo you allow yourself to be pulled or do you struggle?\n";
	cin >> choice;
	if (choice == "yes", "allow")
	{
		"\nYour are pulled out of some kind of body of water and you gasp for air.\n";
	}
	else if (choice == "no", "struggle")
	{
		"\n"
	}


	/*while (!dead) {
		if (health <= 0) {
			dead = true;
			break;
		}
		cout << "\n\n1. Fight 2.Run 3.Potion\n";
		cin >> command;

		switch (command) {
		case 1: fight();
			break;
		case 2: run();
			break;
		case 3: potion();
			break;
		}
	}
	//How you can die

	cout << "\nYou died " + name + "!\n";
}*/

	return 0;
}