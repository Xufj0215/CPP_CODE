
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
//         static void func(int n)
//         {
//             cout<<"Base���вξ�̬func��������"<<endl;
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
//     Son::Base::func(100);
// }

// int main()
// {
//     //test01();
//     test02();

//     system("pause");
//     return 0;
// }


/*��̳��﷨*/
//C++����һ����̳ж���࣬���ܻ�������������ͬ����Ա���֣���Ҫ������������
//�﷨��class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2
// #include<iostream>
// using namespace std;
// class Base1
// {
//     public:
//         Base1()
//         {
//             m_A=100;
//             m_B=200;
//         }
//         int m_A;
//         int m_B;
// };
// class Base2
// {
//     public:
//         Base2()
//         {
//             m_A=200;
//             m_C=300;
//         }
//         int m_A;
//         int m_C;
// };
// class Son:public Base1,public Base2
// {
//     public:
//         Son()
//         {
//             m_D=400;
//             m_E=500;
//         }
//         int m_D;
//         int m_E;
// };
// void test01()
// {
//     Son s;
//     cout<<"Base1�е�m_B="<<s.m_B<<endl;
//     cout<<"Base2�е�m_C="<<s.m_C<<endl;
//     cout<<"Son�е�m_D="<<s.m_D<<endl;
//     cout<<"Son�е�m_E="<<s.m_E<<endl;
//     cout<<"Base1�е�m_A="<<s.Base1::m_A<<endl;
//     cout<<"Base2�е�m_A="<<s.Base2::m_A<<endl;
// }

// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*���μ̳�����*/
// #include<iostream>
// using namespace std;
// //������
// class Animal
// {
//     public:
//         int m_Age;
// };
// //����
// class Sheep:virtual public Animal{};

// //����
// class Tuo:virtual public Animal{};
// //������
// class SheepTuo:public Sheep,public Tuo{};

// void test01()
// {
//     SheepTuo st;
//     st.Sheep::m_Age=18;
//     st.Tuo::m_Age=28;
//     //�����μ̳�ʱ����������ӵ����ͬ���ݣ���Ҫ��������������
//     cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
//     cout<<"st.Tuo::m_Age="<<st.Tuo::m_Age<<endl;
//     //�����������֪��ֻҪ��һ�ݾͿ��ԣ��������μ̳е������������ݣ��˷ѿռ�
//     //�����������̳� Animal���Ϊ�����
//     //
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }


/*��̬�Ļ�������*/
//��̬��Ϊ���ࣺ1����̬��̬���������غ�������������ھ�̬��̬�����ú����� 
//             2����̬��̬����������麯��ʵ������ʱ��̬
//��̬��̬�Ͷ�̬��̬������1����̬��̬�ĺ�����ַ���--����׶�ȷ��������ַ
//                        2����̬��̬�ĺ�����ַ���--���н׶�ȷ��������ַ
//��̬��̬��ʹ��������1���м̳й�ϵ  
//                   2��������д����������ֵ���͡��������������б���ȫ��ͬ��������麯�� 
//                   3������ָ�������ָ���������
// #include<iostream>
// using namespace std;
// class Animal
// {
//     public:
//         //�麯��
//         virtual void speak()
//         {
//             cout<<"������˵��"<<endl;
//         }
// };
// //è��
// class Cat:public Animal
// {
//     public:
//         void speak()
//         {
//             cout<<"Сè��˵��"<<endl;
//         }
// };
// //����
// class Dog:public Animal
// {
//     public:
//         void speak()
//         {
//             cout<<"С����˵��"<<endl;
//         }
// };
// //ִ��˵���ĺ�������ַ��󶨣��ڱ���׶�ȷ��������ַ
// //�����ִ�н��������ߵĺ���,��Ҫ������ַ��󶨣��ڸ���ĺ���ǰ��virtual�ؼ���,�����н׶�ȷ��������ַ
// void doSpeak(Animal & animal)
// {
//     animal.speak();
// }
// void test01()
// {
//     Cat c1;
//     doSpeak(c1);
//     Dog d1;
//     doSpeak(d1);
//     cout<<"********************"<<endl;
// }

// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*��̬����1--��������*/
//�ֱ�������ͨд���Ͷ�̬д�������ʵ��������������������ļ�������
//��̬���ŵ㣺1��������֯�ṹ����  2���ɶ���ǿ  3������ǰ�ںͺ��ڵ���չ�Լ�ά���Ը�
// #include<iostream>
// using namespace std;
// //��������--��ͨд��  
// class Calculate
// {
//     public:
//         int m_Num1;
//         int m_Num2;
//         int GetResult(string oper)
//         {
//             if(oper=="+")
//             {
//                 return m_Num1+m_Num2;
//             }
//             else if(oper=="-")
//             {
//                 return m_Num1-m_Num2;
//             }
//             else if(oper=="*")
//             {
//                 return m_Num1*m_Num2;
//             }
//             else if(oper=="/")
//             {
//                 return m_Num1/m_Num2;
//             }
//             else
//             {
//                 return 0;
//             }
//         }
// };
// //��������--��̬д��
// class AbstractCalculate
// {
//     public:
//         int m_Num1;
//         int m_Num2;
//         //�����麯��
//         virtual int GetResult()
//         {
//             return 0;
//         }
// };
// //�ӷ���������
// class AddCalculate:public AbstractCalculate
// {
//     public:
//     //������д�����麯��
//     int GetResult()
//     {
//         return m_Num1+m_Num2;
//     }
// };
// //������������
// class SubCalculate:public AbstractCalculate
// {
//     public:
//     //������д�����麯��
//     int GetResult()
//     {
//         return m_Num1-m_Num2;
//     }
// };
// //�˷���������
// class MulCalculate:public AbstractCalculate
// {
//     public:
//     //������д�����麯��
//     int GetResult()
//     {
//         return m_Num1*m_Num2;
//     }
// };
// //������������
// class DivCalculate:public AbstractCalculate
// {
//     public:
//     //������д�����麯��
//     int GetResult()
//     {
//         return m_Num1/m_Num2;
//     }
// };

// void test01()
// {
//     cout<<"��ͨд��:"<<endl;
//     Calculate c;
//     c.m_Num1=10;
//     c.m_Num2=10;
//     cout<<c.m_Num1<<"+"<<c.m_Num2<<"="<<c.GetResult("+")<<endl;
//     cout<<c.m_Num1<<"-"<<c.m_Num2<<"="<<c.GetResult("-")<<endl;
//     cout<<c.m_Num1<<"*"<<c.m_Num2<<"="<<c.GetResult("*")<<endl;
//     cout<<c.m_Num1<<"/"<<c.m_Num2<<"="<<c.GetResult("/")<<endl;
//     cout<<"<---------------------->"<<endl;
// }
// void test02()
// {
//     cout<<"��̬д��:"<<endl;
//     //�ӷ�����
//     AbstractCalculate * abc=new AddCalculate;//����ָ�������ָ���������
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
//     //��������
//     abc=new SubCalculate;
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
//     //�˷�����
//     abc=new MulCalculate;
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
//     //��������
//     abc=new DivCalculate;
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"/"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
// }
// int main()
// {
//     test01();
//     test02();

//     system("pause");
//     return 0;
// }


/*���麯���ͳ�����*/
//���麯���﷨��virtual ����ֵ���� �������������б�=0;
//���������˴��麯���������Ҳ��Ϊ������
//�������ص㣺1���޷�ʵ��������  2�����������д�����еĴ��麯��������Ҳ���ڳ�����
// #include<iostream>
// using namespace std;
// class Base
// {
//     public:
//         //���麯��
//         virtual void func()=0;
// };
// class Son:public Base{
//     public:
//         //���������д�����еĴ��麯��������Ҳ���ڳ�����
//         void func()
//         {
//             cout<<"func��������"<<endl;
//         }
// };
// int main()
// {
//     //Base b;//�������޷�ʵ��������
//     // Son s;
//     // s.func(); 
//     Base * base=new Son;
//     base->func();
//     delete base;
//     base=nullptr;

//     system("pause");
//     return 0;
// }


/*��̬����2--������Ʒ*/
//�������Ĵ�������Ϊ����ˮ--����--���뱭��--���븨��
//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�
// #include<iostream>
// using namespace std;
// class AbstractDrink
// {
//     public:
//         //��ˮ
//         virtual void Boil()=0;
//         //����
//         virtual void Brew()=0;
//         //���뱭��
//         virtual void PourInCup()=0;
//         //���븨��
//         virtual void AddCondiments()=0;
//         //������Ʒ
//         void MakeDrink()
//         {
//             Boil();
//             Brew();
//             PourInCup();
//             AddCondiments();
//         }
// };
// //��������
// class Coffee:public AbstractDrink
// {
//     public:
//         //��ˮ
//         void Boil()
//         {
//             cout<<"���ˮ"<<endl;
//         }
//         //����
//         void Brew()
//         {
//             cout<<"���ݿ���"<<endl;
//         }
//         //���뱭��
//         void PourInCup()
//         {
//             cout<<"���뱭��"<<endl;
//         }
//         //���븨��
//         void AddCondiments()
//         {
//             cout<<"�����Ǻ�ţ��"<<endl;
//         }
// };
// //������
// class Tea:public AbstractDrink
// {
//     public:
//         //��ˮ
//         void Boil()
//         {
//             cout<<"���ˮ"<<endl;
//         }
//         //����
//         void Brew()
//         {
//             cout<<"���ݲ�Ҷ"<<endl;
//         }
//         //���뱭��
//         void PourInCup()
//         {
//             cout<<"���뱭��"<<endl;
//         }
//         //���븨��
//         void AddCondiments()
//         {
//             cout<<"��������"<<endl;
//         }
// };
// void test01()
// {
//     //��������
//     AbstractDrink * ad=new Coffee;
//     ad->MakeDrink();
//     delete ad;
//     ad=nullptr;
//     cout<<"<---------------------->"<<endl;
//     //������
//     ad=new Tea;
//     ad->MakeDrink();
//     delete ad;
//     ad=nullptr;
//     cout<<"<---------------------->"<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*�������ʹ�������*/
//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//����취���������е�����������Ϊ��������������
//�������ʹ��������Ĺ�ͬ�㣺1�������Խ������ָ���ͷ��������  2������Ҫ�о���ĺ���ʵ��
//�������ʹ��������Ĳ�ͬ�㣺1���������о���ĺ���ʵ�֣���������û�о���ĺ���ʵ�֣����ڳ����࣬�޷�ʵ��������
// #include<iostream>
// #include<string>
// using namespace std;
// class Animal
// {
//     public:
//         //���캯��
//         Animal()
//         {
//             cout<<"Animal�Ĺ��캯������"<<endl;
//         }
//         //���麯��
//         virtual void func()=0;
//         //������������Ҫ����Ҳ��Ҫʵ��
//         virtual ~Animal()=0;//����
//         //������,�봿���������ܹ���
//         // virtual ~Animal()
//         // {
//         //     cout<<"Animal�Ĵ���������������"<<endl;
//         // }
// };
// Animal::~Animal()//ʵ��
// {
//     cout<<"Animal�Ĵ���������������"<<endl;
// }
// class Cat:public Animal
// {
//     public:
//         Cat(string name)
//         {
//             cout<<"Cat�Ĺ��캯������"<<endl;
//             m_Name=new string(name);
//         }
//         virtual void func()
//         {
//             cout<<*m_Name<<"Сè��˵��"<<endl;
//         }
//         ~Cat()
//         {
//             cout<<"Cat��������������"<<endl;
//             if(m_Name!=nullptr)
//             {
//                 delete m_Name;
//                 m_Name=nullptr;
//             }
//         }
//         string * m_Name;

// };
// void test01()
// {
//     Animal * abs=new Cat("Tom");
//     abs->func();
//     delete abs;
//     abs=nullptr;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*��̬����3--������װ*/
//������Ҫ��ɲ���ΪCPU�����ڼ��㣩���Կ���������ʾ�����ڴ��������ڴ洢��
//��ÿ�������װ�ɳ�����࣬�����ṩ��ͬ�ĳ���������ͬ�����������Intel���̺�Lenovo����
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿڣ�����ʱ��װ��̨��ͬ�ĵ��Խ��й���
// #include<iostream>
// using namespace std;
// //CPU��
// class CPU
// {
//     public:
//         //������㺯��
//         virtual void calculate()=0;
// };
// //�Կ���
// class VideoCard
// {
//     public:
//         //������ʾ����
//         virtual void display()=0;
// };
// //�ڴ�����
// class Memory
// {
//     public:
//         //����洢����
//         virtual void storage()=0;
// };

// //������
// class Computer
// {
//     public:
//         //���캯���д����������ָ��
//         Computer(CPU * cpu,VideoCard * vc,Memory * mem)
//         {
//             m_cpu=cpu;
//             m_vc=vc;
//             m_mem=mem;
//         }
//         //�ṩ��������
//         void work()
//         {
//             m_cpu->calculate();
//             m_vc->display();
//             m_mem->storage();
//         }
//         //�ṩ�����������ͷ������������
//         ~Computer()
//         {
//             //�ͷ�CPU���
//             if(m_cpu!=nullptr)
//             {
//                 delete m_cpu;
//                 m_cpu=nullptr;
//             }
//             //�ͷ��Կ����
//             if(m_vc!=nullptr)
//             {
//                 delete m_vc;
//                 m_vc=nullptr;
//             }
//             //�ͷ��ڴ������
//             if(m_mem!=nullptr)
//             {
//                 delete m_mem;
//                 m_mem=nullptr;
//             }
//         }
//     private:
//         CPU * m_cpu;
//         VideoCard * m_vc;
//         Memory * m_mem;       
// };

// //�������Inter��
// class InterCpu:public CPU
// {
//     public:
//         void calculate()
//         {
//             cout<<"Inter��CPU��ʼ������!"<<endl;
//         }
// };
// class InterVideoCard:public VideoCard
// {
//     public:
//         void display()
//         {
//             cout<<"Inter���Կ���ʼ��ʾ��!"<<endl;
//         }
// };
// class InterMemory:public Memory
// {
//     public:
//         void storage()
//         {
//             cout<<"Inter���ڴ�����ʼ�洢��"<<endl;
//         }
// };

// //�������Lenovo��
// class LenovoCpu:public CPU
// {
//     public:
//         void calculate()
//         {
//             cout<<"Lenovo��CPU��ʼ������!"<<endl;
//         }
// };
// class LenovoVideoCard:public VideoCard
// {
//     public:
//         void display()
//         {
//             cout<<"Lenovo���Կ���ʼ��ʾ��!"<<endl;
//         }
// };
// class LenovoMemory:public Memory
// {
//     public:
//         void storage()
//         {
//             cout<<"Lenovo���ڴ�����ʼ�洢��"<<endl;
//         }
// };
// //���Ժ���!!!!
// void test01()
// {
//     //��һ̨�������
//     CPU * interCpu=new InterCpu;
//     VideoCard * interVideoCard=new InterVideoCard;
//     Memory * interMemory=new InterMemory;

//     //������һ̨����
//     cout<<"��һ̨���Կ�ʼ������!"<<endl;
//     Computer * computer1=new Computer(interCpu,interVideoCard,interMemory);
//     computer1->work();
//     delete computer1;
//     computer1=nullptr;
//     cout<<"******************************"<<endl;

//     //�ڶ�̨�������
//     // CPU * lenovoCpu=new LenovoCpu;
//     // VideoCard * lenovoVideoCard=new LenovoVideoCard;
//     // Memory * lenovoMemory=new LenovoMemory;

//     //�����ڶ�̨����
//     cout<<"�ڶ�̨���Կ�ʼ������!"<<endl;
//     Computer * computer2=new Computer(new LenovoCpu,new LenovoVideoCard,new LenovoMemory);
//     computer2->work();
//     delete computer2;
//     computer2=nullptr;
//     cout<<"******************************"<<endl;

//     //����̨�������
//     // CPU * lenovoCpu=new LenovoCpu;
//     // VideoCard * interVideoCard=new InterVideoCard;
//     // Memory * lenovoMemory=new LenovoMemory;

//     //��������̨����
//     cout<<"����̨���Կ�ʼ������!"<<endl;
//     Computer * computer3=new Computer(new InterCpu,new LenovoVideoCard,new InterMemory);
//     computer3->work();
//     delete computer3;
//     computer3=nullptr;
//     cout<<"******************************"<<endl;
// }


//�ļ�����
//�ı��ļ������ı���ASCII����ʽ�洢���ļ�
//�������ļ������ı��Ķ�������ʽ�洢���ļ�
//�����ļ��������ࣺ1��ofstream��д����  2��ifstream��������  3��fstream����д����
/*�ļ��򿪷�ʽ��
    1��ios::in�����ļ����ļ��������
    2��ios::out�����ļ����ļ��������򴴽����ļ����������
    3��ios::ate�����ļ����ļ���������ļ����ƶ����ļ�ĩβ
    4��ios::app��׷�ӷ�ʽ���ļ����ļ���������ļ����ƶ����ļ�ĩβ���ļ��������򴴽��ļ�
    5��ios::trunc�����ļ����ļ�����������ļ����ļ��������򴴽��ļ�
    ע�⣺�ļ��򿪷�ʽ�������ʹ�ã�����|�����������磺�ö����Ʒ�ʽд�ļ� ios::binary|ios::out
*/
/*д�ļ��Ĳ��裺
    1.����ͷ�ļ�  #include<fstream>��
    2.����������  #ofstream ofs��
    3.���ļ�  ofs.open("�ļ�·��"���򿪷�ʽ)��
    4.д����    ofs<<"д�������"��
    5.�ر��ļ�  ofs.close();
*/
/*�ı��ļ�--д�ļ�*/
// #include<iostream>
// #include<fstream>
// using namespace std;

// void test01()
// {
//     //1.����ͷ�ļ�
//     //2.����������
//     ofstream ofs;
//     //3.���ļ�
//     ofs.open("test_list.txt",ios::out);
//     //4.д����
//     ofs<<"����������"<<endl;
//     ofs<<"�Ա���"<<endl;
//     ofs<<"����: 18"<<endl;
//     //5.�ر��ļ�
//     ofs.close();  
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }


/*���ļ��Ĳ��裺
    1.����ͷ�ļ�  #include<fstream>��
    2.����������  #ifstream ifs��
    3.���ļ�  ifs.open("�ļ�·��"���򿪷�ʽ)��
    4.д����    ifs>>"д�������"��
    5.�ر��ļ�  ifs.close();
*/
/*�ı��ļ�--���ļ�*/
// #include<iostream>
// #include<fstream>
// using namespace std;

// void test01()
// {
//     //1.����ͷ�ļ�
//     //2.����������
//     ifstream ifs;
//     //3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//     ifs.open("test_list.txt",ios::in);
//     if(!ifs.is_open())
//     {
//         cout<<"�ļ���ʧ��"<<endl;
//         return;
//     }
//    // 4.������
//     //��һ�ַ�ʽ
//     // cout<<"��һ�ַ�ʽ��ȡ�ļ�"<<endl;
//     // char buf[1024]={0};
//     // while(ifs>>buf)
//     // {
//     //     cout<<buf<<endl;
//     // }
//     //�ڶ��ַ�ʽ
//     // cout<<"�ڶ��ַ�ʽ��ȡ�ļ�"<<endl;
//     // char buf2[1024]={0};
//     // while(ifs.getline(buf2,sizeof(buf2)))
//     // {
//     //     cout<<buf2<<endl;
//     // }
//     //�����ַ�ʽ
//     // cout<<"�����ַ�ʽ��ȡ�ļ�"<<endl;
//     // string buf3;
//     // while(getline(ifs,buf3))
//     // {
//     //     cout<<buf3<<endl;
//     // }
//     //�����ַ�ʽ
//     cout<<"�����ַ�ʽ��ȡ�ļ�"<<endl;
//     char c;
//     while((c=ifs.get())!=EOF)
//     {
//         cout<<c;
//     }
//     //5.�ر��ļ�
//     ifs.close();
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }


//�������ļ�--д�ļ�
// #include<iostream>
// #include<fstream>
// using namespace std;

// class Person
// {
//     public:
//         char m_name[64];
//         int m_age;
// };

// void test01()
// {
//     //1.����ͷ�ļ�
//     //2.����������
//     ofstream ofs;
//     //3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//     ofs.open("person.txt",ios::out|ios::binary);
//     if(!ofs.is_open())
//     {
//         cout<<"�ļ���ʧ��"<<endl;
//         return;
//     }
//     //4.д����
//     Person P={"����",18};
//     ofs.write((const char *)&P,sizeof(Person));
//     //5.�ر��ļ�
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
//}


//�������ļ�--���ļ�
// #include<iostream>
// #include<fstream>
// using namespace std;
// const int LEN=64;

// class Person
// {
//     public:
//         char m_name[LEN];
//         int m_age;
// }P;

// void test01()
// {
//     //1.����ͷ�ļ�
//     //2.����������
//     ifstream ifs;
//     //3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//     ifs.open("person.txt",ios::in|ios::binary);
//     if(!ifs.is_open())
//     {
//         cout<<"�������ļ���ʧ�ܣ�"<<endl;
//         return;
//     }
//     //4.���ļ�
//     ifs.read((char *)&P,sizeof(P));
//     cout<<"������"<<P.m_name<<"\n����: "<<P.m_age<<endl;
//     //5���ر��ļ�
//     ifs.close();
// }

// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*ְ������ϵͳ--��������˾������Ա������Ϣ*/
//��˾��ְ����Ϊ���ࣺ��ͨԱ���������ϰ塣��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ�Լ�ְ��
//��ͨԱ��ְ����ɾ�����������
//����ְ������ϰ彻�������񣬲��·������Ա��
//�ϰ�ְ�𣺹���˾��������
/*����ϵͳ����Ҫʵ�ֵĹ������£�
1.�˳�����ϵͳ���˳���ǰ����ϵͳ��
2.����ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ��ְ����š����������ű�ţ�
3.��ʾְ����Ϣ����ʾ��˾������ְ������Ϣ��
4.ɾ����ְְ�������ձ��ɾ��ָ����ְ����
5.�޸�ְ����Ϣ�����ձ���޸�ָ��ְ������Ϣ��
6.����ְ����Ϣ������ְ���ı�Ż�ְ�����������в�����ص���Ա��Ϣ��
7.���ձ�����򣺰���ְ����Ž������򣬻�����������û�ָ����
8.��������ĵ�������ļ��м�¼������ְ����Ϣ�����ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ����*/
#include<iostream>
using namespace std;

int main()
{

    system("pause");
    return 0;
}