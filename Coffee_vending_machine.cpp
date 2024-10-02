#include <iostream>
#include "Coffee_vending_machine.h"

void Coffee_vending_machine::fill() // 모든 재료를 10으로 채우기
{
    for (int i = 0; i < 3; ++i)
        tong[i].fill();
    std::cout << "모든 재료가 채워졌습니다." << std::endl;
}

void Coffee_vending_machine::select_espresso() // 에스프레소 선택, 물 1, 커피 1 소모
{
    if (tong[0].get_size() >= 1 && tong[1].get_size() >= 1)
    {
        tong[0].consume(1);
        tong[1].consume(1);
        std::cout << "에스프레소가 나왔습니다." << std::endl;
    }
    else
    {
        std::cout << "재료가 부족합니다!" << std::endl;
    }
}

void Coffee_vending_machine::select_italian_provocation() // 아메리카노 선택, 물 2, 커피 1 소모
{
    if (tong[0].get_size() >= 1 && tong[1].get_size() >= 2)
    {
        tong[0].consume(1);
        tong[1].consume(2);
        std::cout << "아메리카노가 나왔습니다." << std::endl;
    }
    else
    {
        std::cout << "재료가 부족합니다!" << std::endl;
    }
}

void Coffee_vending_machine::select_sugar_coffee() // 설탕 커피 선택, 물 2, 커피 1, 설탕 3 소모
{
    if (tong[0].get_size() >= 1 && tong[1].get_size() >= 2 && tong[2].get_size() >= 3)
    {
        tong[0].consume(1);
        tong[1].consume(2);
        tong[2].consume(3);
        std::cout << "설탕 커피가 나왔습니다." << std::endl;
    }
    else
    {
        std::cout << "재료가 부족합니다!" << std::endl;
    }
}

void Coffee_vending_machine::run()
{
    int choice;
    while (true)
    {
        std::cout << "1: 에스프레소, 2: 아메리카노, 3: 설탕 커피, 4: 리필, 5: 종료" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            select_espresso();
            break;
        case 2:
            select_italian_provocation();
            break;
        case 3:
            select_sugar_coffee();
            break;
        case 4:
            fill();
            break;
        case 5:
            return;
        default:
            std::cout << "잘못된 선택입니다." << std::endl;
        }
    }
}
