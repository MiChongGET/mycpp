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

    static int getTotalWeight()
    {
        return total_weight;
    }

    ~Goods()
    {
        //cout << "��������" << endl;
        total_weight -= weight;
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
        head = new_goods;
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
    cout << "sell" << endl;
}
int main()
{

    Goods *head = NULL;
    while (1)
    {
        cout << "***************" << endl;
        cout << "0-�˳�" << endl;
        cout << "1-���" << endl;
        cout << "2-ȡ��" << endl;
        cout << "3-�鿴���" << endl;
        cout << "������ָ��:" << endl;
        int choice;
        int w;
        cin >> choice;

        switch (choice)
        {
        case 0:
            //�˳�
            return 0;
            break;
        case 1:
            //����
            cout << "���������" << endl;
            cin >> w;
            buy(head, w);
            break;
        case 2:
            //ȡ��
            sell(head);
            break;
        case 3:
            //�鿴���
            cout << "��Ʒ���" << Goods::getTotalWeight() << endl;
            break;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}
