#pragma once

class Zombie
{
public:
	int mHealth;
	int mAttackPower;
	Zombie();
	Zombie(int hp, int atk);
	int GetHealth();
	int GetAttack();
	void TakeDamage(int amount);
	bool IsDead();
};