
//���һ��Բ�࣬��Բ���ܳ������
//Բ���ܳ���2*PI*�뾶
//Բ�������PI*�뾶*�뾶
//PIȡ3.14

// #include<iostream>
// using namespace std;
// const double PI=3.14;

// class Circle
// {
//     private:
//         double m_r;
//     public:
//         //���ð뾶
//         void setR(double r)
//         {
//             m_r=r;
//         }
//         //��ȡ�뾶
//         double getR()
//         {
//             return m_r;
//         }
//         //��ȡ�ܳ�
//         double calculateZC()
//         {
//             return 2*PI*m_r;
//         }
//         //��ȡ���
//         double calculateMJ()
//         {
//             return PI*m_r*m_r;
//         }
// };

// int main()
// {
//     Circle C1;
//     //���ð뾶
//     C1.setR(1);
//     //��ȡ�ܳ�
//     double ZC=C1.calculateZC();
//     cout<<"Բ���ܳ�Ϊ��"<<ZC<<endl;
//     //��ȡ���
//     double MJ=C1.calculateMJ();
//     cout<<"Բ�����Ϊ��"<<MJ<<endl;
    
    
//     system("pause");
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"hello world!"<<endl;
//     cout<<"���Կ���̨����"<<endl;
//     system("pause");
//     return 0;
// }

/*��̳�ʾ��*/
// #include<iostream>
// using namespace std;

// class common
// {
//     public:
//         void hearder()
//         {
//             cout<<"����һ��������hearder"<<endl;
//         }

//         void footer()
//         {
//             cout<<"����һ��������footer"<<endl;
//         }

//         void left()
//         {
//             cout<<"����һ��������left"<<endl;
//         }
// };

// //java�γ�����
// class java:public common
// {
//     public:
//         void java_content()
//         {
//             cout<<"java�γ�����"<<endl;
//         }
// };

// //python�γ�����
// class python:public common
// {
//     public:
//         void python_content()
//         {
//             cout<<"python�γ�����"<<endl;
//         }
// };
// //cpp�γ�����
// class cpp:public common
// {
//     public:
//         void cpp_content()
//         {
//             cout<<"cpp�γ�����"<<endl;
//         }
// };


// void test01()
// {
// //java�γ�����
//     java j;
//     j.hearder();
//     j.footer();
//     j.left();
//     j.java_content();
//     cout<<"-------------------"<<endl;
// //python�γ�����
//     python p;
//     p.hearder();
//     p.footer();
//     p.left();
//     p.python_content();
//     cout<<"-------------------"<<endl;
// //cpp�γ�����
//     cpp c;
//     c.hearder();
//     c.footer();
//     c.left();
//     c.cpp_content();
//     cout<<"-------------------"<<endl;
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

/*��̳з�ʽ--public��private��protected��ʽ*/
// #include<iostream>
// using namespace std;

// class Base
// {
// public:
//     int m_A;
// protected:
//     int m_B;
// private:
//     int m_C;
// };

// //�����̳�
// class Son1:public Base
// {
//     public:
//         void func()
//         {
//             m_A=10;//���ڿ��Է��ʹ���Ȩ������
//             m_B=10;//���ڿ��Է��ʱ���Ȩ������
//             //m_c=10;//���ڲ����Է���˽��Ȩ������
//         }
// };
// void test01()
// {
//     Son1 s1;
//     s1.m_A=100;//������Է��ʹ���Ȩ������
//     //s1.m_B=100;//���ⲻ���Է��ʱ���Ȩ������
//     //s1.m_C=100;//���ⲻ���Է���˽��Ȩ������
// }

// //�����̳�
// class Son2:protected Base
// {
//     public:
//         void func()
//         {
//             m_A=10;//���ڿ��Է��ʹ���Ȩ������
//             m_B=10;//���ڿ��Է��ʱ���Ȩ������
//             //m_c=10;//���ڲ����Է���˽��Ȩ������
//         }
// };
// void test02()
// {
//     Son2 s2;
//     //s2.m_A=100;//���ⲻ���Է��ʹ���Ȩ������
//     //s2.m_B=100;//���ⲻ���Է��ʱ���Ȩ������
//     //s2.m_C=100;//���ⲻ���Է���˽��Ȩ������
// }

// //˽�м̳�
// class Son3:private Base
// {
//     public:
//         void func()
//         {
//             m_A=10;//���ڿ��Է��ʹ���Ȩ������
//             m_B=10;//���ڿ��Է��ʱ���Ȩ������
//             //m_c=10;//���ڲ����Է���˽��Ȩ������
//         }
// };
// void test03()
// {
//     Son3 s3;
//     // s3.m_A=100;//���ⲻ���Է��ʹ���Ȩ������
//     // s3.m_B=100;//���ⲻ���Է��ʱ���Ȩ������
//     // s3.m_C=100;//���ⲻ���Է���˽��Ȩ������
// }
// class Grandson1:public Son3
// {
//     public:
//         void func()
//         {
//             // m_A=10;//���ڲ����Է��ʹ���Ȩ������
//             // m_B=10;//���ڲ����Է��ʱ���Ȩ������
//             //m_c=10;//���ڲ����Է���˽��Ȩ������
//         }

// };

// int main()
// {
//     system("pause");
//     return 0;
// }


/*�̳��еĶ���ģ��*/
// #include<iostream>
// using namespace std;

// class Base
// {
//     public:
//         int m_A;
//     protected:
//         int m_B;
//     private:
//         int m_C;
// };
// class Son:public Base
// {
//     public:
//         int m_D;
// };
// void test01()
// {
//     //�����е�˽�г�ԱҲ������̳���ȥ�ˣ�ֻ���ɱ��������غ���ʲ�����
//     cout<<"size of Son is: "<<sizeof(Son)<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }

/*�̳��еĹ��������˳��*/
//�ȹ��츸�࣬�ڹ������࣬������˳���빹���˳���෴
// #include<iostream>
// using namespace std;
// class Base
// {
//     public:
//         Base()
//         {
//             cout<<"Base�Ĺ��캯��"<<endl;
//         }
//         ~Base()
//         {
//             cout<<"Base����������"<<endl;
//         }
// };
// class Son:public Base
// {
//     public:
//         Son()
//         {
//             cout<<"Son�Ĺ��캯��"<<endl;
//         }
//         ~Son()
//         {
//             cout<<"Son����������"<<endl;
//         }
// };

// int main()
// {   
//     //Base b;
//     Son s;

//     system("pause");
//     return 0;
// }


/*�̳���ͬ����Ա�Ĵ���ʽ*/
//����������ֱ�ӷ���������ͬ����Ա
//����������������Է��ʵ�����ͬ����Ա
//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ���������ͬ����Ա����������������Է��ʵ������е�ͬ����Ա����
// #include<iostream>
// using namespace std;
// class Base
// {
//     public:
//         int m_A;
//         Base()
//         {
//             m_A=100;
//         }
//         void func()
//         {
//             cout<<"Base��func��������"<<endl;
//         }
// };
// class Son:public Base{
//     public:
//         int m_A;
//         Son()
//         {
//             m_A=200;
//         }
//         void func()
//         {
//             cout<<"Son��func��������"<<endl;
//         }

// };
// void test01()
// {
//     Son s;
//     cout<<"Son�е�m_AΪ:"<<s.m_A<<endl;
//     cout<<"Base�е�m_AΪ:"<<s.Base::m_A<<endl;
//     s.func();
//     s.Base::func();
//     cout<<"<--------------------------->"<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*�̳�ͬ����̬��Ա����ʽ*/
//��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
//��������ͬ����Ա��ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա����Ҫ��������
// #include<iostream>
// using namespace std;
// class Base
// {
//     public:
//         static int m_A;
//         int m_B;
//         Base()
//         {
//             m_B=100;
//         }
//         static void func()
//         {
//             cout<<"Base�ľ�̬func��������"<<endl;
//         }
// };
// int Base::m_A=100;
// class Son:public Base
// {
//     public:
//         static int m_A;
//         int m_B;
//         Son()
//         {
//             m_B=200;
//         }
//         static void func()
//         {
//             cout<<"Son�ľ�̬func��������"<<endl;
//         }
// };
// int Son::m_A=200;
// ostream & operator<<(ostream & cout, Base & b)
// {
//     cout << b.m_B ;
//     return cout;
// }
// ostream & operator<<(ostream & cout, Son & s)
// {
//     cout << s.m_B ;
//     return cout;
// }

// void test01()
// {
//     //1��ͨ���������
//     cout<<"ͨ���������"<<endl;
//     Son s;
//     cout<<"Son�е�m_AΪ:"<<s.m_A<<endl;
//     cout<<"Base�е�m_AΪ:"<<s.Base::m_A<<endl;
//     cout<<"*********************"<<endl;
//     //2��ͨ����������
//     cout<<"ͨ����������"<<endl;
//     cout<<"Son�е�m_AΪ:"<<Son::m_A<<endl;
//     //��һ��::����ͨ��������ʽ���ʣ��ڶ���::������ʸ����������µĳ�Ա
//     cout<<"Base�е�m_AΪ:"<<Son::Base::m_A<<endl;
// }
// void test02()
// {
//     //1��ͨ���������
//     cout<<"ͨ���������"<<endl;
//     Son s;
//     Base b;
//     // s.func();
//     // s.Base::func();
//     cout<<"Son�е�m_BΪ:"<<s<<endl;
//     cout<<"Base�е�m_BΪ:"<<b<<endl;
//     cout<<"*********************"<<endl;
//     //2��ͨ����������
//     cout<<"ͨ����������"<<endl;
//     Son::func();
//     //��һ��::����ͨ��������ʽ���ʣ��ڶ���::������ʸ����������µĳ�Ա
//     Son::Base::func();
// }

// int main()
// {
//     //test01();
//     test02();

//     system("pause");
//     return 0;
// }
