#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
    srand(time(0));

    int playerPos = 1;      // Player lane: 0,1,2
    int step = 0;           // Obstacle row
    int obstaclePos = rand() % 3;
    int score = 0;          // Player score
    int lives = 3;          // Player lives

    while (lives > 0) {
        // ---- INPUT ----
        if (_kbhit()) {
            char ch = getch();
            if (ch == 75 && playerPos > 0) playerPos--; // LEFT arrow
            if (ch == 77 && playerPos < 2) playerPos++; // RIGHT arrow
        }

        // ---- DRAW ----
        system("cls");
        printf("|--- --- ---|\n");

        for (int i = 0; i < 10; i++) {
            if (i == step) {
                printf("|");
                for (int lane = 0; lane < 3; lane++) {
                    if (lane == obstaclePos)
                        printf("  # ");
                    else
                        printf("    ");
                }
                printf("|\n");
            } else {
                printf("|           |\n");
            }
        }

        // ---- PLAYER ----
        printf("|");
        for (int lane = 0; lane < 3; lane++) {
            if (lane == playerPos)
                printf("  ^ ");
            else
                printf("    ");
        }
        printf("|\n");

        printf("\nScore: %d   Lives: %d\n", score, lives);


        if (step == 9) { // Player row
            if (playerPos == obstaclePos) {
                lives--;           
                Beep(600, 150);     
                if (lives > 0) {
                    printf("Ouch! You hit the obstacle. Lives left: %d\n", lives);
                    Sleep(500);
                } else {
                    Beep(400, 400); // Long beep for game over
                    printf("\nGAME OVER!\n");
                    printf("Final Score: %d\n", score);
                    break;
                }
            } else {
                score++;          
                Beep(800, 200);     
            }
        }

        Sleep(120);


        step++;
        if (step > 9) {
            step = 0;
            obstaclePos = rand() % 3; 
        }
    }
}

int main() {
    char choice;
    do {
        playGame(); 

        printf("\nDo you want to play again? (Y/N): ");
        fflush(stdin); 
        choice = getch();
        printf("%c\n", choice);
    } while (choice == 'Y' || choice == 'y');

    printf("Thank you for playing!\n");
    return 0;
}
