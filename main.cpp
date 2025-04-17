#include <iostream>
#include <Windows.h>
#include <conio.h>
#define ree 26
using namespace std;

void coutname(string mm,string answer){
	cout<<"谜面："<<mm<<endl;
	cout<<"请输入谜底>";
	string ans;
	cin>>ans;
	if(ans==answer){
		cout<<"答对了"<<endl;
	}else{
		cout<<"答错了"<<endl;
	}
//	break;
}

int main(int argc, char** argv) {
	time_t t;
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE; //移除快速编辑模式
	mode &= ~ENABLE_INSERT_MODE; //移除插入模式
	mode &= ~ENABLE_MOUSE_INPUT;
	SetConsoleMode(hStdin, mode);
	srand((unsigned) time(&t));
	start:
	system("cls");
	system("title 猜灯谜");
	cout<<endl<<endl<<endl;
	cout<<"████     ███    ████     ████     █       █████"<<endl;
	cout<<"█  █      █     █  ██    █  ██    █       █"<<endl;
	cout<<"█ ██      █     █   ██   █   ██   █       █"<<endl;
	cout<<"███       █     █   ██   █   ██   █       █████"<<endl;
	cout<<"█  █      █     █  ██    █  ██    █   █   █"<<endl;
	cout<<"█   █    ███    ████     ████     █████   █████"<<endl;
	cout<<"                                           Game"<<endl;
	cout<<"                                     S 开始游戏"<<endl;
	cout<<"                                     R 游戏规则"<<endl;
	BOOL ist_Msg=TRUE;
	while(ist_Msg){
		char data=getch();
		if(data=='s'){
			goto game;
		}
		if(data=='S'){
			goto game;
		}
		if(data=='r'){
			system("cls");
			cout<<"致玩家:\n    欢迎进入，我是程序的开发者，接下来我将为大家讲解一下规则。"<<endl;
			cout<<"游戏中有26道题，题目顺序随机编排"<<endl;
			cout<<"您需要将答案输入到指定位置"<<endl;
			cout<<"程序将自动判断答案是否错误"<<endl;
			cout<<"最后祝您玩的愉快"<<endl;
			cout<<"(c)五年级十一班全体同学、老师，基于MIT协议发布";
			system("pause >NULL");
			goto start;
		}
		if(data=='R'){
			system("cls");
			cout<<"致玩家:    欢迎进入，我是程序的开发者，接下来我将为大家讲解一下规则。"<<endl;
			cout<<"游戏中有26道题，题目顺序随机编排"<<endl;
			cout<<"您需要将答案输入到指定位置"<<endl;
			cout<<"程序将自动判断答案是否错误"<<endl;
			cout<<"最后祝您玩的愉快"<<endl;
			cout<<"(c)五年级十一班全体同学、老师";
			system("pause >NULL");
			goto start;
		}
		
	}
	game:
	system("cls");
	while(1){
		int Res = rand()%ree+1;
		cout<<"题目id:"<<Res<<endl;
		switch(Res){
		case 1:
			coutname("木旁有张光荣榜，月月提各在上方","榜");
			break;
		case 2:
			coutname("食旁藏陷阱，包在面中心","馅");
			break;
		case 3:
			coutname("湖边少女来，又遇水相伴","渺");
			break;
		case 4:
			coutname("小树开花真漂亮，两个贝壳挂树上","樱");
			break;
		case 5:
			coutname("二手上下叠，发力可出击","拳");
			break;
		case 6:
			coutname("五张口紧相连","吾");
			break;
		case 7:
			coutname("口说不在乎","呼");
			break;
		case 8:
			coutname("独户主人","雇");
			break;
		case 9:
			coutname("一树高耸入云，半截悬在空中","桅");
			break;
		case 10:
			coutname("女子怀中有双乳","姆");
			break;
		case 11:
			coutname("尧舜羽未丰，举足欲腾空","翘");
			break;
		case 12:
			coutname("半把刀藏屋檐下","尼");
			break;
		case 13:
			coutname("鸟立分界线，浪尖捕鱼忙","鸥");
			break;
		case 14:
			coutname("张口列两旁，牙齿露锋芒","咧");
			break;
		case 15:
			coutname("打到家前","拧");
			break;
		case 16:
			coutname("一戈守心，左右为难","惑");
			break;
		case 17:
			coutname("舟行千里粮不缺","舱");
			break;
		case 18:
			coutname("一脚在门外，一脚在门里，心事重重时，他来告诉你","踌");
			break;
		case 19:
			coutname("前抵闽中又一点","搔");
			break;
		case 20:
			coutname("有水灌半缸","罐");
			break;
		case 21:
			coutname("上山下丘手拉手，组成一座高山头","岳");
			break;
		case 22:
			coutname("小木桩，本领大，拴住小狗不松垮","栓");
			break;
		case 23:
			coutname("脚下有个“著”，进退难自主","躇");
			break;
		case 24:
			coutname("登机去西部","凳");
			break;
		case 25:
			coutname("人小志气高，敢把刀刃削","仞");
			break;
		case 26:
			coutname("竹编围墙站一排，离了他就散开来","篱");
			break;
			
		}
		cout<<"请按任意键进入下一题...";
		system("pause >NULL");
		system("cls");
	}
	return 0;
}
