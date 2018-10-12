#include <iostream>
#include <fstream>
using namespace std;

/**
 * 编写一程序，统计一篇英文文章中单词的个数与行数
 */

//判断是否是因英文字母
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
        //行数加加
        rows++;

        //清0
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

    cout << "行数：" << rows << "********共" << words << "单词" << endl;
    system("pause");
    return 0;
}
