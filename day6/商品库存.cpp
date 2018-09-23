#include <iostream>
#include <windows.h>

using namespace std;

class Goods
{
  private:
    int weight;              //重量
    static int total_weight; //仓库的总重量

  public:
    Goods *next;
    Goods()
    {
        weight = 0;
        next = NULL;
    }

    //创建一个货物，并且加上重量
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
        //cout << "对象被销毁" << endl;
        total_weight -= weight;
    }
};

//初始化总重量
int Goods::total_weight = 0;

//进货
void buy(Goods *&head, int weight)
{
    //创建一个货物，重量是w
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

//出货
void sell(Goods *&head)
{

    if (head == NULL)
    {
        cout << "仓库已经没有货物了" << endl;
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
        cout << "0-退出" << endl;
        cout << "1-存货" << endl;
        cout << "2-取货" << endl;
        cout << "3-查看库存" << endl;
        cout << "请输入指令:" << endl;
        int choice;
        int w;
        cin >> choice;

        switch (choice)
        {
        case 0:
            //退出
            return 0;
            break;
        case 1:
            //进货
            cout << "输入进货量" << endl;
            cin >> w;
            buy(head, w);
            break;
        case 2:
            //取货
            sell(head);
            break;
        case 3:
            //查看库存
            cout << "商品库存" << Goods::getTotalWeight() << endl;
            break;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}
