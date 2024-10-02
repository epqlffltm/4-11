#pragma once
#pragma once
#ifndef CONTAINER_H
#define CONTAINER_H

class Container
{
private:
    int size; // 현재 저장량
public:
    Container(); // 생성자
    void fill(); // 10으로 채우기
    void consume(int amount); // 지정된 양만큼 소모
    int get_size(); // 현재 저장량 반환
};

#endif // CONTAINER_H
