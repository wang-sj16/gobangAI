#ifndef _SEARCHMOVE_
#define _SEARCHMOVE_
//��������
#include "GameLoop.h"
#include "define.h"
#include "createmoves.h"
#include "makemove.h"
#include "evaluate.h"
#include "printchessboard.h"
class GameLoop;
int searchMove();//��������
int minMaxSearch(int now_play, int depth, int alpha, int beta, GameLoop & gl);
int minMaxNoAlphaSearch(int now_play, int depth, GameLoop& gl);
int minMaxSimpleSearch(int now_play, int depth, int alpha, int beta, GameLoop& gl);
int minMaxZobristSearch(int now_play, int depth, int alpha, int beta, GameLoop& gl);
int minMaxHeauZobristSearch(int now_play, int depth, int alpha, int beta, GameLoop& gl);
int deepSearch(int now_play, int depth, int alpha, int beta, GameLoop & gl, double time_limit);
extern int next_x, next_y, last_x, last_y;
extern int DEPTH;
#endif
