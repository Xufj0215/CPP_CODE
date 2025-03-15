
//#include<iostream>
#include"workManger.h"
using namespace std;

//ְ�������๹�캯��
workManager::workManager()
{
    //1.�ļ�������
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    if(!ifs.is_open())
    {
        cout<<"�ļ�������"<<endl;
        //��ʼ������
        //��ʼ��ְ������
        this->m_EmpNum=0;
        //��ʼ��ְ������ָ��
        this->worker=NULL;
        //��ʼ���ļ��Ƿ�Ϊ��
        this->fileIsEmpty=true;
        //�ر��ļ�
        ifs.close();
        return;
    }
    //2.�ļ����ڣ�����Ϊ��
    char ch;
    ifs>>ch;
    if(ifs.eof())
    {
        cout<<"�ļ�Ϊ��"<<endl;
        //��ʼ��ְ������
        this->m_EmpNum=0;
        //��ʼ��ְ������ָ��
        this->worker=NULL;
        //��ʼ���ļ��Ƿ�Ϊ��
        this->fileIsEmpty=true;
        //�ر��ļ�
        ifs.close();
        return;
    }
    //3.�ļ������Ҽ�¼����
    int num=this->getEmpNum();
    cout<<"ְ������Ϊ��"<<num<<endl;
    this->m_EmpNum=num;
    //���ٿռ�
    this->worker=new Worker*[this->m_EmpNum];
    //��ʼ��ְ��
    this->initEmp();
    //�ļ���Ϊ��
    this->fileIsEmpty=false;
    cout<<"ְ����Ϣ��ȡ�ɹ�"<<endl;
    for(int i=0;i<this->m_EmpNum;i++)
    {
        cout<<"ְ����ţ�"<<this->worker[i]->m_Id
            <<"\tְ������:"<<this->worker[i]->m_Name
            <<"\t��λ:"<<this->worker[i]->getDeptId()
            <<"\t��λְ��:"<<this->worker[i]->getDeptId()<<endl;
    }
    //�ر��ļ�
    ifs.close();
}

//��ȡ�ļ��е�ְ������
int getEmpNum()
{
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    int id;
    string name;
    int dId;
    int num=0;
    while(ifs>>id&&ifs>>name&&ifs>>dId)
    {
        num++;
    }
    return num;
}

//��ʼ��ְ��
void workManager::initEmp()
{
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    int id;
    string name;
    int dId;
    int index=0;
    while(ifs>>id&&ifs>>name&&ifs>>dId)
    {
        Worker * worker=NULL;
        if(dId==1)
        {
            worker=new Employee(id,name,dId);
        }
        else if(dId==2)
        {
            worker=new Manager(id,name,dId);
        }
        else
        {
            worker=new Boss(id,name,dId);
        }
        this->worker[index]=worker;
        index++;
    }
    ifs.close();
}

//չʾ�˵�
void workManager::showMenu()
{
    cout<<"*********************************"<<endl;
    cout<<"*****  ��ӭʹ��ְ������ϵͳ  *****"<<endl;
    cout<<"********  0.�˳��������  ********"<<endl;
    cout<<"********  1.����ְ����Ϣ  ********"<<endl;
    cout<<"********  2.��ʾְ����Ϣ  ********"<<endl;
    cout<<"********  3.ɾ����ְְ��  ********"<<endl;
    cout<<"********  4.�޸�ְ����Ϣ  ********"<<endl;
    cout<<"********  5.����ְ����Ϣ  ********"<<endl;
    cout<<"********  6.���ձ������  ********"<<endl;
    cout<<"********  7.��������ĵ�  ********"<<endl;
    cout<<"**********************************"<<endl;
    cout<<endl;
}

//�˳�ϵͳ
void workManager::exitSystem()
{
    cout<<"��ӭ�´�ʹ��"<<endl;
    exit(0);
}

//��������
workManager::~workManager()
{

}

//��ͨԱ���๹�캯��
Employee::Employee(int id,string name,int dId)
{
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}
//��ʾ��ͨԱ��������Ϣ
void Employee::showInfo()
{
    cout<<"ְ����ţ�"<<this->m_Id
        <<"\tְ������:"<<this->m_Name
        <<"\t��λ:"<<this->getDeptId()
        <<"\t��λְ��:��ɾ�����������"<<endl;
}
//��ȡ��ͨԱ����λ����
string Employee::getDeptId()
{
    return string("��ͨԱ��");
}

//�����๹�캯��
Manager::Manager(int id,string name,int dId)
{
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}
//��ʾ���������Ϣ
void Manager::showInfo()
{
    cout<<"ְ����ţ�"<<this->m_Id
        <<"\tְ������:"<<this->m_Name
        <<"\t��λ:"<<this->getDeptId()
        <<"\t��λְ��:����ϰ彻�������񣬲��·������Ա��"<<endl;
}
//��ȡ�����λ����
string Manager::getDeptId()
{
    return string("����");
}

//�ϰ��๹�캯��
Boss::Boss(int id,string name,int dId)
{
    this->m_Id=id;
    this->m_Name=name;
    this->m_DeptId=dId;
}
//��ʾ�ϰ������Ϣ
void Boss::showInfo()
{
    cout<<"ְ����ţ�"<<this->m_Id
        <<"\tְ������:"<<this->m_Name
        <<"\t��λ:"<<this->getDeptId()
        <<"\t��λְ��:����˾��������"<<endl;
}
//��ȡ��ͨԱ����λ����
string Boss::getDeptId()
{
    return string("�ϰ�");
}

//�����ļ�
void workManager::save()
{
    ofstream ofs;
    ofs.open("empFile.txt",ios::out);
    if(!ofs.is_open())
    {
        cout<<"�ļ���ʧ��"<<endl;
        return;
    }
    for(int i=0;i<this->m_EmpNum;i++)
    {
        ofs<<this->worker[i]->m_Id<<" "
            <<this->worker[i]->m_Name<<" "
            <<this->worker[i]->m_DeptId<<endl;
    }
    ofs.close();
}

//����ְ��
void workManager::addEmp()
{
    int addNum=0;
    //��ʾ�û���������ְ������
    cout<<"����������ְ��������"<<endl;
    cin>>addNum;
    if(addNum>0)
    {
        //�����¿ռ��С
        int newNum=this->m_EmpNum+addNum;
        //�����¿ռ�
        Worker ** newSpace=new Worker*[newNum];
        //��ԭ�ռ������ݴ����¿ռ���
        if(this->worker!=NULL)
        {
            for(int i=0;i<this->m_EmpNum;i++)
            {
                newSpace[i]=this->worker[i];
            }
        }
        //���������
        for(int i=0;i<addNum;i++)
        {
            int id;
            string name;
            int dSelect;
            cout<<"�������"<<i+1<<"����ְ����ţ�"<<endl;
            cin>>id;
            cout<<"�������"<<i+1<<"����ְ��������"<<endl;
            cin>>name;
            cout<<"��ѡ���ְ����λ��"<<endl;
            cout<<"1����ͨԱ��"<<endl;
            cout<<"2������"<<endl;
            cout<<"3���ϰ�"<<endl;
            cin>>dSelect;
            Worker * worker=NULL;
            switch(dSelect)
            {
                case 1:
                    worker=new Employee(id,name,1);
                    break;
                case 2:
                    worker=new Manager(id,name,2);
                    break;
                case 3:
                    worker=new Boss(id,name,3);
                    break;
                default:
                    break;
            }
            newSpace[this->m_EmpNum+i]=worker;
        }
        //�ͷ�ԭ�пռ�
        delete[] this->worker;
        //�����¿ռ��ָ��
        this->worker=newSpace;
        //�����µ�ְ������
        this->m_EmpNum=newNum;
        //����ְ����Ϣ�ɹ�
        cout<<"�ɹ����"<<addNum<<"����ְ��"<<endl;
        //�������ݵ��ļ�
        this->save();
    }
    else
    {
        cout<<"������������"<<endl;
    }
}

//��ʾְ��
void workManager::showEmp()
{
    if(this->fileIsEmpty==true)
    {
        cout<<"�ļ������ڻ��¼Ϊ��"<<endl; 
    }
    else
    {
        for(int i=0;i<this->m_EmpNum;i++)
        {
            this->worker[i]->showInfo();
        }
    }
}

