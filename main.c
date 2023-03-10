#include <stdio.h>

int main() {
    int x = 0;
    int y = 3;
    int direction = 0;
    int roomWidth = 15;
    int roomHeight = 15;
    int stepCount = 0;
    int maxSteps = (roomWidth + roomHeight) * 2;
    while (stepCount < maxSteps) {

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
        
        if (x == 0 || y == 0 || x == roomWidth - 1 || y == roomHeight - 1) {
            
            direction = (direction + 1) % 4;
        }
        stepCount++;
    }

    
    while (x != roomWidth - 1) {
        x++;
    }
    
    int throughDoor = 0;
    printf("Bin ich durch den Durchgang gegangen? (0 - Nein, 1 - Ja): ");
    scanf("%d", &throughDoor);

    
    int isOutside = 0;
    printf("Bin ich draußen? (0 - Nein, 1 - Ja): ");
    scanf("%d", &isOutside);

    
    int jumpOverBox = 0;
    printf("Soll ich über eine Box springen? (0 - Nein, 1 - Ja): ");
    scanf("%d", &jumpOverBox);

    while (x != 0 || y != 3 || direction != 0) {

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
        
        if (x == 0 || y == 0 || x == roomWidth - 1 || y == roomHeight - 1) {
            direction = (direction + 1) % 4;
        }
        
        if (jumpOverBox && x == 2 && y == 2) {
            y -= 2;
        }
    }

    
    printf("Ich bin zurück am Startpunkt und ich tanze jetzt!\n");

    
    printf("Ich habe %d Schritte gemacht.\n", stepCount);

    
    printf("Hallo Herr Baumann!\n");


    printf("Ich schalte mich jetzt aus.\n");

    return 0;
}
