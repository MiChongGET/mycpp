#include <iostream>
#include <windows.h>

using namespace std;

class Goods
{
  private:
    int weight;              //����
    static int total_weight; //�ֿ��������

  public:
    Goods *next;
    Goods()
    {
        weight = 0;
        next = NULL;
    }

    //����һ��������Ҽ�������
    Goods(int w)
    {
        weight = w;
        next = NULL;
        total_weight += weight;
    }

    ~Goods()
    {
        cout << "��������" << endl;
    }
};

//��ʼ��������
int Goods::total_weight = 0;

//����
void buy(Goods *&head, int weight)
{
    //����һ�����������w
    Goods *new_goods = new Goods(weight);

    if (head == NULL)
    {
        head = new_goods;
    }
    else
    {
        new_goods->next = head;
    }
}

//����
void sell(Goods *&head)
{

    if (head == NULL)
    {
        cout << "�ֿ��Ѿ�û�л�����" << endl;
        return;
    }

    Goods *temp = head;
    head = head->next;
    delete temp;
}
int main()
{

    system("pause");
    return 0;
}
