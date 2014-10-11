/*
* JR_Color.c (1.0)
* ����������ɫ���ƺ���ʵ��
*
* By Eric-JR Chen
* diamont1001@163.com
* 2011-6-1
*/

#include "JR_Color.h"
static int isInitColor = 0;
HANDLE Handle_Color;    //������ھ��

void initColor(){
    if(isInitColor) return ;
    isInitColor = 1;
    Handle_Color = GetStdHandle(STD_OUTPUT_HANDLE);
}

/*
    0 = ��ɫ
    1 = ��ɫ
    2 = ����ɫ
    3 = ����ɫ
    4 = ���ɫ
    5 = ��ɫ
    6 = ����ɫ
    7 = ��ɫ
    8 = ���ɫ
    9 = ��ɫ
    10 = ��ɫ
    11 = ����ɫ
    12 = ��ɫ
    13 = ����ɫ
    14 = ��ɫ
    15 = ��ɫ
*/
/* ���������ɫ */
void JR_SetColor(int textcolor, int bgcolor){
    int color = textcolor + bgcolor * 16;
    initColor();
    SetConsoleTextAttribute(Handle_Color, color);
}


