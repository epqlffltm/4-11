#pragma once
#pragma once
#ifndef COFFEE_VENDING_MACHINE_H
#define COFFEE_VENDING_MACHINE_H

#include "Container.h"

class Coffee_vending_machine//VANDING��MACHINE��
{
private:
    Container tong[3]; // 0: Ŀ��, 1: ��, 2: ����

    void fill(); // ��� ��Ḧ 10���� ä���
    void select_espresso(); // ���������� ����, �� 1, Ŀ�� 1 �Ҹ�
    void select_italian_provocation(); // �Ƹ޸�ī�� ����, �� 2, Ŀ�� 1 �Ҹ�
    void select_sugar_coffee(); // ���� Ŀ�� ����, �� 2, Ŀ�� 1, ���� 3 �Ҹ�

public:
    void run();
};

#endif // COFFEE_VENDING_MACHINE_H
