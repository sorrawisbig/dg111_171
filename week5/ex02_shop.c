#include <stdio.h>

int main()
{
    printf("=== ITEM SHOP ===\n");
    printf("Gold left: 1000\n");
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");   
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    int choice = 0;
    printf("Select Your Item: ");
    scanf("%d", &choice);
    printf("=== Purchase ===\n");
    if (choice == 1) {
        printf("You bought a Health Potion! -50 Gold +50 HP\n");
    } else if (choice == 2) {
        printf("You bought a Mana Potion! -80 Gold +30 MP\n");
    } else if (choice == 3) {
        printf("You bought an Iron Sword! -500 Gold +20 ATK\n");
    } else if (choice == 4) {
        printf("You bought a Leather Armor! -300 Gold +15 DEF\n");
    } else if (choice == 5) {
        printf("Exiting the shop...\n");
    } else {
        printf("Invalid choice. Please select a valid item.\n");
    }


    return 0;
}