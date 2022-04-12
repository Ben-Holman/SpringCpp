// Ben Holman 4/9/2022
//Last udated: 4/12/2022

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

// CLASSES
class CreateCharacter {
	public:
		std::string CharacterName;
		std::string ClassName; 
		int HP = 5; 
		int Str = 0;
		int Dex = 0;
		int Const = 0;
		int Int = 0;
		int Wis = 0;
		int Char = 0;
		int weaponAttack = 0; 
		int attackStat = weaponAttack + Str; 
		std::string backround;
		std::string specialAbility;
		std::string weaponName;

};

class CreateEnemy {
	public:
		std::string ClassName;
		int HP = 5;
		int Str = 0;
		int Dex = 0;
		int Const = 0;
		int Int = 0;
		int Wis = 0;
		int Char = 0;
		std::string weaponName;
		int weaponAttack = 0;
		int attackStat = weaponAttack + Str;

};

// FUNCTIONS
void chooseClass(CreateCharacter&);
void createSkeleton(CreateEnemy&);
void printCharacter(CreateCharacter&);
void createHighwayMan(CreateEnemy&);
void generateRoom();
void changeStats(CreateCharacter&);
void combat(CreateCharacter&, CreateEnemy&);

//MAIN
int main() {
	using std::cout; 
	using std::cin; 
	using std::endl; 

	CreateCharacter character1,character2,character3,character4;
	//CreateEnemy Skeleton;
	chooseClass(character1); 
	cout << endl;
	changeStats(character1);
	//createSkeleton(Skeleton);
	cout << "Start Game?\n";
	char ans = 'c';
	cin >> ans; 
	if (ans != 'n' && ans != 'N') {
		generateRoom(); 
	}
	return 0; 
}


//PLAYER CREATION FUNCTIONS

void chooseClass(CreateCharacter&) {
	using std::cout; 
	using std::cin;
	using std::endl;
	CreateCharacter character;
	//int partySize = 0; 
	int ClassNum; 
	cout << "Choose Your Character:\n"; 
	cout << "[1] Warrior\n"; 
	cout << "[2] Cleric\n"; 
	cout << "[3] Paladin\n"; 
	cout << "[4] Rogue\n"; 

	cin >> ClassNum; 

		switch (ClassNum) {
		case 1:
			cout << "You Chose Warrior!\n"; 
			character.ClassName = "Warrior";
			character.Str = 11; 
			character.Dex = 7;
			character.Const = 9;
			character.Int = 5;
			character.Wis = 4;
			character.Char = 3;
			character.weaponName = "Short Axe"; 
			character.weaponAttack = 6; 
			//partySize++; 
			cout << "Class Name: " << character.ClassName << endl;
			cout << "Strength: " << character.Str << endl; 
			cout << "Dexterity: " << character.Dex << endl;
			cout << "Constitution: " << character.Const << endl;
			cout << "Intelligence: " << character.Int << endl;
			cout << "Wisdom: " << character.Wis << endl;
			cout << "Charisma: " << character.Char << endl;
			cout << "Weapon Equipped: " << endl <<  character.weaponName << ": " << character.weaponAttack << " Attack" << endl;
			break; 
		case 2:
			cout << "You Chose Cleric!\n";
			character.ClassName = "Cleric";
			character.Str = 4;
			character.Dex = 5;
			character.Const = 6;
			character.Int = 7;
			character.Wis = 7;
			character.Char = 3;
			character.weaponName = "Short Staff";
			character.weaponAttack = 3;
			//partySize++;
			cout << "Class Name: " << character.ClassName << endl;
			cout << "Strength: " << character.Str << endl;
			cout << "Dexterity: " << character.Dex << endl;
			cout << "Constitution: " << character.Const << endl;
			cout << "Intelligence: " << character.Int << endl;
			cout << "Wisdom: " << character.Wis << endl;
			cout << "Charisma: " << character.Char << endl;
			cout << "Weapon Equipped: " << endl << character.weaponName << ": " << character.weaponAttack << " Attack" << endl;
			break;
		case 3:
			cout << "You Chose Paladin!\n";
			character.ClassName = "Paladin";
			character.Str = 8;
			character.Dex = 4;
			character.Const = 8;
			character.Int = 5;
			character.Wis = 4;
			character.Char = 5;
			character.weaponName = "Sword & Shield";
			character.weaponAttack = 5;
			//partySize++;
			cout << "Class Name: " << character.ClassName << endl;
			cout << "Strength: " << character.Str << endl;
			cout << "Dexterity: " << character.Dex << endl;
			cout << "Constitution: " << character.Const << endl;
			cout << "Intelligence: " << character.Int << endl;
			cout << "Wisdom: " << character.Wis << endl;
			cout << "Charisma: " << character.Char << endl;
			cout << "Weapon Equipped: " << endl << character.weaponName << ": " << character.weaponAttack << " Attack" << endl;
			break;
		case 4:
			cout << "You Chose Rogue!\n";
			character.ClassName = "Rogue";
			character.Str = 5;
			character.Dex = 9;
			character.Const = 6;
			character.Int = 6;
			character.Wis = 5;
			character.Char = 2;
			character.weaponName = "Dagger";
			character.weaponAttack = 4;
			//partySize++;
			cout << "Class Name: " << character.ClassName << endl;
			cout << "Strength: " << character.Str << endl;
			cout << "Dexterity: " << character.Dex << endl;
			cout << "Constitution: " << character.Const << endl;
			cout << "Intelligence: " << character.Int << endl;
			cout << "Wisdom: " << character.Wis << endl;
			cout << "Charisma: " << character.Char << endl;
			cout << "Weapon Equipped: " << endl << character.weaponName << ": " << character.weaponAttack << " Attack" << endl;
			break;
		}

	




}

void changeStats(CreateCharacter&) {
	CreateCharacter character;
	using std::cout;
	using std::cin;
	using std::endl;
	int numOfPoints = 10;
	int skillPoints = 0;
	cout << "You have: " << numOfPoints << " to put into your Character's Skills\n";
	cout << "Would you like to add any points to your skills?\n";
	char ans = 'c';
	cin >> ans;
	if (ans != 'n' && ans != 'N') {
		cout << "Which Skills Would you like to change?\n";
		while (numOfPoints > 0) {
			cout << "Enter The Number for the skill you would like to change:\n";
			int skillChangeAnswer = 0;
			cout << "[1] Strength" << endl;
			cout << "[2] Dexterity" << endl;
			cout << "[3] Constitution" << endl;
			cout << "[4] Intelligence" << endl;
			cout << "[5] Wisdom" << endl;
			cout << "[6] Charisma" << endl;
			cin >> skillChangeAnswer;
			switch (skillChangeAnswer) {
			case 1:
				cout << "You Chose Strength!\n";
				cout << "how many points would you like to put into it?\n";
				cin >> skillPoints;
				character.Str = character.Str + skillPoints;
				numOfPoints = numOfPoints - skillPoints;
				cout << "Your Strength is now " << character.Str << endl;
				cout << "Number of remaining Skill Points to use are: " << numOfPoints << endl;
				break;
			case 2:
				cout << "You Chose Dexterity!\n";
				cout << "how many points would you like to put into it?\n";
				cin >> skillPoints;
				character.Dex = character.Dex + skillPoints;
				numOfPoints = numOfPoints - skillPoints;
				cout << "Your Dexterity is now " << character.Dex << endl;
				cout << "Number of remaining Skill Points to use are: " << numOfPoints << endl;
				break;
			case 3:
				cout << "You Chose Constitution!\n";
				cout << "how many points would you like to put into it?\n";
				cin >> skillPoints;
				character.Const = character.Const + skillPoints;
				numOfPoints = numOfPoints - skillPoints;
				cout << "Your Constitution is now " << character.Const << endl;
				cout << "Number of remaining Skill Points to use are: " << numOfPoints << endl;
				break;
			case 4:
				cout << "You Chose Intelligence!\n";
				cout << "how many points would you like to put into it?\n";
				cin >> skillPoints;
				character.Int = character.Int + skillPoints;
				numOfPoints = numOfPoints - skillPoints;
				cout << "Your Intelligence is now " << character.Int << endl;
				cout << "Number of remaining Skill Points to use are: " << numOfPoints << endl;
				break;
			case 5:
				cout << "You Chose Wisdom!\n";
				cout << "how many points would you like to put into it?\n";
				cin >> skillPoints;
				character.Wis = character.Wis + skillPoints;
				numOfPoints = numOfPoints - skillPoints;
				cout << "Your Wisdom is now " << character.Wis << endl;
				cout << "Number of remaining Skill Points to use are: " << numOfPoints << endl;
				break;
			case 6:
				cout << "You Chose Charisma!\n";
				cout << "how many points would you like to put into it?\n";
				cin >> skillPoints;
				character.Char = character.Char + skillPoints;
				numOfPoints = numOfPoints - skillPoints;
				cout << "Your Charisma is now " << character.Char << endl;
				cout << "Number of remaining Skill Points to use are: " << numOfPoints << endl;
				break;
			}
		}
	}
	else {
		cout << "You're all set for the adventure then! Good Luck!\n";
	}



	cout << "You are out of points!\n";
}

//=====================================================================================================================================================================


/*
void printCharacter(CreateCharacter&) {
	using std::cout;
	using std::endl;
	CreateCharacter character1, character2, character3, character4;

}
*/

//ENEMY CREATION

void createSkeleton(CreateEnemy&) {
	using std::cout; 
	CreateEnemy Skeleton; 
	Skeleton.ClassName = "Skeleton";
	int Str = 4;
	int Dex = 4;
	int Const = 4;
	int Int = 4;
	int Wis = 4;
	int Char = 4;
	Skeleton.weaponName = "Short Sword";
	cout << "You Encounter A " << Skeleton.ClassName << "!\n";
	cout << "Weapon: " << Skeleton.weaponName << "\n";
}

void createHighwayMan(CreateEnemy&) {
	using std::cout;
	CreateEnemy Highway_Man;
	Highway_Man.ClassName = "Highway Man";
	int Str = 6;
	int Dex = 5;
	int Const = 4;
	int Int = 4;
	int Wis = 4;
	int Char = 4;
	Highway_Man.weaponName = "Hunting Knife";
	cout << "You Encounter A " << Highway_Man.ClassName << "!\n";
	cout << "Weapon Equipped: " << Highway_Man.weaponName << "\n";
}

void createArcher(CreateEnemy&) {
	using std::cout;
	CreateEnemy Archer;
	Archer.ClassName = "Archer";
	int Str = 4;
	int Dex = 6;
	int Const = 4;
	int Int = 5;
	int Wis = 5;
	int Char = 4;
	Archer.weaponName = "Short Bow";
	cout << "You Encounter A " << Archer.ClassName << "!\n";
	cout << "Weapon Equipped: " << Archer.weaponName << "\n";
}

//====================================================================================================================================================

//ROOM CREATION & BASIC COMBAT

void generateRoom() {
	CreateEnemy Skeleton;
	CreateEnemy Highway_Man;
	CreateEnemy Archer;
	int roomGen = 0;

	roomGen = (rand() % 2) + 1;

	switch (roomGen) {
	case 1:
		createSkeleton(Skeleton);
		break;
	case 2:
		createHighwayMan(Highway_Man);
	case 3:
		createArcher(Archer);
	}
}

void combat(CreateCharacter&, CreateEnemy&) {

}

//=========================================================================================================================================================