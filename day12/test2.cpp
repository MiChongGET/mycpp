#include <iostream>
#include <fstream>
using namespace std;

/**
 * ��дһ����ͳ��һƪӢ�������е��ʵĸ���������
 */

//�ж��Ƿ�����Ӣ����ĸ
bool isAlpha(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int main()
{
    ifstream ifs("D:\\C\\work\\Cpp\\day12\\target.txt");

    char line_words[1024];
    bool isWord = false;

    int rows = 0, words = 0;
    int i;

    while (!ifs.eof())
    {
        ifs.getline(line_words, 1023);
        //�����Ӽ�
        rows++;

        //��0
        i = 0;

        while (line_words[i] != 0)
        {

            if (!isAlpha(line_words[i]))
            {
                isWord = false;
            }
            else if (isAlpha(line_words[i]) && isWord == false)
            {
                words++;
                isWord = true;
            }

            i++;
        }
    }

    cout << "������" << rows << "********��" << words << "����" << endl;
    system("pause");
    return 0;
}
