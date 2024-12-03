#include <stdio.h>
#include <graphics.h>//easyx.h也可以
#include <mmsystem.h>//系统多媒体头文件
#pragma comment(lib,"winmm.lib")//导入库文件  （播放音乐）



int main()
{
	//创建一个窗口
	initgraph(800, 450);//宽度， 高度
	setbkcolor(WHITE);//设置背景图片为白色
	cleardevice();// 清除窗口并应用背景颜色
	settextcolor(RGB(255, 149, 240));//设置文字颜色
	settextcolor(BLACK);//设置文字颜色为黑色
	settextstyle(50, 0, "黑体");//字号    0：自适应    字体 
	outtextxy(190, 100, "你是我的好大儿吗？");//x轴 y轴 文本
	Sleep(1000);
	//cleardevice();//清空字体
	

	////配乐，导入一些媒体库
	////在资源导入音乐
	//mciSendString("open 音乐名.mp3", 0, 0, 0);//打开音乐
	//mciSendString("play 音乐名.mp3", 0, 0, 0);//播放音乐
	//mciSendString("close 音乐名.mp3", 0, 0, 0);//关闭音乐


	////导入图片
	//IMAGE bkimg;//1. 定义一张图片
	//loadimage(&bkimg, "图片名.jpg");//2. 初始化
	//putimage(0, 0, &bkimg);//x y 图片地址   3. 输出图片


	//接受鼠标键盘信息
	ExMessage m;//接受鼠标或者键盘的消息
	while (1)//死循环，窗口不会结束。全时间段监听接受按键消息
	{
		//鼠标消息        鼠标      键盘
		peekmessage(&m, EX_MOUSE | EX_KEY);//获得用户的鼠标消息

		//监听按键盘
		if (m.message == WM_KEYDOWN) //按键盘
		{
			//是不是按了F键
			if (m.vkcode == 'F') 
			{
				outtextxy(rand() % 801, rand() % 451, "你是我的好大儿吗？");
				Sleep(100);
			}
		}
	}
	return 0;
}