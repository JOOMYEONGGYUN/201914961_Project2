#ifndef ENEMY_H
#define ENEMY_H
#include "unit.h"
#include <vector>
#include "Bullet.h"
 class enemy :public unit
 {
    public:
    enemy(int y_value, int x_value, int frame_value, int hp_value, int speed_value, int score_value, char content_value) \
    : unit(y_value, x_value, frame_value, content_value),hp(hp_value),speed(speed_value),score(score_value) {};
    int hp;
    int speed;
    int score;
    int damage=1;
    private:
 };

 #endif