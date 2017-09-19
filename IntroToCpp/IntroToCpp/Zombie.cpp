#include "Zombie.h"

Zombie::Zombie()
{
	mHealth = 100;
	mAttackPower = 10;
}
Zombie::Zombie(int hp, int atk)
{
	mHealth = hp;
	mAttackPower = atk;
}
int Zombie::GetHealth()
{
	return mHealth;
}
int Zombie::GetAttack()
{
	return mAttackPower;
}
void Zombie::TakeDamage(int amount)
{
	mHealth - amount;
}
bool Zombie::IsDead()
{
	if (mHealth <= 0)
	{
		return true;
	}
}