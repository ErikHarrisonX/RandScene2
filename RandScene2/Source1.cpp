#include <iostream>
#include <string>

using namespace std;



void DisplayIntro() {
	cout << "\n\t\tHello, Welcome to the Random Scenario Generator.\n\n";
	cout << "\nThe Rules are that you will be given a random scenario with options to solve it.\n";
	cout << "\nYour job is to use what you think is the best option.\n\n";
}

void RandomScenarioGen() {
	int Scene = 0;
	int chance = rand() % 100 + 1;
	int chance1 = rand() % 100 + 1;
	int chance2 = rand() % 100 + 1;
	int chance3 = rand() % 100 + 1;
	int chance4 = rand() % 100 + 1;
	string Choice;
	string Choice1;
	string Choice2;
	string Choice3;
	string Choice4;
	string Choice5;
	string Choice6;
	string placement;
	Scene = rand() % 3 + 1;


	//SPIDER
	if (Scene == 1) {
		cout << "\nYour random Scenario # is " << Scene << ": Survive the Giant Spider.\n";
		cout << "\nYou find yourself trapped in a long corridor with doors on the sides.\n";
		cout << "\nYou are wondering how you got there, until you hear something at the end of the hall.\n Noticing a flashlight at your feet you pick it up and shine it towards the noise.\n";
		cout << "\nYour stomach then drops and you see rushing towards you is a giant spider, it seems that its too large for the hallway.";
		cout << "\nYou can either \nTry one of the doors.\n(1 Left Door \n2) Right Door \n3)Run the other way and hope you find something, a weapon hopefully.\n";
		cout << "\nWhat is your choice? (1, 2, or 3)\n";
		cin >> Choice;
		if (Choice == "1") {
			cout << "\nYou try the door on the left ";
			system("PAUSE");
			if (chance < 50) {
				cout << "\nYou try the door and it's locked.";
				cout << "\nBefore you keep going in the darkend hall the spider caught up to you and ate you.";
				cout << "\n\n\t\t*******GAME OVER********";
				exit(0);
			} if (chance > 50) {
				cout << "\nYou try the door and thankfully its unlocked";
				cout << "\nYou go through the door and enter a small room.\nIn the room there's a table with a handgun.";
				cout << "\nYou grab the handgun and hear the spider right outside the door.\nIt then breaks the door down and tries to get you.";
				cout << "\nAs it's thrashing around you try to aim for its eyes.";
			}
			if (50 < chance1 > 20) {
				cout << "\nYou shoot the spider 8 times and hit 3 of its eyes.\nIt recoils and leaves back the way it came.";
			} if (chance1 < 20) {
				cout << "\nYou shoot the spider 8 times and don't hit any of it's eyes.\nIt shudders from the pain but doesnt recoil and ends up grabbing your leg and eating you.";
				exit(0);
			}if (chance1 > 50) {
				cout << "\nYou shoot the spider 8 times and manage to hit all of its eyes.\nIt recoils and staggers back into the hall and goes back the way it came very slowly.";
			}
		} if (Choice == "2") {
			cout << "You try the door on the left ";
			system("PAUSE");
			if (chance < 50) {
				cout << "You try the door and it's locked.";
				cout << "Before you keep going in the darkend hall the spider caught up to you and ate you.";
				cout << "\n\n\t\t*******GAME OVER********";
				exit(0);
			} if (chance > 50) {
				cout << "You try the door and thankfully its unlocked";
				cout << "You go through the door and enter a small room.\nIn the room there's a table with a handgun.";
				cout << "\nYou grab the shotgun and hear the spider right outside the door.\nIt then breaks the door down and tries to get you.";
			} system("PAUSE");
			if (50 > chance1 > 20) {
				cout << "\nYou shoot the spider 8 times and hit 3 of its eyes.\nIt recoils and leaves back the way it came.";
			} if (chance1 < 20) {
				cout << "\nYou shoot the spider 8 times and don't hit any of it's eyes.\nIt shudders from the pain but doesnt recoil and ends up grabbing your leg and eating you.";
				exit(0);
			}if (chance1 > 50) {
				cout << "\nYou shoot the spider 8 times and manage to hit all of its eyes.\nIt recoils and staggers back into the hall and goes back the way it came very slowly.";
			}
			cout << "\n\nYou have a feeling that you won't be able to leave this place until you kill that Spider";
			cout << "\nNow that the spider is gone you can look through the other various rooms.";
		}if (Choice == "3") {
			cout << "\nYou keep going away from the spider.\nAs you keep running you hope to find some sort of weapon";
			if (chance2 > 80) {
				cout << "\nAs you are running from the spider you managed to find a rocket launcher (I don't know why there's one but it's here).";
				cout << "\nYou shoot the spider with the rocket launcher and it explodes into pieces.";
				cout << "\nYou hear something with a loud click and the lights all turn on.\n You notice that at the end of the corridor where the spider came from there is a door.";
				cout << "You then exit through the door and leave the building that you were in.";
				cout << "\n\n\t\t***** YOU WIN!! ********";
			} if (chance2 < 80) {
				cout << "\nAs you are running away from the spider you manage to trip on a floorboard that was sticking out.";
				cout << "\nThe spider immediately catches up to you and eats you.";
				cout << "\n\n\t\t****** GAME OVER ********";
			}
		}
	}



	//QUEBEC
	else if (Scene == 2) {
		int supplies = 0;
		cout << "\nYour random Scenario # is " << Scene << ": Survive your the cold snowy peak of Quebec for two weeks.";
		cout << "\n\nYou are holed up in the Wilderness of Quebec.\nYou hear on the radio that within a couple of weeks a category 5 (very bad) snow storm will hit.";
		cout << "\nYou need to scavenge all the abandond houses and cabins for supplies to survive.\nYou explore the neighboring houses and find enough to last for 4 days, but you need enough resources for 3 weeks";
		cout << "\n After going through all the houses and bringing them to a garage that seems pretty strudy and sleep.\nThe next day as you were exploring, you find a wolf along your path.\nThe wolf doesn't seem to nice, you can either try and run from it or try and fend it off with a lantern you found.";
		cout << "\nWhat do you do? (run, fight)\n";
		cin >> Choice;
		if (Choice == "run") {
			cout << "\n\nYou run back to base and wait for the wolf to lose interest so you wait for 2 hours.";
			cout << "\nYou check outside and see if the wolf is there, it seems to have left.";
			cout << "\nYou make your way going to the further houses to scavenge.\nBecause you had to wait for the wolf to leave you won't have much time to search all the houses.";
			cout << "\nYou scavennge as much as you can from the houses before it gets late.\n";
			cout << "\nYou get back to base to take stock you realize that you have enough food for about a week.";
			supplies + 7;
		}
		else {
			cout << "\nYou fight the wolf off with the flare that you brought along.";
			if (chance > 70) {
				//Scare the wolf
				cout << "\nYou managed to scare off the wolf and it scurries away.";
				cout << "\nYou then are able to search the houses and cottages that were a little farther away.";
				cout << "\nBecause you were able to scare off the wolf you have enough time to search 3 more houses/cottages.";
				cout << "\nSeeing that it's getting late you go back to your safehouse.\nOnce you get back to your safehouse you look and see what you scavenged.";
				cout << "\nIt seems that you got a great amount because of extra time to check more houses.";
				cout << "\nYou now have enough food to last for a week and a half";
				supplies + 10;
			} if (chance < 70) {
				//Scare the wolf but get hurt
				cout << "\nYou try to fight off the wolf but end up getting really hurt.";
				cout << "\nYou still need to look through more houses for supplies or you can go back to base to manage your injuries.\nWhat do you do? (Look, Back)";
				cin >> Choice2;
				if (Choice2 == "Look") {
					cout << "You decide to keep going and look for supplies.\nHowever, you go a little too far to be able to get back to base and end up dieing from injuries.";
					cout << "\n\n\t\t ******** GAME OVER ********";
					exit(0);
				} if (Choice2 == "Back") {
					cout << "\nYou decide that managing your injuries is the more pressing matter.\n You go back to base and apply the neccessary care for the injury.";
					cout << "\nAfter you have managed your injuries you head back out. \nYou don't run into any wolves and make it safely over to the farther houses.";
					cout << "\nBecause you had to manage your injuries you don't have much time to look through all of the houses.";
					cout << "\nYou gather as much as you have and bring it back to take it back to base.\n Once you take stock you realize that you only have enough for about 5 days";
					supplies + 5;
				}
			}
		}
		cout << "\nThe next day you turn on your radio and hear that there is a category 2.5 storm today so visibilty will be bad.\nSure enough you hear that its pretty bad outside.";
		cout << "\nDo you try to go out to scavenge?\n";
		cin >> Choice1;
		if (Choice1 == "yes") {
			cout << "\nYou decide to look for supplies in the last of the houses.";
			cout << "\nYou go out into the storm and try to get to the houses that you were at yesterday.";
			if (chance1 < 30) {
				cout << "\nYou try to get over there, and think that you are going the right way, but you cant see because of the storm. You end up getting incredibly lost and freeze in the snow.";
				cout << "\n\n\t\t******* GAME OVER ******";
				exit(0);
			} if (60 >= chance1 >= 30) {
				cout << "\nYou can barely see in this stupid storm";
				cout << "\nAfter getting a little lost and sidetracked, but you get to the houses.\nYou wont be able to search all of the houses only a few.";
				cout << "\nYou then try to get back to base.";
				if (chance2 > 50) {
					cout << "\nYou think you remember the path and proceed";
					system("PAUSE");
					cout << "You got back to the base.\nYou take stock on what you got and it seems that you got food for 4 more days.";
					supplies + 4;
				}
				else {
					cout << "\nYou think you remember the path and proceed";
					system("PAUSE");
					cout << "\nYou wander and wander and realize that you are completly lost you try and retrace your steps but and up falling off a cliff and break your legs.\nAs you lay there in pain you freeze to death.";
					cout << "\n\n\t\t****** GAME OVER ******";
					exit(0);
				}
			} if (chance1 > 60) {
				cout << "\nYou go out into the storm and you just about remember the path to the houses.\nYou get there very quickly and are able to get through the rest of the abandond houses.";
				cout << "\nYou are able to get back home.\nYou take stock on the supplies you got and you figured out you got an added 8 days worth.";
				supplies + 8;
			}
		}
		else {
			cout << "\nYou decide to not go out and end up using a full days worth of food and supplies.";
			supplies - 1;
			cout << "\nThe next day on the radio you hear it will be clear today, but not for the rest of this week.\nYou see something go past the window and as you look through you see the darn wolf from the first day.";
			cout << "\nDo you go out?(yes, no)";
			cin >> Choice4;
			if (Choice4 == "yes") {
				cout << "You know that the wolf is out there.\n What do you do? (run, fight)";
				if (Choice5 == "fight") {
					cout << "You try to fight the wolf";
					if (60 >= chance4 >= 40) {
						cout << "You just about was able to dodge the wolf and give a good kick to it and it wimpers away, but you get clawed on your arm and it seems to get pretty deep.";
					} if (chance4 > 60) {
						cout << "\nCompletely dodge the wolf as it was lunging at you and gave him a pretty good kick that sends him flying and hit a wall and whimpers away.";
						cout << "\nYou then keep going and find more houses.";
						cout << "\nYou scavenge quite a few.";
						cout << "\nYou get back to base and got 8 days worth of supplies.";
						supplies + 8;

					} if (chance4 < 40) {
						cout << "You try to dodge, but was unable and got hurt really bad.\n As you stumble backwards the wolf gets the killing blow and has a good meal.";
						cout << "\n\n\t\t********** GAME OVER ***********";
						exit(0);
					}
				}
				else {
					cout << "\nYou go back to base and wait for the wolf to lose interest.";
					cout << "\nAfter two hours you then go out of the base and leave to go to the other houses that you know of.";
					cout << "\nYou were able to get over to some houses and gather supplies.";
					cout << "\nYou get back to base and take stock and you got an added 4 days worth.";
					supplies + 4;
				}
			}
			else {
				cout << "You don't go outside have to wait until you get rescued.";
				if (supplies > 14) {
					cout << "As you wait on the 9th day you hear people and see them right outside.\nYou go out and wave to them and they rescue them.";
					cout << "\n\n\t\t******* YOU WIN GAME OVER ********";
				}
				else {
					cout << "You try to wait for rescue, but as you wait you run out of supplies.\nThe rescuers search for you and find your body.";
					cout << "\n\n\t\t******** GAME OVER YOU LOSE **********";
					exit(0);
				}
			}
		}
		cout << "\nThe next day you hear on your radio that its fairly clear, but you also hear that the rest of the week is pretty bad so this might be the last day to go out.\nYou see something go past the window and as you  look you notice that it's the goshdarn wolf from day one.";
		cin >> Choice3;
		if (Choice3 == "yes") {
			cout << "\nYou peek outside and notice that, won't you know it, that goshdarn wolf is there.\nLuckily you found a gun from yesterday from one of the houses.";
			cout << "\nDo you shoot the wolf to scare it?(yes,no)";
			cin >> Choice6;
			if (Choice6 == "yes") {
				cout << "You go outside and the wolf notices you and remembers you.\nAs its snarling at you you aim the gun at it and aim below its front paw.";
				cout << "When the bullet hits the ground the wolf jumps back and runs off.\n";
				cout << "You then search the rest of the houses and come back to base with 8 days of supplies.";
			}
			else {
				cout << "You try to fight the wolf without the weapon.";
				if (60 >= chance4 >= 40) {
					cout << "You just about was able to dodge the wolf and give a good kick to it and it wimpers away, but you get clawed on your arm and it seems to get pretty deep.";
					cout << "You go and scavenge the rest of the abandond houses and end up getting only just 4 days of supplies, because  of your injury.";
					supplies + 4;
				} if (chance4 > 60) {
					cout << "\nCompletely dodge the wolf as it was lunging at you and gave him a pretty good kick that sends him flying and hit a wall and whimpers away.";
					cout << "\nYou then keep going and find more houses.";
					cout << "\nYou see a couple more houses and scavenge quite a few.";
					cout << "\nYou get back to base and got 8 days worth of supplies.";
					supplies + 8;

				} if (chance4 < 40) {
					cout << "\nYou try to dodge, but was unable and got hurt really bad.\n As you stumble backwards the wolf gets the killing blow and has a good meal.";
					cout << "\n\n\t\t********** GAME OVER ***********";
					exit(0);
				}
			}
		}
		else {
			cout << "\nYou decide not to go out today.";
		}
		if (supplies < 14) {
			cout << "You barricade yourself in the garage and fortify the walls and windows and wait for rescue.";
			system("PAUSE");
			cout << "\nClose to the end of 2 weeks you hear people outside.\nYou start making noise take the barricade to the door down.";
			cout << "\nThe rescurers come over and grab you, all of you board the helicopter and leave.";
			cout << "\n\n\t\t*******GAME OVER YOU WIN*******";
		}
		else if (supplies > 14) {
			cout << "\nYou only realize too late that you don't have enough supplies and you end up starving to death.";
			cout << "\nThe rescue find your body and realize that they didn't make it in time.";
			cout << "\n\n\t\t***** YOU LOSE GAME OVER ********";
		}
	}




	//Get through puzzle maze
	if (Scene == 3) {
		string comb;
		string answer;
		string answer1;
		string answer2;
		string answer3;
		string answer4;
		int incorrect = 0;
		cout << "\nThis scenario you have to get through a series of puzzles correctly.";
		cout << "\n\nYou wake up in a white room and an intercom comes on.\nA happy joking voice said, 'Good morning! Wakey Wakey you have been selected to get through this maze.'";
		cout << "\n'Go through the door to start the maze and you will have to solve a couple of these puzzles.'";
		cout << "\n'Oh and do be careful I heard that some of these mazes are very dangerous. heheh'";
		cout << "\nThe intercom shuts off and the door opens";
		//First puzzle(weight puzzle)
		cout << "\n\nYou come across a couple boxes and you see a plaque on the wall to your right.\nIt says 'Find the heavest object here.'";
		cout << "\nYou see a couple of cubes that are made from different material.\nThere is one gold, Iron, Ruby. and styrofoam.";
		cout << "\nYou see a weight plate for one of the cubes.";
		cout << "\nWhat is the heaviest? (Gold, Ruby, Iron, Styrofoam)";
		cout << "\nHint Gold is 4 times that of iron\n";
		cin >> Choice;
		if (Choice == "Gold") {
			system("PAUSE");
			cout << "\nYou chose the right material.\nThe door slides open and the voice says 'Well done getting through the first one! Keep going!'";
		}
		else {
			system("PAUSE");
			cout << "\nThat doesn't seem to be the right placement.\nA trapdoor then opens up underyou and you fall through.";
			cout << "\n'Looks like you didn't even make it past the first puzzle. What a shame'\nYou then splat on to the floor.";
			cout << "\n\n\t\t*****GAME OVER *****";
			exit(0);
		}
		//second puzzle (time puzzle)
		cout << "\n\nYou keep going on and come across another room.";
		cout << "\n'I hope your timing and math is great.'The voice on the intercom said.";
		cout << "\nYou then see a laser grid appear at the middle of the room.\nYou see a plaque on your left and it says 'Sometimes you just need to make a leap of faith or find the pattern.'";
		cout << "\nYou look at the grid for a while and notice that it changes every 6 seconds.";
		cout << "\nThe first cycle that it changes to a cycle that you might squeeze through.\nThe second changes to one where you can walk through one you can walk through.\nThe third cycle was one that was impossible to even squeeze through.";
		cout << "\nYou gauged the cycles of the laser grid for 62 seconds you know you need the sencond cycle.\nHow long do you wait?\n";
		cin >> Choice1;
		if (Choice1 == "16") {
			cout << "You wait for " << Choice1 << " seconds and go through";
			system("PAUSE");
			cout << "\nYou made it through!\nThe door slides open and you proceed.";
			cout << "\n'WOW I can't believe you made it through that! Spectacular!' \n'However, its going to be even more difficult'";
		}
		else {
			cout << "\nYou wait for " << Choice1 << " and go through";
			system("PAUSE");
			cout << "\nAs you go through it changes and you get sliced into pieces.";
			cout << "\nYou hear on the intercom, 'Sigh, I thought that you would have gotten farther than this.'";
			exit(0);
		}


		//third puzzle 
		cout << "\n\nYou make it to the next puzzle.\n'Congrats on the last puzzle that was fantastic. I hope you know history'";
		cout << "\nYou find the plaque on your right.\n'This should be a cinch as long as you have been paying attention in school.'";
		cout << "\nWhat is the syntax symbol used for pointer in C++?";
		cin >> answer;
		if (answer == "*") {
			cout << "\nCorrect moving to next question";
		}
		else {
			cout << "\nINCORRECT.";
			incorrect++;
		}
		cout << "\nWhat is the syntax symbol is used for reference in C++?";
		cin >> answer1;
		if (answer1 == "&") {
			cout << "\nCorrect \nMoving to next question";
		}
		else {
			cout << "\nINCORRECT";
			incorrect++;
		}
		cout << "What does the syntax of cout do?(Display, Writes)";
		cin >> answer2;
		if (answer2 == "Display") {
			cout << "Correct it displays text that you want to show.";
		}
		else {
			cout << "Incorrect";
			incorrect++;
		}
		cout << "What is the syntax to use for functions?[(),{}]";
		cin >> answer3;
		if (answer3 == "()") {
			cout << "Correct";
		}
		else {
			cout << "INCORRECT";
			incorrect++;
		}
		cout << "Are you a good person?(yes, no)";
		cin >> answer4;
		if (answer4 == "Yes") {
			cout << "\nI think you are a good person as well.";
		}
		else {
			cout << "\nWRONG I think that even if you don't think that you are a bad person you can be good if others can see your uniqueness.";
		}if (incorrect > 2) {
			cout << "\nSince you have gotten many of the questions wrong the door does not open and you hear on the intercom 'Oh too bad you got a lot of the questions wrong. Welp make yourself comfortable.'";
		}
		else {
			cout << "The door opens and you head to the next puzzle.\n'Oh well done answering those questions.'";
		}

		//fourth puzzle (puzzle)
		cout << "\n\nYou make it the next puzzle. ''";
		//fifth puzzle
		cout << "\n\nYou make it to the next puzzle\n'Oh how sad it seems that this is the last puzzle.\nI do hope you have been reading the plaques.'";
		cout << "\nThe plaque on the room is in the center.\n 'Do you remember how many plaques there were and what wall they were on?'";
		cout << "\nYou see three buttons that say 'Left, Right, Center'\nYou guess that this has to do with the plaques.";
		cout << "\nWhat is the combonination? (L for left, R for Right, C for Center)";
		if (comb == "RLRRC") {
			cout << "\nThe door opens and you are greeted by a male with orange frizzy hair and thick glasses.\n'Well Done getting throught all those puzzles!' you notice that he was the voice that was on the intercom.";
			cout << "\nHe smiles at you and hands you a card , 'this is a credit card that has an insane amount of money on it, but don't spend it all in one place.'";
			cout << "\n As you leave the facility he guides you out to the station and waves goodbye.";
			cout << "\n\n\t\t********* YOU WIN ^_^ **********";
		}
	}
}