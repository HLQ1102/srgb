#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <sstream>
#include <string.h>

using namespace std;

int main()
{
    ifstream infile("NAMESPACE_STD.CPP");
    set<string> keyword_set;
    string keyword;
    // װ�عؼ��ֵ�set����
    while (infile >> keyword)
        keyword_set.insert(keyword);

    infile.close();
    infile.clear();
    infile.open("src.cpp");
    stringstream oss;
    oss << infile.rdbuf();
    string text = oss.str();   // �޸������ı� text �з���ĸΪ�ո�
    for (size_t i = 0 ; i != text.size() ; i++) {
        if (!isalpha(text[i]))
            text[i] = ' ';
    }
    oss.clear();
    oss.str(text);

    // ���������ļ�
    ofstream outfile("keyword.txt");
    int cnt = 0;
    while (oss >> keyword) {
        if (keyword_set.count(keyword) > 0) {
            outfile << keyword << " " ;
            if ((++cnt % 20) == 0)
                outfile << endl ;
        }
    }
    cout << "\n�ҵ������ܴ���:" << cnt << "��\n";
    return 0;
}
