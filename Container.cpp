#include <iostream>
#include "Container.h"

Container::Container() : size(10) {} // 초기 저장량을 10으로 설정

void Container::fill() // 10으로 채우기
{
    size = 10;
}

void Container::consume(int amount) // 지정된 양만큼 소모
{
    if (size >= amount)
        size -= amount;
    else
        std::cout << "재료가 부족합니다!" << std::endl;
}

int Container::get_size() // 현재 저장량 반환
{
    return size;
}
