#ifndef BULLET_H
#define BULLET_H

#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <chrono>
#include <vector>

class Bullet{
    public:
        Bullet(int y_value, int x_value, int frame_value) \
        : y(y_value), x(x_value), create_frame_bullet(frame_value) {};
        int damage=1;
        int y, x;
        int create_frame_bullet; //initialize when it creates
        int check_frame_bullet;
        int level=1;
        char get_symbol(){
            int which_symbol = this->level;
            if(which_symbol == 1){
                return '\'';
            }
            else if(which_symbol == 2){
                return '^';
            }
            else if(which_symbol == 3){
                return '!'
            }
            else return '\''
        }
};

class Enemy_bullet{
    public:
    Enemy_bullet(int y_value, int x_value, int frame_value, int enemy_frame_value, int damage_vlaue, char enemy_type_value, int moving_type_value)\
    : y(y_value), x(x_value), frame(frame_value), enemy_frame(enemy_frame_value), damage(damage_value), enemy_type(enemy_type_value), moving_type(moving_type_value){}
    int damage;
    int y_value, x_value;
    int frame, enemy_frame;
    char enemy_type;
    int moving_type;
    private:
}
#endif