#include "game.hpp"

using namespace std;

void menu(){
	cout << "                                                                                 " << endl;
	cout << "                                      ###########################################" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ############# MineSweeperɨ�� #############" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ###########################################" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ############# 1:play ��ʼ��Ϸ #############" << endl;
	cout << "                                      ############# 0:exit �˳���Ϸ #############" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ###########################################" << endl;
	cout << "                                                                                 " << endl;
}


void game(){
	//�������׵�λ��
	char mine[ROWS][COLS] = { 0 };//'0'
	//����Ų�������׵���Ϣ
	char show[ROWS][COLS] = { 0 };//'*'
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//��ӡmine��Ϊ�˲�����Ϸ�߼�������ͨ��֮�����һ��ע�͵�
	DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);

}

void test(){
	int input = 0;
	do{
		menu();
		cout << "������:>--";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "�˳���Ϸ" << endl;
			break;
		default:
			cout << "               ѡ�����!����������" << endl;
			break;
		}
	} while (input);
}

int main(){
	test();
	system("pause");
	return 0;
}