#ifndef snake_h
#define snake_h

using namespace std;

const int MAX_LEN_SNAKE = (WIDTH - 3) * (HEIGHT - 2);
const int UP = 0;
const int DOWN = 1;
const int LEFT = 2;
const int RIGHT = 3;
int snake_dir = UP;
bool isRunning = true;

char snake = 'O';
int snake_x[MAX_LEN_SNAKE] = 0; // кордината по х
int snake_y[MAX_LEN_SNAKE] = 0; // кордиана по y
int snake_len = 1; //текущая длинна змеи

#endif /* snake_h */
