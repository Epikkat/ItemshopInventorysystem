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
int health = 100;
bool dead = false;

//Commands to choose from and what they do to your health
void fight() {
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
}

// Basic story with decisions, inputting name and where your from

int main()
{
	cout << "\tYour surrounded by darkness. You try to look around you but all you see is nothing.\nYou try to move, but you feel as if there's nothing there to move. You try to listen but hear no sound. \nYou try to smell but not only can you smell nothing but you dont even know if your nose is even there. \nYou ponder for a moment, trying to recollect memories..... but you have none. \nYou cant even remember what you were doing or where you were going......\nwait......what is your name?\n";
	cout << "\nYour name is......\n";
	cout << "\nYour....name....is....\n";
	cin >> name;
	cout << "\nRight your name is " + name + " but how old are you?\n";
	cin >> age;
	cout << "\nYou are " + age + " years old ...... wow your that old, dang. Now where are you from?\n";
	cout << "\nCome on " + name + " you know this!!!\n";
	cin >> from;
	cout << "\nOk right your from " + from + ". you are " + age + " years old and your name is " + name + ". \nOk well thats good at least you remember that much. You still cant see, hear, or do anything. \nAre you dead maybe? Naaahhh, You can't be dead. \nFeels like you exist but you just not sure if your unconcious or in a deep sleep. \nTime passes as you contemplate your own existence. Finally something starts to happen.....\nIt feels as if your being pulled\n";
	cout << "\nDo you allow yourself to be pulled or do you struggle?\n";
	cin >> choice;
	if (choice == "yes", "allow")
	{
		"\nYour are pulled out of some kind of body of water and you gasp for air.\n";
	}
	else if (choice == "no", "struggle")
	{
		cout << "\nWell that was quick!\n";
		cout << "\nYou have died!!!\n";

			return 0;
	};
	
	cout << "\nAs you are being pulled you start to regain your senses. You immediately cough and hack up about a few litres of water. \nYou try desperately to fill your lungs with air and expel the water out of your system. Slowly your other senses start to clear. \nThe darkness fades and the light makes your eyes squint as you try to focus on your surroundings.\n";
	cout << "\nAre you okay?\n";
	cout << "\nA strange voice asks. Though your ears are a bit clogged you are able to make out what was said to you though the voice is unfamiliar. \nFinally able to breath you spew out some jibberish before replying to the voice.\n";
	cout << "\nI think so, just give me a moment.\n";

	cout << "\nDo you look around, speak, or run?\n";
	cin >> choice;

	if (choice == "speak") {
		cout << "\nSince you didnt take the time to take in your surroundings the sheer shock of where the voice was coming from spooks you causing you to run.\n";
		cout << "\nYou trip on a rock and smash your head.\n";
		cout << "\nYou have died. You are a real winner!!!\n";
		return 0;
	}
	else if (choice == "run") {
		cout << "\nYou run, trip, and fall into a pit.\n";
		cout << "\nYou have died. Smart move dumbass!!!\n";
		return 0;
	}
	else if (choice == "look")
	{
		cout << "\nYour standing on a riverbank surrounded by a very dense looking forest. The river appears to run north and south with a stone bridge just north of your position. \nYou also ponder to yourself how the heck you have a sense for direction...whatever doesnt matter but definitly useful. \nThere also appears to be a small horse drawn wagon on the path before the bridge.\n";
		cout << "\nYou look towards the direction of the voice only to be suprised by the what you see. \nYou can only describe as a feline looking humanoid. This creature has a cats tail but walks upright on two legs. \nIts head is very feline looking, covered in black fur with cat ears and whiskers. Its a bit larger then most humans and appears to be wearing clothes. \nThe clothing consists of boots,a belt, pants and vambraces all made out of some sort of leather. \nAssuming this creature is male he is also bare chested which confirms his furriness even more so.\n";
	}

	cout << "\nDo you look around, speak, or run?\n";
	cin >> choice;
	if (choice == "speak") {
		cout << "\nAfter a few moments of silence you look towards the feline.\n";
	}
	else if (choice == "run") {
		cout << "\nYou run, trip, and fall into a pit.\n";
		cout << "\nYou have died!!! Good Job dummy\n";
		return 0;
	}

	cout << "\nSo where am I, and who or what are you?\n";

	cout << "\nThe catman chuckles softly\n";

	cout << "\nMy apologies mew, I should introduce myself, my name is Saber, and I am a pantera merchant meow. You are in the forest of afterwoods.\n";

	cout << "\nSo your like a man cat thing? Where is this forest of Afterwoods exactly located? Why was I drowning and how did I get here?\n";

	cout << "\nHis chuckles turn to laughter as he walks towards the horse and wagon.\n";

	cout << "\nWell you seem to have many questions mew, maybe I can answer some of them if you can asnwer some of mine. Let me get the campfire set up before it gets dark meow\n";

	cout << "\t\nThe dark feline starts to unpack some things from his wagon. \nHe sets up a fire pit with a cooking pot and lays down two bedrolls just as the sun starts to settle on the horizon.\n Saber starts to throw some meat into the pot, sits down a log near the fire and looks to you.\n";

	cout << "So I told you my name now may I ask what your is mew and where you come from traveller?";

	cout << "\nWell my name is " + name + " and I am from " + from + "./n";

	cout << "\nThat's an interesting name and I dont think I have ever heard of " + from + ". Where is that located exactly?\n";

	cout << "\nYou stare in the fire trying to pick apart your own memories.\n";

	cout << "\nThing is I dont know where here is, so I couldnt tell you where " + from + " is exactly.\nAll I remember is this black void of nothingness, then you dragging me out of the water.\nGuess I owe you a thank you for saving my life. But how did you find me in the water?\n"; 

	cout << "\nWell I was travelling through the forest on my way to Inner City to sell some wares when I was coming upto the bridge something in the water caught my eye mew. \nAt first I thought it was a large fish meow, trying to swim upstream. I took a second glance and saw your body just floating under the surface  of the river. \n I just dove in and well here you are mew.\n";
	cout << "/nSo you dont even know how you got in the river in the first place mew?\n";

	cout << "\nYou shake your head*\n";

	cout << "\nThe cooking pot starts a bubbling like mad. Saber grabs some bowls and stirs the contents of the cooking pot. He pours some into the bowls and hands one to you.\n";

	cout << "\nHere eat this stew it will replenish your health\n";

	cout << "\nYou eat the stew.\n";
	cout << "\nYOU GAINED 100 Health\n";


	while (!dead) {
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

	return 0;
}