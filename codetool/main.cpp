#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cctype>

using namespace std;
void help(); // ����ʹ�ð���
bool blank_lines(const string& str); // ������
string& find_replace(string& str_line, const string& str1 , const string& str2); // �����滻�ַ���
string& Chinese_Punctuation_Conver_English(string& str_line); // ���ı�����ΪӢ��

int main(int argc, char* argv[])
{
    if ((1 == argc)) {    //�������봦��
        help();
        return -1;
    }
    ifstream infile(argv[1]);
    if (!infile.good()) {
        printf("�ļ����󣺲��ܴ������ļ�: %s \n\a\n", argv[1]);
        help();
        return -1;
    }
    // ��ģ�鹦�ܣ����ı�����ΪӢ�ģ�������ɾ������
    stringstream oss;   // �����д oss ������
    string str_line;
    bool CodeBlocks_flag = false;
    while (getline(infile, str_line)) {
        Chinese_Punctuation_Conver_English(str_line);
        if (!blank_lines(str_line))   // ��ⲻ�ǿ���
            oss << str_line << endl;
        else if (CodeBlocks_flag) {
            oss << str_line << endl;
            CodeBlocks_flag = false;
        }
        // �����ǰ���������������һ�п��б��
        if (str_line[str_line.size() - 1] == '}')
            CodeBlocks_flag = true;
    }
    infile.close();
    ofstream outfile;
    if (2 < argc)
        outfile.open(argv[2]); // ��������ļ�
    else
        outfile.open(argv[1]); // �滻Դ�ļ�
    outfile << oss.str();  // ������д�ļ�
    cout << "��������������е����ı�����ΪӢ�ģ�ɾ������   BY Hong Wenjun\n\n"
         "Chinese Punctuation Conver English Punctuation OK! ...." << endl;
    return 0;
}

void help()
{
    printf("��������������е����ı�����ΪӢ�ģ�ɾ������   BY Hong Wenjun\n\n"
           "CodeTool filename [���filename] \n\n"
           "ʾ�� 1 ��D:\\>CodeTool   D:\\app.cpp  \n"
           "ʾ�� 1 ��D:\\>CodeTool   D:\\app.cpp  D:\\app_new.cpp \n"
           "\n����ļ��������ԭ�����ļ�\n");
}


bool blank_lines(const string& str)
{
    string::const_iterator it;
    for (it=str.begin() ; it != str.end(); it++ ) {
        if (!isspace(*it)) // ������ǿո񣬾Ͳ��ǿ���
            return false;
    }
    return true;
}

string& find_replace(string& str_line, const string& str1 , const string& str2)
{
    string::size_type pos;
    size_t CPsize = str1.size();

    pos = str_line.find(str1); // ���� str1 �滻�� str2
    while (pos != string::npos) {
        str_line.replace(pos, CPsize, str2);
        pos = str_line.find(str1, pos + 1);
    }
    return str_line;
}

string& Chinese_Punctuation_Conver_English(string& str_line)
{
    find_replace(str_line, "��", "\"");
    find_replace(str_line, "��", "\"");

    find_replace(str_line, "��", "\'");
    find_replace(str_line, "��", "\'");

    find_replace(str_line, "��", ",");
    find_replace(str_line, "��", ".");

    find_replace(str_line, "��", "!");
    find_replace(str_line, "��", "?");

    find_replace(str_line, "��", ";");
    find_replace(str_line, "��", ":");

    find_replace(str_line, "��", " "); // ȫ�ǿո�
    find_replace(str_line, "��", "(");
    find_replace(str_line, "��", ")");
    find_replace(str_line, "��", "<");
    find_replace(str_line, "��", ">");

    return str_line;
}
