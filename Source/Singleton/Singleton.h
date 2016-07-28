/********************************************************************
	created:	2006/07/20
	filename: 	Singleton.h
	author:		�
                http://www.cppblog.com/converse/

	purpose:	Singletonģʽ����ʾ����
*********************************************************************/

#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
	// ��̬��Ա����,�ṩȫ�ַ��ʵĽӿ�
	static Singleton* GetInstancePtr();
	static Singleton  GetInstance();

	void Test();

private:
	// ��̬��Ա����,�ṩȫ��Ωһ��һ��ʵ��
	static Singleton* m_pStatic;
	
	// Object construction should be restricted in Singleton
	Singleton(){};
	~Singleton(){};
};

#endif