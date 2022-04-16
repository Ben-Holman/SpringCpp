#pragma once
#include <string>
class Player {
private:
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

public:



};