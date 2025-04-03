#include <iostream>
#include<windows.h>
#include <string>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

// IMPORTANT COMMANDS
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(short x, short y) // DO NOT DELETE THIS VOID, IMPORTANT!!!                                             
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


// Events
// 1 Lake of Crocodiles = 1HP
// 2 Sinkhole = 2HP
// 3 Underground Cavern = 2HP
// 4 Arachnid infested path = 1 HP
// 5 Troll Cave = 1 HP
// 6 Toxic Rain above Surface = 2 HP
// 7 Home? = 2 HP



void ending() {
	string places[12];
	places[0] = "CAVE"; places[1] = "FROGGIT'S CAVE";
	places[2] = "DREADED LAKE"; places[3] = "MARSH PATH";
	places[4] = "UNDERGROUND CAVERN"; places[5] = "ARACHNID PATH";
	places[6] = "TROLLS HOME?"; places[7] = "SURFACE";
	places[8] = "CASTLE";

	int HP = 10;

	char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;

	system("cls");

	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";
	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";
	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

	SetConsoleTextAttribute(h, 12);
	gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
	gotoxy(125, 15); cout << "þ " << places[7] << " þ";
	gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
	gotoxy(125, 20); cout << "1. " << "---------";
	gotoxy(125, 21); cout << "2. " << "---------";

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 8); cout << "You arrived at the village to where the castle stood.";
	gotoxy(30, 9); cout << "It was all debris, not a single living being in sight. You're so close, you can't give up now.'";
	gotoxy(30, 10); cout << "You kept walking, and walking, and walking.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 12); cout << "You can almost feel home at a fingertip's touch, You're so close.";
	gotoxy(30, 13); cout << "You enter the castle walls, debris sitting infront of you.";
	gotoxy(30, 14); cout << "You walked over it, making your way to the throne room.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 16); cout << "You see it. It was a blue portal that illuminated the castle.";
	gotoxy(30, 17); cout << "You approached it, reaching your hand in when a green, cold hand grabbed your wrist.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 19); cout << "You looked towards the person.";
	gotoxy(30, 20); cout << "It was Froggit, your first friend in this unforgiving world.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 22); cout << "`Are you really leaving?";
	gotoxy(30, 23); cout << "I watched you from afar, as you left on this journey home alone.";
	gotoxy(30, 24); cout << "Is this the independence that you would've wanted?";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 26); cout << "You stared at him confused, after everything that you've been through,";
	gotoxy(30, 27); cout << "You just wanted to go home.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 29); cout << "Stay.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 31); cout << "[1] Stay in the jungles, continue your journey.";
	gotoxy(30, 32); cout << "[2] Home.";
	gotoxy(30, 33); cin >> c10;
	gotoxy(30, 39); system("pause");

	if (c10 == '1') {

		gotoxy(30, 31); cout << "Froggit smiles, looking towards you,";
		gotoxy(30, 32); cout << "`You would enjoy it here.`";
		gotoxy(30, 33); cout << "This is your new home.";
		gotoxy(30, 39); system("pause");


		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

		gotoxy(30, 15); cout << "Thank you for playing!";
	}

	else if (c10 == '2'); {
		gotoxy(30, 31); cout << "Froggit looks at you, feeling betrayed at your choice.";
		gotoxy(30, 32); cout << "`I'm sorry.` He states, pointing his sword at you.";
		gotoxy(30, 33); cout << "I don't have a choice.";
		HP = (HP - HP);
		gotoxy(30, 39); system("pause");

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

		gotoxy(30, 15); cout << "Thank you for playing!";
	}
}


void mainstory() {
	string items[12];
	items[0] = "GASLAMP"; items[1] = "LONGSWORD"; items[3] = "GIANT TARO LEAF"; items[2] = "STICK";

	string places[12];
	places[0] = "CAVE"; places[1] = "FROGGIT'S CAVE";
	places[2] = "DREADED LAKE"; places[3] = "MARSH PATH";
	places[4] = "UNDERGROUND CAVERN"; places[5] = "ARACHNID PATH";
	places[6] = "TROLLS HOME?"; places[7] = "SURFACE";
	places[8] = "CASTLE";

	int HP = 10;

	string yn;

	char c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;

	// SCENE 1

	system("cls");
	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ" << flush;
	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";
	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";
	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

	SetConsoleTextAttribute(h, 12);
	gotoxy(125, 12); cout << "þþ HP: " << HP << " þþ";

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 10); cout << "The enviroment around you was surrounded up by a bright light.";
	gotoxy(30, 11); cout << "It blinded you as you shieled your eyes, a warm feeling enveloping you.";
	gotoxy(30, 12); cout << "Once the feeling subsides, you removed your arm to see yourself inside a cave.";

	gotoxy(30, 10); cout << "The enviroment around you was surrounded up by a bright light.";
	gotoxy(30, 11); cout << "It almost blinded you as you shieled your eyes, a warm feeling enveloping you.";
	gotoxy(30, 12); cout << "Once the feeling subsides, you open your eyes and see yourself inside a cave.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 16); cout << "...";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 18); cout << "...";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 20); cout << "...";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 22); cout << "It was cold, yet you are sitting on some twigs and sticks,";
	gotoxy(30, 23); cout << "there was a gas lamp lighting up the small cavern, warming you up.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 25); cout << "You stand up, looking down at the gas lamp that you grabbed by the handle.";
	gotoxy(30, 26); cout << "You hold it up and stared at the flame that flickered within it.";
	gotoxy(30, 27); cout << "It gave you a sense of comfort in this dark time, giving you light.";

	gotoxy(30, 39); system("pause");

	gotoxy(30, 29); cout << "Acquired a " << items[0] << "!";

	gotoxy(30, 31); cout << "þ Added to Inventory þ";

	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
	gotoxy(125, 15); cout << "þ " << places[0] << " þ";
	gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
	gotoxy(125, 20); cout << "1." << items[0];

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 39); system("pause");

	// SCENE 2

	system("cls");

	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";
	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";
	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

	SetConsoleTextAttribute(h, 12);
	gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
	gotoxy(125, 15); cout << "þ " << places[0] << " þ";
	gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
	gotoxy(125, 20); cout << "1." << items[0];

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 10); cout << "You walked around the cave, holding the " << items[0] << " in your hands.";
	gotoxy(30, 11); cout << "It looked like somebody's home, plates of armor are hung on the wall,'";
	gotoxy(30, 12); cout << "The place looks cozy, but the fact that you woke up in someone's home is questionable.";
	gotoxy(30, 13); cout << "You used the lantern as your light. Looking for an exit. ";

	gotoxy(30, 39); system("pause");


	gotoxy(30, 15); cout << "You see the exit, and a sword that hangs by the doorway.";
	gotoxy(30, 16); cout << "You held the " << items[0] << "closer to it. examining its blade.";
	gotoxy(30, 17); cout << "It had a certain glow to it, a mighty, fine steel.";
	gotoxy(30, 18); cout << "You could pick it up, and use it to defend yourself in these unfamiliar place.";

	gotoxy(30, 21); cout << "Press 1 to pick it up.";
	gotoxy(30, 22); cin >> c1;

	do {

		if (c1 == '1') {
			gotoxy(30, 25);cout << "You reached up and grabbed the sword by its hilt,";
			gotoxy(30, 26);cout << "It was quite heavy but you managed to carry it with you.";

			gotoxy(30, 39); system("pause");

			gotoxy(30, 28); cout << "Acquired a " << items[1] << "!";
			gotoxy(30, 30); cout << "þ Added to Inventory þ";

			SetConsoleTextAttribute(h, 11);
			gotoxy(125, 21);cout << "2. " << items[1];

			SetConsoleTextAttribute(h, 15);
			gotoxy(30, 39); system("pause");
		}

		else if (c1 != '1') {
			gotoxy(30, 23); cout << "Please choose from the choices available.";
			gotoxy(30, 24); cin >> c1;
		}

	} while (c1 != '1');


	system("cls");

	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";
	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";
	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


	SetConsoleTextAttribute(h, 12);
	gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
	gotoxy(125, 15); cout << "þ " << places[0] << " þ";
	gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
	gotoxy(125, 20); cout << "1." << items[0];
	gotoxy(125, 21); cout << "2." << items[1];

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 10); cout << "You near the doorway, holding the handle as you gently pushed it open outwards.";
	gotoxy(30, 11); cout << "It was nighttime, the soft glow of moonlight shined upon you.";
	gotoxy(30, 12); cout << "The hoots of the owls, the caws of the crows can be heard, it was.. peaceful.";
	gotoxy(30, 13); cout << "You can't help but miss the bustling city nights, you want to go back home.";

	gotoxy(30, 39); system("pause");

	gotoxy(30, 15); cout << "You stagger outwards, still feeling a bit weak in the legs but you kept walking.";
	gotoxy(30, 16); cout << "There was rustling in the bushes infront of you.";
	gotoxy(30, 17); cout << "You stopped walking, staring at the bush as you held the hilt of the " << items[1] << " tightly.";

	gotoxy(30, 39); system("pause");

	gotoxy(30, 19); cout << "The rustling became louder, and you could feel a chill run down the back of your spine.";
	gotoxy(30, 20); cout << "A trail of cold sweat run down the side of your face as you stare, waiting for it to come out.";
	gotoxy(30, 21); cout << "A figure comes into view, you held up " << items[0] << " to illuminate the dark shadow infront of you.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 23); cout << "...";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 24); cout << "...";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 25); cout << "...";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 26); cout << "A tall frog.. shows themselves, a shade of red splattered on their tunic,";
	gotoxy(30, 27); cout << "their sword sheathed on their side.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 29); cout << "`You're finally awake.` They state, you can't help but stare at them.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 31); cout << "They sound like Kermit the Frog and you don't want to embarass yourself by laughing.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 33); cout << "`Come, we must talk.` The tall frog states as they walked past you, entering their cave.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 35); cout << "You look back at them for a moment, thinking if this place can get weirder and weirder.";

	//SCENE 3

	system("cls");

	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";
	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";
	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


	SetConsoleTextAttribute(h, 12);
	gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
	gotoxy(125, 15); cout << "þ " << places[0] << " þ";
	gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
	gotoxy(125, 20); cout << "1." << items[0];
	gotoxy(125, 21); cout << "2." << items[1];

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 8); cout << "You follow after them inside their home, you see that they clasped their hands together,";
	gotoxy(30, 9); cout << "A ball of light lit up the whole cave, and you can see everything clearly now.";
	gotoxy(30, 10); cout << "There were all sorts of stuff that filled the cave, and it looked and felt like home.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 12); cout << "The tall frog approaches you, putting their hand out to you as they waited for something,";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 13); cout << "You look at him confused. `Yeah?` you asked.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 15); cout << "`My equipment.` They say and realization of the things that you are holding hit you.";
	gotoxy(30, 16); cout << "You mumble a soft sorry before handing them the " << items[0] << " and " << items[1] << ".";

	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 20); cout << "1. " << "---------";
	gotoxy(125, 21); cout << "2. " << "---------";

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 18); cout << "They nod, walking off ahead. `Make yourself at home.` They state, `I'll bring some tea.`";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 20); cout << "You look at them go at the back of the cave as you looked at the table infront of you.";
	gotoxy(30, 21); cout << "You think that this stranger was willing to help you, might aswell thank them before ";
	gotoxy(30, 22); cout << "you leave and find a way home.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 24); cout << "The tall frog comes back with teacups in both hands, hot steam coming out of the cup";
	gotoxy(30, 25); cout << "They set it down on the table infront of you, as they make their way across you,";
	gotoxy(30, 26); cout << "sitting down on one of the chairs infront of you. `So..` They trail off, taking a sip.";
	gotoxy(30, 27); cout << "`What's your name?` they asked, looking at you curiously.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 29); cout << "You stared back at him too, gently cooling down you tea before taking a sip,";
	gotoxy(30, 30); cout << "It tasted earthy, natural almost as if it's freshly dried tea leaves.";
	gotoxy(30, 39); system("pause");
	gotoxy(30, 32); cout << "You set it down gently and answered, `My name is "; cin >> yn;
	gotoxy(30, 39); system("pause");
	gotoxy(30, 34); cout << "`It's good to finally know your identity, " << yn << ".` They say, smiling.";
	gotoxy(30, 35); cout << "`My name is Froggit, it's nice to meet you.` The frog, Froggit says, `I'm sure you..";
	gotoxy(30, 36); cout << "have some questions that you may be curious about. Do ask away.`";
	gotoxy(30, 39); system("pause");


	system("cls");

	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";
	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";
	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

	SetConsoleTextAttribute(h, 12);
	gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
	SetConsoleTextAttribute(h, 11);
	gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
	gotoxy(125, 15); cout << "þ " << places[1] << " þ";
	gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
	gotoxy(125, 20); cout << "1. " << "---------";
	gotoxy(125, 21); cout << "2. " << "---------";

	SetConsoleTextAttribute(h, 15);
	gotoxy(30, 8); cout << "You sipped your tea, liking it even though it had a strong earthy taste.";
	gotoxy(30, 10); cout << "`Okay..` You trail off, thinking of questions that you can ask the amphibian.";
	gotoxy(30, 12); cout << "[1] `Do you know how I ended up here?`";
	gotoxy(30, 13); cin >> c2;

	do {
		if (c2 == '1') {
			gotoxy(30, 15); cout << "`I brought you here.` Froggit answers, `I found you lying down by the river, soaking wet.`";
			gotoxy(30, 16); cout << "`I changed your clothes of course.` He adds, nodding as he took a sip of his tea once again.";
			gotoxy(30, 17); cout << "`What's with that look? I used to change his highness` attire, you no different from him.'";
			gotoxy(30, 18); cout << "Froggit softly chuckles, mumbling, `Now I miss his majesty...`";
			gotoxy(30, 39); system("pause");
			break;
		}

		else if (c2 != '1') {
			gotoxy(30, 38); cout << "Please choose from the choices available.";
			gotoxy(30, 13); cin >> c2;
		}

	} while (c2 != '1');


	gotoxy(30, 21); cout << "Froggit hums, `That`s one. Anything else?`";
	gotoxy(30, 22); cout << "[2] `Do you know a way back to my world? Back to earth?`";
	gotoxy(30, 23); cin >> c2;

	do {

		if (c2 == '2') {
			gotoxy(30, 24); cout << "`Earth...`";
			gotoxy(30, 25); cout << "`I used to be from there, but.. ever since I was relieved of my duty as a knight,";
			gotoxy(30, 26); cout << "Now, I'm just a lowly amphibian who stays in the middle of the jungle.'";
			gotoxy(30, 39); system("pause");
			break;
		}

		else if (c2 != '2') {
			gotoxy(30, 38); cout << "Please choose from the choices available.";
			gotoxy(30, 23); cin >> c2;
		}

	} while (c2 != '2');

	gotoxy(30, 28); cout << "`Hmm..` Froggits finishes his tea, putting down his cup on the table as he looks at you,";
	gotoxy(30, 29); cout << "`Whaddaya say you take this frog with you on one last trip to castle?";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 31); cout << "You look at him, Froggit has helped you back to safety, and you don`t know much about the place.";
	gotoxy(30, 32); cout << "You can bring him with you, or stay independent and find your own way home.";
	gotoxy(30, 39); system("pause");

	gotoxy(30, 34); cout << "[1] Bring Froggit with you on the way home.";
	gotoxy(30, 35); cout << "[2] Embark on the journey home alone.";
	gotoxy(30, 36); cin >> c3;


	// "[1] Bring Froggit with you on the way home.";


	if (c3 == '1') {

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[1] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1. " << "---------";
		gotoxy(125, 21); cout << "2. " << "---------";

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "Morning comes, and you awoke from your slumber. You look around and natural light filled the cave.";
		gotoxy(30, 9); cout << "You remember the events of yesterday and stood up, stretching. Froggit awaits you in the forest.";
		gotoxy(30, 10); cout << "You open the door, walking out as the morning sun shines down your skin. It didn't feel too hot.";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 12); cout << "`Ah, you're awake.` You see Froggit leaning on one of the trees as he smiled at you, ";
		gotoxy(30, 13); cout << "`Ready to go?` He asks, stretching out his long, slender green arms.";
		gotoxy(30, 14); cout << "You softly smile at him, nodding. `Ready as I'll ever be.` You say, ready to embark.";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 16); cout << "Froggit nods, `I like your spirit " << yn << "!` You have what it takes to be an adventurer.";
		gotoxy(30, 17); cout << "The amphibian encourages you, walking on ahead.";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 19); cout << "The warm, fuzzy feeling when you're with frog still hasn't left you.";
		gotoxy(30, 20); cout << "`Mhm!` You respond in agreement, running off to catch up with Froggit.";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 22); cout << "`There are many dangers that surround the jungles of Khan'la. Ever since his majesty's passing,";
		gotoxy(30, 23); cout << "everything went haywire, bonkers if you will. It was so out of control that peace was gone.`";
		gotoxy(30, 24); cout << "Froggit started speaking, and you listen intently to him.";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 26); cout << "`The king had an heir, but they chose a different path away from royalty. Living on their own.`";
		gotoxy(30, 27); cout << "`Tell me, have you ever wanted the feeling of independence?";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 29); cout << "You were about to speak when you hear the sounds of rushing water up ahead.";
		gotoxy(30, 30); cout << "Froggit goes on ahead of you, looking towards the water.";
		gotoxy(30, 31); cout << "`What was that?` You ask, but whe you look down, you can see it clearly.";
		gotoxy(30, 32); cout << "Crocodiles. You thought, but Froggit called them something else, `Archosaurians. Mindless creatures.";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 34); cout << "Froggit looks towards you, `Lead the way, " << yn << ".";
		gotoxy(30, 39); system("pause");

		gotoxy(30, 36); cout << "[1] Cross the Bridge.";
		gotoxy(30, 37); cout << "[2] Hop on the rocks.";
		gotoxy(30, 38); cin >> c4;
		gotoxy(30, 39); system("pause");

		do {
			if (c4 == '1') {
				system("cls");
				gotoxy(30, 10); cout << "You managed to cross the worn out bridge, Froggit waiting at the other side.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c4 == '2') {
				system("cls");
				gotoxy(30, 10); cout << "You slipped on one of the rocks, almost falling down your death but Froggit ";
				gotoxy(30, 11); cout << "managed to catch you before you did. Sweat dripped down your face, as you were shaking.";
				HP = (HP - 1);
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c4 != '1', '2') {
				gotoxy(30, 38); cout << "Please choose from the choices available.";
				gotoxy(30, 12); cin >> c4;
			}
		} while (c4 != '2');
		//Event 2:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[3] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1. " << "---------";
		gotoxy(125, 21); cout << "2. " << "---------";


		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "After the lake, froggit leads the way.";
		gotoxy(30, 9); cout << "There was a marsh path that stopped your tracks. It was unsual, to say the least.";
		gotoxy(30, 10); cout << "`Be careful.` Froggit says, `We don't know what lurks here.'";
		gotoxy(30, 13); cout << "You nod at before continue to walk, a bad feeling welling up.";
		gotoxy(30, 15); cout << "[1] Walk carefully.";
		gotoxy(30, 16); cout << "[2] Find a different path.";
		gotoxy(30, 17); cin >> c5;
		gotoxy(30, 39); system("pause");

		do {
			if (c5 == '1') {
				gotoxy(30, 20); cout << "Walking carefully, the ground opened up below you, causing you to fall down.";
				gotoxy(30, 21); cout << "You fell down with a thud, feeling the air leave your lungs as you fell unconcious.";
				HP = (HP - 2);
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c5 == '2') {
				gotoxy(30, 20); cout << "Walking carefully, the ground opened up below you, causing you to fall down.";
				gotoxy(30, 21); cout << "You fell down with a thud, feeling the air leave your lungs as you fell unconcious.";
				HP = (HP - 2);
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c5 != '1', '2') {
				gotoxy(30, 20); cout << "Please choose from the choices available.";
				gotoxy(30, 17); cin >> c5;
			}
		} while (c5 != '2');

		//event 3:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[4] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];

		SetConsoleTextAttribute(h, 15);

		gotoxy(30, 8); cout << "You wake up after a few moments, still dazed but you can stand up.";
		gotoxy(30, 9); cout << "You see Froggit helping you up, `Oh, thank the gods, you're awake.'";
		gotoxy(30, 12); cout << "You nod, looking around the place. `We need to find some way out.`";
		gotoxy(30, 13); cout << "You say, Froggit agreeing in return.";


		gotoxy(30, 39); system("pause");

		gotoxy(30, 15); cout << "You see a few mutant amphibians in the distant, ";
		gotoxy(30, 16); cout << "[1] Thread carefully along with Froggit.";
		gotoxy(30, 17); cout << "[2] Run until you reach the other side of the underground cave.";
		gotoxy(30, 18); cin >> c6;

		gotoxy(30, 39); system("pause");

		do {
			if (c6 == '1') {
				gotoxy(30, 20); cout << "`Threading carefully is the best course of action.` Froggit states.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c6 == '2') {
				gotoxy(30, 20); cout << "You nearly got caught by the horde of the mutant frog.";
				gotoxy(30, 21); cout << "Froggit grabs your wrist as he pulls out of the cave, ";
				gotoxy(30, 22); cout << "`Are you okay?` He asks, but all you can do is nod.";
				HP = HP - 2;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c6 != '1', '2') {
				gotoxy(30, 20); cout << "Please choose from the choices available.";
				gotoxy(30, 18); cin >> c6;
			}
		} while (c6 != '3');

		//event 4:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[5] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "After exiting the underground cave, you've continued your journey to the marsh land.";
		gotoxy(30, 9); cout << "And the trees just got bigger and bigger while you continued to the deepest forest.";
		gotoxy(30, 13); cout << "You see a fallen Giant taro leaf and a big branch stick at the ground.";
		gotoxy(30, 14); cout << "And you put the leaf at your back and hold the stick as a walking stick.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 16); cout << "Acquired a " << items[3] << "!";
		gotoxy(30, 17); cout << "Acquired a " << items[2] << "!";

		gotoxy(30, 19); cout << "þ Added to Inventory þ";

		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[0] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];
		gotoxy(125, 21); cout << "2." << items[2];
		gotoxy(125, 22); cout << "3." << items[3];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 39); system("pause");

		gotoxy(30, 22); cout << "And while travelling you saw many dead and infected arachnid as you continue carefully and quietly.";
		gotoxy(30, 23); cout << "Suddenly you heard a sound coming from the back of the tree that you and Froggit are passing by.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 25); cout << "A giant sleeping infected arachnid spider.";
		gotoxy(30, 26); cout << "[1] Walk more carefully and quietly.";
		gotoxy(30, 27); cout << "[2] Run fast to avoid the arachnid";
		gotoxy(30, 28); cin >> c7;

		do {
			if (c7 == '1') {
				gotoxy(30, 31); cout << "You've successfully passed the infected arachnid.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c7 = '2') {
				gotoxy(30, 31); cout << "The arachnid almost got you but Froggit gave you a hand.";
				HP = HP - 1;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c7 != '1', '2') {
				gotoxy(30, 31); cout << "Please choose from the choices available.";
				gotoxy(30, 28); cin >> c8;
			}
		} while (c7 != '3');

		//event 5:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[6] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];
		gotoxy(125, 21); cout << "2." << items[2];
		gotoxy(125, 22); cout << "3." << items[3];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "You reached the home of the trolls it is a dark place even the light from the sun cannot enter.";
		gotoxy(30, 9); cout << "Because of the giant trees in the area you got quickly seen by the trolls.";
		gotoxy(30, 10); cout << "Because of the bright lamp you are carrying the trolls said they will only let you pass.";
		gotoxy(30, 11); cout << "If you traded them your bright lamp";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 13); cout << "[1] Give them the lamp and peacefully continue your journey";
		gotoxy(30, 14); cout << "[2] Run and dont give them the lamp";
		gotoxy(30, 15); cin >> c8;

		do {
			if (c8 == '1') {
				gotoxy(30, 17); cout << "The trolls let you passed by giving them your lamp.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c8 = '2') {
				gotoxy(30, 17); cout << "The trolls still rob you the lamp and you get hurt ( -1 HP).";
				HP = HP - 1;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c8 != '1', '2') {
				gotoxy(30, 17); cout << "Please choose from the choices available.";
				gotoxy(30, 24); cin >> c9;
			}
		} while (c8 != '3');

		//event 6:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[6] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[2];
		gotoxy(125, 21); cout << "2." << items[3];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "Froggit went on ahead, saying that you meet him in the castle.";
		gotoxy(30, 9); cout << "You nod, agreeing that you'll meet him there. He skips off, looking away from you.";
		gotoxy(30, 10); cout << "There was a drop of rain that hit your shirt, causing it to sizzle and hurt your skin.";
		gotoxy(30, 13); cout << "You look at it, pained. Then realize that the rain burned through your shirt.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 15); cout << "It started raining, as you immediately took cover.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 17); cout << "[1] Use your " << items[3] << " as cover for the rain.";
		gotoxy(30, 18); cout << "[2] Run off to the castle walls.";
		gotoxy(30, 19); cin >> c9;
		gotoxy(30, 39); system("pause");

		do {
			if (c9 == '1') {
				gotoxy(30, 23); cout << "The acid rain stop when you got crossed from the giant trees.";
				gotoxy(30, 39); system("pause");
				ending();
			}

			else if (c9 = '2') {
				gotoxy(30, 23); cout << "The a tiny acid rain drop onto your skin and burn it and you quickly used the leaf ( -2 HP).";
				HP = HP - 2;
				gotoxy(30, 39); system("pause");
				ending();
			}
			else if (c9 != '1', '2') {
				gotoxy(30, 23); cout << "Please choose from the choices available.";
				gotoxy(30, 19); cin >> c9;
			}
		} while (c9 != '2');
	}

	//==============================================================================================================================================
		// "[2] Embark on the journey home alone."


	else if (c3 == '2'); {

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[1] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1. " << "---------";
		gotoxy(125, 21); cout << "2. " << "---------";

		SetConsoleTextAttribute(h, 15);

		gotoxy(30, 8); cout << "Froggit gave back to you your item as you embark your journey alone.";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[2] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];
		gotoxy(125, 21); cout << "2." << items[1];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 10); cout << "You see a lake that is a home of crocodiles, they look extremely hungry.";
		gotoxy(30, 11); cout << "You look around and you saw a bridge and a pile of rocks that can be hopped on.";
		gotoxy(30, 12); cout << "[1] Cross the bridge.";
		gotoxy(30, 13); cout << "[2] Hop on the rocks";
		gotoxy(30, 14); cin >> c4;
		gotoxy(30, 39); system("pause");

		do {
			if (c4 == '1') {
				gotoxy(30, 18); cout << "Succesfully crossed the bridge. ";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c4 == '2') {
				gotoxy(30, 18); cout << "Nearly fall into the lake but manage to crossed. ( -1 HP)";
				HP = HP - 1;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c4 != '1', '2') {
				gotoxy(30, 9); cout << "Please choose from the choices available.";
				gotoxy(30, 14); cin >> c4;
			}
		} while (c4 != '3');

		//Event 2:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[3] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];
		gotoxy(125, 21); cout << "2." << items[1];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "As you continue your to the marsh path there is a big sink hole in the road.";
		gotoxy(30, 9); cout << "And the side of the path is a extension of the lake.";
		gotoxy(30, 10); cout << "that might be filled with hungry crocodiles.";
		gotoxy(30, 13); cout << "But there is small gap on the sink hole that can be pass by if walk carefully.";
		gotoxy(30, 15); cout << "[1] Walk carefully at the gap.";
		gotoxy(30, 16); cout << "[2] Avoid and go back.";
		gotoxy(30, 17); cin >> c5;
		gotoxy(30, 39); system("pause");

		do {
			if (c5 == '1') {
				gotoxy(30, 20); cout << "As much as you tried to avoid it, you still fell down, losing the sword.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c5 == '2') {
				gotoxy(30, 20); cout << "You fell down the sinkhole, losing the sword in the process.";
				HP = HP - 2;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c5 != '1', '2') {
				gotoxy(30, 20); cout << "Please choose from the choices available.";
				gotoxy(30, 17); cin >> c5;
			}
		} while (c5 != '2');

		//event 2:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[4] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];

		SetConsoleTextAttribute(h, 15);

		gotoxy(30, 8); cout << "You walked into the passage of the underground cave and you.";
		gotoxy(30, 9); cout << "Saw some mutant frog that seems hostile towards you.";
		gotoxy(30, 12); cout << "But they are only at the entrance of the passage.";
		gotoxy(30, 13); cout << "And seems frightened in a bright light.";


		gotoxy(30, 39); system("pause");

		gotoxy(30, 15); cout << "What would you do to get pass the underground cave?";
		gotoxy(30, 16); cout << "[1] Used the light to scared them from the light.";
		gotoxy(30, 17); cout << "[2] Run until you reach the other side of the underground cave.";
		gotoxy(30, 18); cin >> c6;

		gotoxy(30, 39); system("pause");

		do {
			if (c6 == '1') {
				gotoxy(30, 20); cout << "You've reached the end of the underground cave.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c6 == '2') {
				gotoxy(30, 20); cout << "You nearly got caught by the horde of the mutant frog.";
				HP = HP - 2;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c6 != '1', '2') {
				gotoxy(30, 20); cout << "Please choose from the choices available.";
				gotoxy(30, 18); cin >> c6;
			}
		} while (c6 != '3');

		//event 4:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[5] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "After exiting the underground cave, you've continue your journey to the marsh land.";
		gotoxy(30, 9); cout << "And the trees just got bigger and bigger while you continued to the deepest forest.";
		gotoxy(30, 13); cout << "You saw a fallen Giant taro leaf and a big branch stick at the ground.";
		gotoxy(30, 14); cout << "And you put the leaf at your back and hold the stick as a walking stick.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 16); cout << "Acquired a " << items[3] << "!";
		gotoxy(30, 17); cout << "Acquired a " << items[2] << "!";

		gotoxy(30, 19); cout << "þ Added to Inventory þ";

		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[0] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];
		gotoxy(125, 21); cout << "2." << items[2];
		gotoxy(125, 22); cout << "3." << items[3];

		gotoxy(30, 39); system("pause");

		gotoxy(30, 22); cout << "And while travelling you saw many dead and infected arachnid as you continue carefully and quietly.";
		gotoxy(30, 23); cout << "Suddenly you heard a sound coming from the back of the tree that you will passing by.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 25); cout << "A giant sleeping infected arachnid spider.";
		gotoxy(30, 26); cout << "[1] Walk more carefully and quietly.";
		gotoxy(30, 27); cout << "[2] Run fast to avoid the arachnid";
		gotoxy(30, 28); cin >> c7;

		do {
			if (c7 == '1') {
				gotoxy(30, 31); cout << "You've successfully passed the infected arachnid.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c7 = '2') {
				gotoxy(30, 31); cout << "You nearly got beaten by the infected arachnid lucky it got distracted ( -1 HP).";
				HP = HP - 1;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c7 != '1', '2') {
				gotoxy(30, 31); cout << "Please choose from the choices available.";
				gotoxy(30, 28); cin >> c7;
			}
		} while (c7 != '3');

		//event 5:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[6] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[0];
		gotoxy(125, 21); cout << "2." << items[2];
		gotoxy(125, 22); cout << "3." << items[3];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "You reached the home of the trolls it is a dark place even the light from the sun cannot enter.";
		gotoxy(30, 9); cout << "Because of the giant trees in the area you got quickly seen by the trolls.";
		gotoxy(30, 10); cout << "Because of the bright lamp you are carrying the trolls said they will only let you pass.";
		gotoxy(30, 11); cout << "If you traded them your bright lamp";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 13); cout << "[1] Give them the lamp and peacefully continue your journey";
		gotoxy(30, 14); cout << "[2] Run and dont give them the lamp";
		gotoxy(30, 15); cin >> c8;

		do {
			if (c8 == '1') {
				gotoxy(30, 17); cout << "The trolls let you passed by giving them your lamp.";
				gotoxy(30, 39); system("pause");
				break;
			}

			else if (c8 = '2') {
				gotoxy(30, 17); cout << "The trolls still rob you the lamp and you get hurt ( -1 HP).";
				HP = HP - 1;
				gotoxy(30, 39); system("pause");
				break;
			}
			else if (c8 != '1', '2') {
				gotoxy(30, 17); cout << "Please choose from the choices available.";
				gotoxy(30, 24); cin >> c8;
			}
		} while (c8 != '3');

		//event 6:

		system("cls");

		SetConsoleTextAttribute(h, 2);
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";
		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";
		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";
		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";


		SetConsoleTextAttribute(h, 12);
		gotoxy(125, 12); cout << "þþþ HP:" << HP << " þþþ";
		SetConsoleTextAttribute(h, 11);
		gotoxy(125, 14); cout << "þþþþþþþ :Current Location: þþþþþþþþ";
		gotoxy(125, 15); cout << "þ " << places[6] << " þ";
		gotoxy(125, 18); cout << "þþþþþþþþþþ :ON HAND: þþþþþþþþþþ";
		gotoxy(125, 20); cout << "1." << items[2];
		gotoxy(125, 21); cout << "2." << items[3];

		SetConsoleTextAttribute(h, 15);
		gotoxy(30, 8); cout << "You got tired by the long journey you near at your limit and suddenly.";
		gotoxy(30, 9); cout << "There is a small drop of green water from the sky and when it touch you tshirt.";
		gotoxy(30, 10); cout << "It melted, nearly touching your skin but when you hide at the side of the big tree.";
		gotoxy(30, 13); cout << "You noticed that it not melting the leaf of the trees and you got the the biggest leaf.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 15); cout << "The giant taro leaf at your back.";

		gotoxy(30, 39); system("pause");

		gotoxy(30, 17); cout << "[1] Used the leaf to get cover from the acid rain.";
		gotoxy(30, 18); cout << "[2] Dont mind the acid rain it might not hurt you.";
		gotoxy(30, 19); cin >> c9;
		gotoxy(30, 39); system("pause");

		do {
			if (c9 == '1') {
				gotoxy(30, 23); cout << "The acid rain stop when you got crossed from the giant trees.";
				gotoxy(30, 39); system("pause");
				ending();
			}

			else if (c9 = '2') {
				system("cls");
				gotoxy(30, 23); cout << "The a tiny acid rain drop onto your skin and burn it and you quickly used the leaf ( -2 HP).";
				HP = HP - 2;
				gotoxy(30, 39); system("pause");
				ending();
			}

			else if (c9 != '2') {
				gotoxy(30, 23); cout << "Please choose from the choices available.";
				gotoxy(30, 19); cin >> c9;
			}
		} while (c9 != '2');
	}
}





void aboutus() {
	void mainmenu();

	system("cls"); // Clears out the console interface

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";

	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";

	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

	SetConsoleTextAttribute(h, 15);
	gotoxy(58, 16);cout << "The Adventures of Froggit the Frog";
	gotoxy(62, 17);cout << "A text based Adventure Game";
	gotoxy(68, 20);cout << "Developed by:";
	gotoxy(64, 24);cout << "** Developertricism **";
	gotoxy(65, 27);cout << "Gloria, Christina";
	gotoxy(64, 28);cout << "Hermocilla, Ceeline";
	gotoxy(63, 29);cout << "Martin, Kevin Gabriel";
	gotoxy(67, 30);cout << "BSIT 1 - 2";
	gotoxy(35, 35);system("pause");

	mainmenu();
}

void instructions() {
	void mainmenu();

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	SetConsoleTextAttribute(h, 2);
	gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ"; //Top Border

	gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
	gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
	gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
	gotoxy(28, 38); cout << "þ";

	gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
	gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
	gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
	gotoxy(118, 38); cout << "þ";

	gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ"; //Bottom Border


	SetConsoleTextAttribute(h, 15);
	gotoxy(65, 16); cout << "Instructions!";
	gotoxy(33, 18); cout << "The game is best played in fullscreen, do press F11! when you return to the menu";

	gotoxy(40, 21); cout << "To progress in the game, you need to choose your choices carefully.";
	gotoxy(39, 22); cout << "There is no right or wrong yet it all falls down to a matter of luck.";
	gotoxy(63, 26); cout << "Enjoy the game! :)";
	gotoxy(35, 35); system("pause");
	mainmenu();

}
void mainmenu()

{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char menuchoice;

	do {

		system("cls");
		SetConsoleTextAttribute(h, 2);//10		 //20	   /30		//40	   //50		 //60													
		gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

		gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
		gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
		gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
		gotoxy(28, 38); cout << "þ";

		gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
		gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
		gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
		gotoxy(118, 38); cout << "þ";

		gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

		SetConsoleTextAttribute(h, 15);
		gotoxy(70, 16); cout << "Welcome to";
		gotoxy(58, 17); cout << "The Adventures of Froggit the Frog!";
		gotoxy(43, 22); cout << "[1] Play!";
		gotoxy(43, 23); cout << "[2] Instructions:";
		gotoxy(43, 24); cout << "[3] About the Developers:";
		gotoxy(43, 25); cout << "[4] Exit:";
		gotoxy(43, 26); cout << "Please enter your choice: ";

		cin >> menuchoice;

		if (menuchoice == '1') {

			mainstory();
		}

		else if (menuchoice == '2') {

			instructions();
		}

		else if (menuchoice == '3') {

			aboutus();
		}

		else if (menuchoice == '4') {
			system("cls");

			SetConsoleTextAttribute(h, 2);
			gotoxy(28, 6); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

			gotoxy(28, 8); cout << "þ"; gotoxy(28, 10); cout << "þ"; gotoxy(28, 12); cout << "þ"; gotoxy(28, 14); cout << "þ"; gotoxy(28, 16); cout << "þ";
			gotoxy(28, 18); cout << "þ"; gotoxy(28, 20); cout << "þ"; gotoxy(28, 22); cout << "þ"; gotoxy(28, 24); cout << "þ"; gotoxy(28, 26); cout << "þ";
			gotoxy(28, 28); cout << "þ"; gotoxy(28, 30); cout << "þ"; gotoxy(28, 32); cout << "þ"; gotoxy(28, 34); cout << "þ"; gotoxy(28, 36); cout << "þ";
			gotoxy(28, 38); cout << "þ";

			gotoxy(118, 8); cout << "þ"; gotoxy(118, 10); cout << "þ"; gotoxy(118, 12); cout << "þ"; gotoxy(118, 14); cout << "þ"; gotoxy(118, 16); cout << "þ";
			gotoxy(118, 18); cout << "þ"; gotoxy(118, 20); cout << "þ"; gotoxy(118, 22); cout << "þ"; gotoxy(118, 24); cout << "þ"; gotoxy(118, 26); cout << "þ";
			gotoxy(118, 28); cout << "þ"; gotoxy(118, 30); cout << "þ"; gotoxy(118, 32); cout << "þ"; gotoxy(118, 34); cout << "þ"; gotoxy(118, 36); cout << "þ";
			gotoxy(118, 38); cout << "þ";

			gotoxy(28, 40); cout << "þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ";

			SetConsoleTextAttribute(h, 9);
			gotoxy(60, 20); cout << "THANK YOU FOR PLAYING!";
			gotoxy(58, 21); cout << "WE HOPE TO SEE YOU AGAIN SOON!";
			break;

		}

		else if (menuchoice != '4')
		{
			gotoxy(35, 34);cout << " Invalid Option!";
			gotoxy(35, 35);cout << ">";
			system("pause");
		}

	} while (menuchoice != '4');

}

int main()
{
	mainmenu();

}