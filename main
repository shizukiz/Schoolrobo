#include <stdio.h>

int main() {
    int hasWall, hasDoor;
    int x = 0, y = 0;
    int direction = 1;
    int hasReachedWall = 0;
    printf("Gibt es eine Wand? (0 = nein, 1 = ja)\n");
    scanf("%d", &hasWall);
    if (hasWall) {
        printf("Es gibt eine Wand. Der Roboter kann nicht starten.\n");
        return 0;
    }

    while (1) {
        printf("Aktuelle Position: (%d, %d)\n", x, y);
        printf("Möchtest du einen Schritt machen? (0 = nein, 1 = ja)\n");
        int shouldMove;
        scanf("%d", &shouldMove);
        if (!shouldMove) {
            break;
        }

        // Bewege den Roboter einen Schritt in die aktuelle Richtung.
        switch (direction) {
            case 0:
                y--;
                break;
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                x--;
                break;
        }

        // Überprüfe, ob der Roboter an der Wand ist, und drehe ihn um, falls dies der Fall ist.
        if (x == -1 || x == 11 || y == -1 || y == 11) {
            if (!hasReachedWall) {
                switch (direction) {
                    case 0:
                        y++;
                        break;
                    case 1:
                        x--;
                        break;
                    case 2:
                        y--;
                        break;
                    case 3:
                        x++;
                        break;
                }
                direction = (direction + 2) % 4;
                printf("Roboter hat die Wand erreicht und sich umgedreht. Schaut jetzt in Richtung %d.\n", direction);
                hasReachedWall = 1;
            } else {
                switch (direction) {
                    case 0:
                        y++;
                        break;
                    case 1:
                        x--;
                        break;
                    case 2:
                        y--;
                        break;
                    case 3:
                        x++;
                        break;
                }
                printf("Roboter ist am Anfang angekommen und hat sich umgedreht. Schaut jetzt in Richtung %d.\n", direction);
                hasReachedWall = 0;
                int i;
                for (i = 0; i < 3; i++) {
                    printf("Roboter dreht sich im Kreis.\n");
                }
                printf("Roboter springt.\n");
            }
        }
    }

    printf("Roboter hat die Wand erreicht und gestoppt.\n");

    return 0;
}
