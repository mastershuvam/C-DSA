#include <iostream>
#include <cstdlib>   // For rand(), system()
#include <unistd.h>  // For usleep()
#include <termios.h> // For kbhit() alternative
#include <fcntl.h>   // For non-blocking input

using namespace std;

#define HEIGHT 20
#define WIDTH 40

int snakeTailX[100], snakeTailY[100];
int snakeTailLen, gameover, key, score;
int x, y, fruitx, fruity;
int delay; // Speed based on mode

int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

void setup() {
    gameover = 0;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitx = rand() % WIDTH;
    fruity = rand() % HEIGHT;
    while (fruitx == 0) fruitx = rand() % WIDTH;
    while (fruity == 0) fruity = rand() % HEIGHT;
    score = 0;
    snakeTailLen = 0;

    // Ask for difficulty level
    int difficulty;
    cout << "Choose Difficulty Level: \n";
    cout << "1 - Easy\n2 - Medium\n3 - Hard\n";
    cin >> difficulty;

    // Set speed based on difficulty
    switch (difficulty) {
        case 1: delay = 200000; break; // Easy (200ms delay)
        case 2: delay = 100000; break; // Medium (100ms delay)
        case 3: delay = 50000; break;  // Hard (50ms delay)
        default: delay = 100000; break; // Default to Medium
    }
}

void draw() {
    system("clear");
    for (int i = 0; i < WIDTH + 2; i++) cout << "-";
    cout << endl;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j <= WIDTH; j++) {
            if (j == 0 || j == WIDTH) cout << "#";
            else if (i == y && j == x) cout << "O";
            else if (i == fruity && j == fruitx) cout << "*";
            else {
                bool printTail = false;
                for (int k = 0; k < snakeTailLen; k++) {
                    if (snakeTailX[k] == j && snakeTailY[k] == i) {
                        cout << "o";
                        printTail = true;
                    }
                }
                if (!printTail) cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < WIDTH + 2; i++) cout << "-";
    cout << endl;
    cout << "Score = " << score << endl;
    cout << "Press W, A, S, D to move.\nPress X to quit.\n";
}

void input() {
    if (kbhit()) {
        switch (tolower(getchar())) {
            case 'a': if (key != 2) key = 1; break;
            case 'd': if (key != 1) key = 2; break;
            case 'w': if (key != 4) key = 3; break;
            case 's': if (key != 3) key = 4; break;
            case 'x': gameover = 1; break;
        }
    }
}

void logic() {
    int prevX = snakeTailX[0], prevY = snakeTailY[0];
    int prev2X, prev2Y;
    snakeTailX[0] = x;
    snakeTailY[0] = y;
    for (int i = 1; i < snakeTailLen; i++) {
        prev2X = snakeTailX[i];
        prev2Y = snakeTailY[i];
        snakeTailX[i] = prevX;
        snakeTailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (key) {
        case 1: x--; break;
        case 2: x++; break;
        case 3: y--; break;
        case 4: y++; break;
    }

    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) gameover = 1;
    for (int i = 0; i < snakeTailLen; i++) {
        if (snakeTailX[i] == x && snakeTailY[i] == y) gameover = 1;
    }

    if (x == fruitx && y == fruity) {
        fruitx = rand() % WIDTH;
        fruity = rand() % HEIGHT;
        while (fruitx == 0) fruitx = rand() % WIDTH;
        while (fruity == 0) fruity = rand() % HEIGHT;
        score += 10;
        snakeTailLen++;
    }
}

int main() {
    setup();
    while (!gameover) {
        draw();
        input();
        logic();
        usleep(delay);
    }
    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}
