#pragma once
#pragma once
#ifndef CONTAINER_H
#define CONTAINER_H

class Container
{
private:
    int size; // ���� ���差
public:
    Container(); // ������
    void fill(); // 10���� ä���
    void consume(int amount); // ������ �縸ŭ �Ҹ�
    int get_size(); // ���� ���差 ��ȯ
};

#endif // CONTAINER_H
