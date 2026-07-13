#include <stdio.h>
int main()
{

int PlayerAttack = 100;
int EnemyDefense = 25;
int HitNumber = 5;
int base_damage = 100000;
int final_damage = 100000;

printf("=== COMBAT SIMULATOR ===\n");
printf("Player Attack: ");
scanf("%d", &PlayerAttack);
printf("Enemy Defense: ");
scanf("%d", &EnemyDefense);
printf("Hit Number: ");
scanf("%d", &HitNumber);
base_damage = PlayerAttack - EnemyDefense;
if (base_damage < 0)
{
    base_damage = 0;
}

if(HitNumber % 5 ==0)
{
    final_damage = (int) ((float)base_damage * 1.5);
printf("Damage = %d CRITICAL HIT! (x1.5)\n", final_damage);
}
else
{
    final_damage = base_damage;
    printf("Damage = %d\n", final_damage);
}

    return 0;
}