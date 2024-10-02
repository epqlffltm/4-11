#include <iostream>
#include "Container.h"

Container::Container() : size(10) {} // �ʱ� ���差�� 10���� ����

void Container::fill() // 10���� ä���
{
    size = 10;
}

void Container::consume(int amount) // ������ �縸ŭ �Ҹ�
{
    if (size >= amount)
        size -= amount;
    else
        std::cout << "��ᰡ �����մϴ�!" << std::endl;
}

int Container::get_size() // ���� ���差 ��ȯ
{
    return size;
}
