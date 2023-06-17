#ifndef ITEM_H
#define ITEM_H
#include "unit.h"

class item : public unit
{
    public:
    item(int y_value, int x_value, int frame_value, char content_value):unit(y_value, x_value, frame_value, content_value){}
    private:

};

#endif