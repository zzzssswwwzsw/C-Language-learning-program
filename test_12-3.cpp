#include <stdio.h>
#include <graphics.h>//easyx.hҲ����
#include <mmsystem.h>//ϵͳ��ý��ͷ�ļ�
#pragma comment(lib,"winmm.lib")//������ļ�  ���������֣�



int main()
{
	//����һ������
	initgraph(800, 450);//��ȣ� �߶�
	setbkcolor(WHITE);//���ñ���ͼƬΪ��ɫ
	cleardevice();// ������ڲ�Ӧ�ñ�����ɫ
	settextcolor(RGB(255, 149, 240));//����������ɫ
	settextcolor(BLACK);//����������ɫΪ��ɫ
	settextstyle(50, 0, "����");//�ֺ�    0������Ӧ    ���� 
	outtextxy(190, 100, "�����ҵĺô����");//x�� y�� �ı�
	Sleep(1000);
	//cleardevice();//�������
	

	////���֣�����һЩý���
	////����Դ��������
	//mciSendString("open ������.mp3", 0, 0, 0);//������
	//mciSendString("play ������.mp3", 0, 0, 0);//��������
	//mciSendString("close ������.mp3", 0, 0, 0);//�ر�����


	////����ͼƬ
	//IMAGE bkimg;//1. ����һ��ͼƬ
	//loadimage(&bkimg, "ͼƬ��.jpg");//2. ��ʼ��
	//putimage(0, 0, &bkimg);//x y ͼƬ��ַ   3. ���ͼƬ


	//������������Ϣ
	ExMessage m;//���������߼��̵���Ϣ
	while (1)//��ѭ�������ڲ��������ȫʱ��μ������ܰ�����Ϣ
	{
		//�����Ϣ        ���      ����
		peekmessage(&m, EX_MOUSE | EX_KEY);//����û��������Ϣ

		//����������
		if (m.message == WM_KEYDOWN) //������
		{
			//�ǲ��ǰ���F��
			if (m.vkcode == 'F') 
			{
				outtextxy(rand() % 801, rand() % 451, "�����ҵĺô����");
				Sleep(100);
			}
		}
	}
	return 0;
}