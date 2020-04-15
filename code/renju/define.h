
#ifndef _DEFINE_
#define _DEFINE_
//全局变量定义

#include <stdio.h>
#include <sstream>
#include <string.h>
#include <string>
#include <math.h>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <assert.h>

using namespace std;

#define out -1		//棋盘外
#define blank 0		//空白点
#define black 1		//黑方
#define white 2		//白方

#define USER 11
#define AI 12
#define inf 1000000		
#define inboard(a,b) (a>0 && a<=15 && b>0 && b<=15)		//用于检验招法是否在棋盘上

#define GRID_NUM 16	//棋盘规模	
extern int chessBoard[GRID_NUM][GRID_NUM]; //棋盘
extern int valueBoard[GRID_NUM][GRID_NUM]; //棋盘
bool gameover(pair<int, int> node, int player); //判断是否游戏结束
#endif


