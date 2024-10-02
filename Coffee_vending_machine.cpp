#include <iostream>
#include "Coffee_vending_machine.h"

void Coffee_vending_machine::fill() // ��� ��Ḧ 10���� ä���
{
    for (int i = 0; i < 3; ++i)
        tong[i].fill();
    std::cout << "��� ��ᰡ ä�������ϴ�." << std::endl;
}

void Coffee_vending_machine::select_espresso() // ���������� ����, �� 1, Ŀ�� 1 �Ҹ�
{
    if (tong[0].get_size() >= 1 && tong[1].get_size() >= 1)
    {
        tong[0].consume(1);
        tong[1].consume(1);
        std::cout << "���������Ұ� ���Խ��ϴ�." << std::endl;
    }
    else
    {
        std::cout << "��ᰡ �����մϴ�!" << std::endl;
    }
}

void Coffee_vending_machine::select_italian_provocation() // �Ƹ޸�ī�� ����, �� 2, Ŀ�� 1 �Ҹ�
{
    if (tong[0].get_size() >= 1 && tong[1].get_size() >= 2)
    {
        tong[0].consume(1);
        tong[1].consume(2);
        std::cout << "�Ƹ޸�ī�밡 ���Խ��ϴ�." << std::endl;
    }
    else
    {
        std::cout << "��ᰡ �����մϴ�!" << std::endl;
    }
}

void Coffee_vending_machine::select_sugar_coffee() // ���� Ŀ�� ����, �� 2, Ŀ�� 1, ���� 3 �Ҹ�
{
    if (tong[0].get_size() >= 1 && tong[1].get_size() >= 2 && tong[2].get_size() >= 3)
    {
        tong[0].consume(1);
        tong[1].consume(2);
        tong[2].consume(3);
        std::cout << "���� Ŀ�ǰ� ���Խ��ϴ�." << std::endl;
    }
    else
    {
        std::cout << "��ᰡ �����մϴ�!" << std::endl;
    }
}

void Coffee_vending_machine::run()
{
    int choice;
    while (true)
    {
        std::cout << "1: ����������, 2: �Ƹ޸�ī��, 3: ���� Ŀ��, 4: ����, 5: ����" << std::endl;
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
            std::cout << "�߸��� �����Դϴ�." << std::endl;
        }
    }
}
