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

    ~Goods()
    {
        cout << "对象被销毁" << endl;
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
}
int main()
{

    system("pause");
    return 0;
}
