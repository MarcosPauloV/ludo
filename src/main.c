#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// constant
#define PLAYER_LIMIT 4
#define COLOR_TEXT_SIZE 20

// struct
typedef struct Player {
    char* color;
} Player;

int main() {
    int playerAmount, colorIsValid;
    char initialColor[COLOR_TEXT_SIZE];

	do {
		printf("Insert the amount of players: ");
		scanf("%d", &playerAmount);
	} while (playerAmount > PLAYER_LIMIT || playerAmount < 2);

	Player* player = (Player*)malloc(playerAmount * sizeof(Player));

    for (int i = 0; i < playerAmount; i++) {
        player[i].color = (char*)malloc(COLOR_TEXT_SIZE * sizeof(char));

        printf("Insert the color of player %d: ", i + 1);
        scanf("%s", player[i].color);
        fflush(stdin);
    }

    do {
        printf("Insert the color of the initial player: ");
        scanf("%s", initialColor);
        fflush(stdin);

        for (int i = 0; i < playerAmount; i++) {
            if (strcmp(initialColor, player[i].color) == 0) {
                colorIsValid = 1;
                break;
            }
        }

    } while (colorIsValid == 0);

    return 0;
}