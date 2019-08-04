#include "game.hpp"

using namespace std;

void menu(){
	cout << "                                                                                 " << endl;
	cout << "                                      ###########################################" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ############# MineSweeper扫雷 #############" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ###########################################" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ############# 1:play 开始游戏 #############" << endl;
	cout << "                                      ############# 0:exit 退出游戏 #############" << endl;
	cout << "                                                                                 " << endl;
	cout << "                                      ###########################################" << endl;
	cout << "                                                                                 " << endl;
}


void game(){
	//单独放雷的位置
	char mine[ROWS][COLS] = { 0 };//'0'
	//存放排查出来的雷的信息
	char show[ROWS][COLS] = { 0 };//'*'
	//初始化格子
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//打印mine是为了测试游戏逻辑，测试通过之后把这一行注释掉
	DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);

}

void test(){
	int input = 0;
	do{
		menu();
		cout << "请输入:>--";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "退出游戏" << endl;
			break;
		default:
			cout << "               选择错误!请重新输入" << endl;
			break;
		}
	} while (input);
}

int main(){
	test();
	system("pause");
	return 0;
}