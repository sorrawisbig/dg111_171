#include <stdio.h>
#include <stdbool.h>

int main()
{
    int max_hp , damage , poisoned_input , attack;
    printf("Max HP: ");
    scanf("%d", &max_hp);
    printf("Damage: ");
    scanf("%d", &damage);
    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    _Bool poisoned = poisoned_input == 1 ? true : false;
    printf("Attack: ");
    scanf("%d", &attack);

    int HP = max_hp - damage;
    if (HP < 0) {
        HP = 0;
    }
    printf("=== Character Status ===\n", HP);
    printf("HP: %d/%d\n", HP, max_hp);
    if (poisoned) {
        printf("Poisoned: Yes\n");
    } else {
        printf("");
    }
    if (HP == 0) {
        printf("State: DEAD\n");
    }
    return 0;
}