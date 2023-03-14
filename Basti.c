#include <stdio.h>
#include <string.h>

int main() {
    int x = 0;  // x-Koordinate des Roboters
    int y = 0;  // y-Koordinate des Roboters
    int direction = 0;  // Ausrichtung des Roboters (0 = Norden, 1 = Osten, 2 = Süden, 3 = Westen)

    // Führe die Schleife aus, bis der Roboter zur Ladestation zurückkehrt
    while (x != 0 || y != 0 || direction != 0) {
        // Bewege den Roboter um einen Schritt nach vorne
        switch (direction) {
            case 0:  // Norden
                y++;
                break;
            case 1:  // Osten
                x++;
                break;
            case 2:  // Süden
                y--;
                break;
            case 3:  // Westen
                x--;
                break;
        }

        // Frage den Benutzer, ob der Roboter eine Wand berührt hat
        printf("Befindet sich der Roboter an einer Wand? (ja/nein) ");
        char input[10];
        scanf("%s", input);

        if (strcmp(input, "ja") == 0) {
            // Drehe den Roboter nach links und bewege ihn um drei Schritte nach vorne
            direction = (direction + 3) % 4;
            switch (direction) {
                case 0:  // Norden
                    y += 3;
                    break;
                case 1:  // Osten
                    x += 3;
                    break;
                case 2:  // Süden
                    y -= 3;
                    break;
                case 3:  // Westen
                    x -= 3;
                    break;
            }

            // Drehe den Roboter erneut nach links und bewege ihn um sieben Schritte nach vorne
            direction = (direction + 3) % 4;
            switch (direction) {
                case 0:  // Norden
                    y += 7;
                    break;
                case 1:  // Osten
                    x += 7;
                    break;
                case 2:  // Süden
                    y -= 7;
                    break;
                case 3:  // Westen
                    x -= 7;
                    break;
            }

            // Drehe den Roboter um 180 Grad und bewege ihn um sieben Schritte nach vorne
            direction = (direction + 2) % 4;
            switch (direction) {
                case 0:  // Norden
                    y += 7;
                    break;
                case 1:  // Osten
                    x += 7;
                    break;
                case 2:  // Süden
                    y -= 7;
                    break;
                case 3:  // Westen
                    x -= 7;
                    break;
            }

// Drehe den Roboter nach rechts und bewege ihn um drei Schritte nach vorne
direction = (direction + 1) % 4;
switch (direction) {
    case 0:  // Norden
        y += 3;
        break;
    case 1:  // Osten
        x += 3;
        break;
    case 2:  // Süden
        y -= 3;
        break;
    case 3:  // Westen
        x -= 3;
        break;
}
