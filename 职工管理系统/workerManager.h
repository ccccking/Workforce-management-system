#pragma once//防止头文件重复包含
#include<iostream>
#include"worker.h"
#include"fstream"
#define FILENAME "empFile.txt"
using namespace std;
class WorkerManager {
public:
	WorkerManager();
	//展示菜单
	void Show_Menu();
	//退出系统
	void ExitSystem();
	//记录职工人数
	int m_EmpNum;
	//职工数组指针
	Worker** m_EmpArry;
	//添加职工
	void Add_Emp();
	//保存文件
	void save();
	//判断文件是否为空
	bool m_FileIsEmpty;
	//统计文件中的人数
	int get_EmpNum();
	//初始化职工
	void init_Emp();
	//显示职工
	void Show_Emp();
	//删除职工
	void Del_Emp();
	//判断职工是否存在 如果存在返回职工所在数组位置，不存在返回-1
	int IsExist(int id);
	//修改职工
	void Mod_Emp();
	//查找职工
	void Find_Emp();
	//按照职工编号排序
	void Sort_Emp();
	//清空文件
	void Clean_File();
	~WorkerManager();
};
