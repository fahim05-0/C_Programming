#include <stdio.h>

void displayBoard(char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9) {
    printf("\n Current Board:\n");
    printf("  ");
    if (b1 == ' ') printf("1");
    else printf("%c", b1);
    printf(" | ");
    if (b2 == ' ') printf("2");
    else printf("%c", b2);
    printf(" | ");
    if (b3 == ' ') printf("3");
    else printf("%c", b3);
    printf("\n");
    
    printf(" ---------\n");
    printf("  ");
    if (b4 == ' ') printf("4");
    else printf("%c", b4);
    printf(" | ");
    if (b5 == ' ') printf("5");
    else printf("%c", b5);
    printf(" | ");
    if (b6 == ' ') printf("6");
    else printf("%c", b6);
    printf("\n");
    
    printf(" ---------\n");
    printf("  ");
    if (b7 == ' ') printf("7");
    else printf("%c", b7);
    printf(" | ");
    if (b8 == ' ') printf("8");
    else printf("%c", b8);
    printf(" | ");
    if (b9 == ' ') printf("9");
    else printf("%c", b9);
    printf("\n\n");
}

int isEmpty(char pos) {
    if (pos == ' ') {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9) {
    int empty = 0;
    if (isEmpty(b1)) empty = 1;
    if (isEmpty(b2)) empty = 1;
    if (isEmpty(b3)) empty = 1;
    if (isEmpty(b4)) empty = 1;
    if (isEmpty(b5)) empty = 1;
    if (isEmpty(b6)) empty = 1;
    if (isEmpty(b7)) empty = 1;
    if (isEmpty(b8)) empty = 1;
    if (isEmpty(b9)) empty = 1;
    
    if (empty == 1) {
        return 0;
    }
    else {
        return 1;
    }
}

char checkWinner(char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9) {
    // Check rows
    if (b1 == b2 && b2 == b3 && b1 != ' ') {
        return b1;
    }
    if (b4 == b5 && b5 == b6 && b4 != ' ') {
        return b4;
    }
    if (b7 == b8 && b8 == b9 && b7 != ' ') {
        return b7;
    }
    
    // Check columns
    if (b1 == b4 && b4 == b7 && b1 != ' ') {
        return b1;
    }
    if (b2 == b5 && b5 == b8 && b2 != ' ') {
        return b2;
    }
    if (b3 == b6 && b6 == b9 && b3 != ' ') {
        return b3;
    }
    
    // Check diagonals
    if (b1 == b5 && b5 == b9 && b1 != ' ') {
        return b1;
    }
    if (b3 == b5 && b5 == b7 && b3 != ' ') {
        return b3;
    }
    
    return ' ';
}

int getComputerMove(char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9) {
    // PRIORITY 1: Win if possible
    if (isEmpty(b1)) {
        if (b2 == 'O' && b3 == 'O') return 1;
        if (b4 == 'O' && b7 == 'O') return 1;
        if (b5 == 'O' && b9 == 'O') return 1;
    }
    if (isEmpty(b2)) {
        if (b1 == 'O' && b3 == 'O') return 2;
        if (b5 == 'O' && b8 == 'O') return 2;
    }
    if (isEmpty(b3)) {
        if (b1 == 'O' && b2 == 'O') return 3;
        if (b6 == 'O' && b9 == 'O') return 3;
        if (b5 == 'O' && b7 == 'O') return 3;
    }
    if (isEmpty(b4)) {
        if (b1 == 'O' && b7 == 'O') return 4;
        if (b5 == 'O' && b6 == 'O') return 4;
    }
    if (isEmpty(b5)) {
        if (b1 == 'O' && b9 == 'O') return 5;
        if (b3 == 'O' && b7 == 'O') return 5;
        if (b2 == 'O' && b8 == 'O') return 5;
        if (b4 == 'O' && b6 == 'O') return 5;
    }
    if (isEmpty(b6)) {
        if (b3 == 'O' && b9 == 'O') return 6;
        if (b4 == 'O' && b5 == 'O') return 6;
    }
    if (isEmpty(b7)) {
        if (b1 == 'O' && b4 == 'O') return 7;
        if (b9 == 'O' && b8 == 'O') return 7;
        if (b5 == 'O' && b3 == 'O') return 7;
    }
    if (isEmpty(b8)) {
        if (b7 == 'O' && b9 == 'O') return 8;
        if (b2 == 'O' && b5 == 'O') return 8;
    }
    if (isEmpty(b9)) {
        if (b7 == 'O' && b8 == 'O') return 9;
        if (b3 == 'O' && b6 == 'O') return 9;
        if (b1 == 'O' && b5 == 'O') return 9;
    }
    
    // PRIORITY 2: Block player from winning
    if (isEmpty(b1)) {
        if (b2 == 'X' && b3 == 'X') return 1;
        if (b4 == 'X' && b7 == 'X') return 1;
        if (b5 == 'X' && b9 == 'X') return 1;
    }
    if (isEmpty(b2)) {
        if (b1 == 'X' && b3 == 'X') return 2;
        if (b5 == 'X' && b8 == 'X') return 2;
    }
    if (isEmpty(b3)) {
        if (b1 == 'X' && b2 == 'X') return 3;
        if (b6 == 'X' && b9 == 'X') return 3;
        if (b5 == 'X' && b7 == 'X') return 3;
    }
    if (isEmpty(b4)) {
        if (b1 == 'X' && b7 == 'X') return 4;
        if (b5 == 'X' && b6 == 'X') return 4;
    }
    if (isEmpty(b5)) {
        if (b1 == 'X' && b9 == 'X') return 5;
        if (b3 == 'X' && b7 == 'X') return 5;
        if (b2 == 'X' && b8 == 'X') return 5;
        if (b4 == 'X' && b6 == 'X') return 5;
    }
    if (isEmpty(b6)) {
        if (b3 == 'X' && b9 == 'X') return 6;
        if (b4 == 'X' && b5 == 'X') return 6;
    }
    if (isEmpty(b7)) {
        if (b1 == 'X' && b4 == 'X') return 7;
        if (b9 == 'X' && b8 == 'X') return 7;
        if (b5 == 'X' && b3 == 'X') return 7;
    }
    if (isEmpty(b8)) {
        if (b7 == 'X' && b9 == 'X') return 8;
        if (b2 == 'X' && b5 == 'X') return 8;
    }
    if (isEmpty(b9)) {
        if (b7 == 'X' && b8 == 'X') return 9;
        if (b3 == 'X' && b6 == 'X') return 9;
        if (b1 == 'X' && b5 == 'X') return 9;
    }
    
    // PRIORITY 3: Take center
    if (isEmpty(b5)) {
        return 5;
    }
    
    // PRIORITY 4: Take corners
    if (isEmpty(b1)) {
        return 1;
    }
    if (isEmpty(b3)) {
        return 3;
    }
    if (isEmpty(b7)) {
        return 7;
    }
    if (isEmpty(b9)) {
        return 9;
    }
    
    // PRIORITY 5: Take remaining positions
    if (isEmpty(b2)) {
        return 2;
    }
    if (isEmpty(b4)) {
        return 4;
    }
    if (isEmpty(b6)) {
        return 6;
    }
    if (isEmpty(b8)) {
        return 8;
    }
    
    return 0;
}

int main() {
    char p1 = ' ', p2 = ' ', p3 = ' ',
         p4 = ' ', p5 = ' ', p6 = ' ',
         p7 = ' ', p8 = ' ', p9 = ' ';
    char winner = ' ';
    int playerMove, computerMove;
    int gameActive = 1;
    
    printf("========================================\n");
    printf("      TIC TAC TOE - AI BOT\n");
    printf("========================================\n");
    printf("\nYou are X, Computer is O\n");
    printf("\nPosition Layout:\n");
    printf("  1 | 2 | 3\n");
    printf(" -----------\n");
    printf("  4 | 5 | 6\n");
    printf(" -----------\n");
    printf("  7 | 8 | 9\n");
    
    while (gameActive) {
        displayBoard(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        
        // Player's turn
        int validMove = 0;
        while (validMove == 0) {
            printf("Player, enter position (1-9): ");
            scanf("%d", &playerMove);
            
            if (playerMove < 1 || playerMove > 9) {
                printf("Invalid! Enter 1-9.\n");
                continue;
            }
            
            if (playerMove == 1) {
                if (isEmpty(p1)) {
                    p1 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 2) {
                if (isEmpty(p2)) {
                    p2 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 3) {
                if (isEmpty(p3)) {
                    p3 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 4) {
                if (isEmpty(p4)) {
                    p4 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 5) {
                if (isEmpty(p5)) {
                    p5 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 6) {
                if (isEmpty(p6)) {
                    p6 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 7) {
                if (isEmpty(p7)) {
                    p7 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 8) {
                if (isEmpty(p8)) {
                    p8 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
            else if (playerMove == 9) {
                if (isEmpty(p9)) {
                    p9 = 'X';
                    validMove = 1;
                }
                else {
                    printf("Position taken! Try another.\n");
                }
            }
        }
        
        // Check player win
        winner = checkWinner(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        if (winner == 'X') {
            displayBoard(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            printf("Congratulations! You won!\n");
            break;
        }
        
        // Check draw
        if (isFull(p1, p2, p3, p4, p5, p6, p7, p8, p9)) {
            displayBoard(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            printf("It's a draw!\n");
            break;
        }
        
        // Computer's turn
        computerMove = getComputerMove(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        
        if (computerMove == 1) {
            p1 = 'O';
        }
        else if (computerMove == 2) {
            p2 = 'O';
        }
        else if (computerMove == 3) {
            p3 = 'O';
        }
        else if (computerMove == 4) {
            p4 = 'O';
        }
        else if (computerMove == 5) {
            p5 = 'O';
        }
        else if (computerMove == 6) {
            p6 = 'O';
        }
        else if (computerMove == 7) {
            p7 = 'O';
        }
        else if (computerMove == 8) {
            p8 = 'O';
        }
        else if (computerMove == 9) {
            p9 = 'O';
        }
        
        printf("Computer chose position %d\n", computerMove);
        
        // Check computer win
        winner = checkWinner(p1, p2, p3, p4, p5, p6, p7, p8, p9);
        if (winner == 'O') {
            displayBoard(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            printf("Computer won! Better luck next time.\n");
            break;
        }
        
        // Check draw
        if (isFull(p1, p2, p3, p4, p5, p6, p7, p8, p9)) {
            displayBoard(p1, p2, p3, p4, p5, p6, p7, p8, p9);
            printf("It's a draw!\n");
            break;
        }
    }
    
    printf("\n========================================\n");
    printf("GAME OVER! Thanks for playing.\n");
    printf("========================================\n");
    return 0;
}
