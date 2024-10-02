#pragma once
#pragma once
#ifndef COFFEE_VENDING_MACHINE_H
#define COFFEE_VENDING_MACHINE_H

#include "Container.h"

class Coffee_vending_machine//VANDING♂MACHINE♂
{
private:
    Container tong[3]; // 0: 커피, 1: 물, 2: 설탕

    void fill(); // 모든 재료를 10으로 채우기
    void select_espresso(); // 에스프레소 선택, 물 1, 커피 1 소모
    void select_italian_provocation(); // 아메리카노 선택, 물 2, 커피 1 소모
    void select_sugar_coffee(); // 설탕 커피 선택, 물 2, 커피 1, 설탕 3 소모

public:
    void run();
};

#endif // COFFEE_VENDING_MACHINE_H
