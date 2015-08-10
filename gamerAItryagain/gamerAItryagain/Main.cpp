/**
Testing GAIA -- Gamer AI Automation...
	... once again
	10/02/2014
@Author: Robert (Grovewalker) Naiilo
Note to self... find a different name for program.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/*
	\									/
	 START BASIC, BASIC WORKING FIRST!!!
	/									\
*/

/*
Note:
Sentience: Know Self, Know Other, Feel Instinctively, Think Intelligently, Affect and Respond to the World, Remember
*/

struct CoreData{
	/*
	Thought, Memory, Emotion
	GAIA's Core
	*/
	struct Option{};
	Option optionList;
}

struct Entity{
	/*
	Defines other acting objects.
	*/
	enum fof {enemy, ally, neutral};	//Friend or Foe designation
	int priority;						//Priority of Focus, lower number higher priority
}

struct GameData{
	/*
	This will hold data relevent to each game/character.
	*/
	Entity* allyList;
	Entity* enemyList;

	int myHealth, maxHealth;
	bool hasMana;
	int myMana, maxMana;
	bool hasFatigue;
	int myFatigue, maxFatigue;
}

void main(void){
	/*
	What this needs to do:
	--Needs to Sense(See, Hear?)
	  --Basic->Screencap and modify
	  --After->Try to use the screen itself to view from
	--Needs to Act
	  --Can only use keyboard and mouse actions for game-input
	--Needs to Remember															| Storing Memory is Easy, retrieving memory intelligently is going to be harder.
	  --Almost the easiest, link a structnet together to form its memory.		| Need to 'tag' items somehow for automatic retrieval.

	Oh, and the program needs to 'leak' as little as possible, everything contained,
	    nothing public. Needs to bypass hackshields by not hacking, and acting human.
		Might also need to be able to use and defend against 'reflection' -> http://docs.oracle.com/javase/tutorial/reflect/index.html
	*/
	bool control = false;

	//Boot AI
	CoreData* cdata = new CoreData();	//Will probably want to load CoreData as opposed to create a new one later.
	GameData* gdata = new GameData();

	for(int i=0;i<10;i){	//Setting up 'infinite' loop, rather use a while or until loop
		//Look at situation, update game data
		Look(gdata);	//pointer, so pass the pointer address and look looks at the same data loc
		//Limit options to physically possible
			//Put in with navigation
		//Self-Evaluate
		if((gdata.myHealth*2)<=gdata.maxHealth){	//Take *# as 1/#, ex. *2 repersents 1/2 health
			//Heal option if available, retreat at lower health if not
		}
	}	
}

void Look(GameData* data){ //Change para and return as needed
	/*
	Takes screen input and makes sense of it.

	1. Needs to read graphical output as input (somehow~)
		1a. java.awt.(something)? >.> in c++ form of course
	2. Needs to process graphics into definable objects (gui, pathing, interactions, players, enemies, etc)
		2a. Maybe use polygons and polylines to help define?
		2b. Needs to somehow compare pixel brightness, color, and movement to define object from background.
		2c. A* /Multithreaded A* focus point perception MAFPP?
	*/
	
	/*
	Things to look for:

	0. Self-Evaluate

	1. Terrain/Pathing
	2. Danger/Enemies -- Organize list by priority{include threat, distance, agro, etc)
	3. Help/Allies
	4. Need/In-Danger
	*/
}