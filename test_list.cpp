

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


// /*ְ������ϵͳ--��������˾������Ա������Ϣ*/
// //��˾��ְ����Ϊ���ࣺ��ͨԱ���������ϰ塣��ʾ��Ϣʱ����Ҫ��ʾְ����š�ְ��������ְ����λ�Լ�ְ��
// //��ͨԱ��ְ����ɾ�����������
// //����ְ������ϰ彻�������񣬲��·������Ա��
// //�ϰ�ְ�𣺹���˾��������
// /*����ϵͳ����Ҫʵ�ֵĹ������£�
// 1.�˳�����ϵͳ���˳���ǰ����ϵͳ��
// 2.����ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ��ְ����š����������ű�ţ�
// 3.��ʾְ����Ϣ����ʾ��˾������ְ������Ϣ��
// 4.ɾ����ְְ�������ձ��ɾ��ָ����ְ����
// 5.�޸�ְ����Ϣ�����ձ���޸�ָ��ְ������Ϣ��
// 6.����ְ����Ϣ������ְ���ı�Ż�ְ�����������в�����ص���Ա��Ϣ��
// 7.���ձ�����򣺰���ְ����Ž������򣬻�����������û�ָ����
// 8.��������ĵ�������ļ��м�¼������ְ����Ϣ�����ǰ��Ҫ�ٴ�ȷ�ϣ���ֹ��ɾ����*/
// //#include<iostream>
// #include"workManger.h"
// using namespace std;

// int main()
// {
//     workManager wm;
//     wm.showMenu();
//     int choice=0;
//     cout<<"����������ѡ��"<<endl;
//     cin>>choice;
//     while(true)
//     {
//         switch(choice)
//         {
//             case 0://�˳�ϵͳ
//                 wm.exitSystem();
//                 break;
//             case 1://����ְ��
//                 wm.addEmp();
//                 break;
//             case 2://��ʾְ��
//                 wm.showEmp();
//                 break;
//             case 3://ɾ��ְ��
//                 wm.delEmp();
//                 break;
//             case 4://�޸�ְ��
//                 wm.modEmp();
//                 break;
//             case 5://����ְ��
//                 wm.findEmp();
//                 break;
//             case 6://���ձ������
//                 wm.sortEmp();
//                 break;
//             case 7://��������ĵ�
//                 wm.cleanFile();
//                 break;
//             default:
//                 cout<<"�����������������룡"<<endl;
//                 break;
//         }
//         wm.showMenu();
//         cout<<"����������ѡ��"<<endl;
//         cin>>choice;    
//     }

//     system("pause");
//     return 0;
// }


/*��ͨ�����ͺ���ģ��ĵ��ù���*/
/*���ù������£�
1.�����ͨ�����ͺ���ģ�嶼����ʵ�֣����ȵ�����ͨ����
2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
3.����ģ��Ҳ���Է�������
4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��*/
// #include<iostream>
// using namespace std;

// void func(int a,int b)
// {
//     cout<<"��ͨ�����ĵ���"<<endl;
// }
// template<typename T>
// void func(T a,T b)
// {
//     cout<<"����ģ��ĵ���"<<endl;
// }
// template<typename T>
// void func(T a,T b,T c)
// {
//     cout<<"����ģ������ص���"<<endl;
// }

// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
//     char d='A';
//     char e='B';
//     func(a,b);//�����ͨ�����ͺ���ģ�嶼����ʵ�֣����ȵ�����ͨ����
//     func<>(a,b);//����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
//     func<>(a,b,c);//����ģ��Ҳ���Է�������
//     func(d,e);//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

//     system("pause");
//     return 0;
// }


/*ģ��ľ�����*/
//ģ��ľ����ԣ�1������ʹ��sizeof()  2������ʹ����������  3������ʹ��sizeof...(������)  4������ʹ������ת��
//5������ʹ��sizeof(����::��Ա)  6������ʹ��sizeof(����::��̬��Ա)  7������ʹ��sizeof(����::����ָ��)
//8������ʹ��sizeof(����::��������)  9������ʹ��sizeof(����::����ģ��)  10������ʹ��sizeof(����::����ָ��ģ��)
//11������ʹ��sizeof(����::��������ģ��)  12������ʹ��sizeof(����::����ָ��ģ��)  13������ʹ��sizeof(����::��������ģ��)
//14������ʹ��sizeof(����::����ָ��ģ��)  15������ʹ��sizeof(����::��������ģ��)  16������ʹ��sizeof(����::����ָ��ģ��)
//17������ʹ��sizeof(����::��������ģ��)  18������ʹ��sizeof(����::����ָ��ģ��)  19������ʹ��sizeof(����::��������ģ��)
//20������ʹ��sizeof(����::����ָ��ģ��)  21������ʹ��sizeof(����::��������ģ��)  22������ʹ��sizeof(����::����ָ��ģ��)
//23������ʹ��sizeof(����::��������ģ��)  24������ʹ��sizeof(����::����ָ��ģ��)  25������ʹ��sizeof(����::��������ģ��) 
//26������ʹ��sizeof(����::����ָ��ģ��)  
//27������ʹ��sizeof(����::��������ģ��)  
//28������ʹ��sizeof(����::����ָ��ģ��)  
//29������ʹ��sizeof(����::��������ģ��)  
//
// #include<iostream>
// #include<string>
// using namespace std;
// class Person
// {
//     public:
//         Person(string name,int age)
//         {
//             m_name=name;
//             m_age=age;
//         }
//         string m_name;
//         int m_age;

//         // // Overload the equality operator
//         // bool operator==(const Person& other) const
//         // {
//         //     return m_name == other.m_name && m_age == other.m_age;
//         // }
// };
// template<class T>
// bool compare(T &a,T &b)
// {
//     if(a==b)
//         return true;
//     else
//         return false;
// }
// //����ģ����ػ�
// template<> bool compare( Person &p1,  Person &p2)
// {
//     if(p1.m_name == p2.m_name && p1.m_age == p2.m_age)
//         return true;
//     else
//         return false;
// }
// void test01()
// {
//     int a=10;
//     int b=20;
//     bool ret=compare(a,b);
//     if(ret)
//         cout<<"���"<<endl;
//     else
//         cout<<"�����"<<endl;
// }
// void test02()
// {
//     Person p1("Tom",10);
//     Person p2("Tom",10);
//     bool ret=compare(p1,p2);
//     if(ret)
//         cout<<"���"<<endl;
//     else
//         cout<<"�����"<<endl;

// }
// int main()
// {
//     //test01();
//     test02();

//     system("pause");
//     return 0;
// }

/*��ģ��*/
//��ģ��Ķ��壺template<typename T> class ����{...}
// #include<iostream>
// #include<string>
// using namespace std;
// template<class T1,class T2>
// class Person
// {
//     public:
//         Person(T1 name,T2 age)
//         {
//             m_name=name;
//             m_age=age;  
//         }
//         void showPerson()
//         {
//             cout<<"������"<<m_name<<"  ���䣺"<<m_age<<endl;
//         }
//     private:
//         T1 m_name;
//         T2 m_age;
// };

// int main()
// {
//     //������ģ�����
//     Person<string,int> p1("Tom",18);
//     Person<string,int> p2("Jerry",20);
//     p1.showPerson();
//     p2.showPerson();

//     system("pause");
//     return 0;
// }

/*��ģ���뺯��ģ�������
    1.��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
    2.��ģ����ģ������б��п���ʹ��Ĭ�ϲ���*/
// ��ģ����һ����Ķ��壬������ģ����һ�������Ķ��壻
// ��ģ������ж�����Ͳ�����������ģ��ֻ����һ�����Ͳ�����
// ��ģ������ж����Ա������������ģ��ֻ����һ��������
// ��ģ������ж����Ա������������ģ��ֻ����һ��������
// #include<iostream>
// using namespace std;
// #include<string>

// template<class NameType,class AgeType=int>
// class Person
// {
//     public:
//         Person(NameType name,AgeType age)
//         {
//             this->m_name=name;
//             this->m_age=age;  
//         }
//         void showPerson()
//         {
//             cout<<"������"<<this->m_name<<"  ���䣺"<<this->m_age<<endl;
//         }
//     private:
//         NameType m_name;
//         AgeType m_age;
// };

// int main()
// {
//     //������ģ�����
//     //Person p3("����",18);//��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//     Person<string,int> p1("�����",1000);
//     Person<string> p2("��˽�",1200);//��ģ����ģ������б��п���ʹ��Ĭ�ϲ���
//     p1.showPerson();
//     p2.showPerson();

//      system("pause");
//      return 0;
// }


// /*��ģ���г�Ա�����Ĵ���ʱ��*/
// //��ģ���г�Ա��������ͨ���г�Ա��������ʱ����������ģ�
// //1.��ͨ���г�Ա��������ʱ����һ��ʼ�Ϳ��Դ���
// //2.��ģ���г�Ա��������ʱ�����ڵ���ʱ�Ŵ���
// #include<iostream>
// using namespace std;
// class Person1
// {
//     public:
//         void ShowPerson1()
//         {
//             cout<<"Person1��������"<<endl;
//         }
// };
// class Person2
// {
//     public:
//         void ShowPerson2()
//         {
//             cout<<"Person2��������"<<endl;
//         }
// };
// template<class T>
// class Person
// {
//     public:
//         void func1()
//         {
//             per.ShowPerson1();
//         }
//         void func2()
//         {
//             per.ShowPerson2();
//         }
//     private:
//         T per;
// };

// int main()
// {
//     Person1 p1;
//     Person2 p2;
//     p1.ShowPerson1();
//     p2.ShowPerson2();
//     Person<Person1> p3;//��ģ���г�Ա��������ʱ�����ڵ���ʱ�Ŵ���
//     p3.func1();//����ʱ�Ŵ���
//     //p3.func2();//���������ģ���г�Ա��������ʱ�����ڵ���ʱ�Ŵ���
//     Person<Person2> p4;//��ģ���г�Ա��������ʱ�����ڵ���ʱ�Ŵ���
//     p4.func2();//����ʱ�Ŵ���
//     //p4.func1();//���������ģ���г�Ա��������ʱ�����ڵ���ʱ�Ŵ���

//     system("pause");
//     return 0;
// }


// /*��ģ���������������*/
// //��ģ��ʵ�������Ķ����������εķ�ʽ��
// //1.ָ�����������--ֱ����ʾ�������������
// //2.����ģ�廯--�������еĲ�����Ϊģ����д���
// //3.������ģ�廯--�������������ģ�廯���д���
// #include<iostream>
// using namespace std;
// #include<string>

// template<class T1,class T2>
// class Person
// {
//     public:
//         Person(T1 name,T2 age)
//         {
//             this->m_Name=name;
//             this->m_Age=age;
//         }
//         T1 m_Name;
//         T2 m_Age;
// };
//
// void showPerson1(Person<string,int> &p)//ָ�����������--ֱ����ʾ�������������
// {
//     cout<<"������"<<p.m_Name<<"  ���䣺"<<p.m_Age<<endl;
// }
// template<class T1,class T2>
// void showPerson2(Person<T1,T2> &p)//����ģ�廯--�������еĲ�����Ϊģ����д���
// {
//     cout<<"������"<<p.m_Name<<"  ���䣺"<<p.m_Age<<endl;
// }
// template<class T>
// void showPerson3(T &p)//������ģ�廯--�������������ģ�廯���д���
// {
//     cout<<"������"<<p.m_Name<<"  ���䣺"<<p.m_Age<<endl;
// }
//
// void test01()
// {
//     Person<string,int>p1("�����",100);
//     showPerson1(p1);//ָ�����������--ֱ����ʾ�������������
// }
// void test02()
// {
//     Person<string,int>p2("��˽�",120);
//     showPerson2(p2);//ָ�����������--ֱ����ʾ�������������
// }
// void test03()
// {
//     Person<string,int>p3("��ɮ",40);
//     showPerson3(p3);//����ģ�廯--�������еĲ�����Ϊģ����д���
// }
//
// int main()
// {
//     test01();
//     test02();
//     test03();
    
//     system("pause");
//     return 0;
// }


/*��ģ����̳�*/
//����ģ�������̳�ʱ����Ҫע�����¼��㣺
//1.������̳еĸ�����һ����ģ��ʱ������������ʱ����ָ�������ģ��������ͣ�����������޷�����������ڴ棻
//2.��������ָ���������е��������ͣ�����Ҳ��Ҫ��Ϊ��ģ�壻
// #include<iostream>
// using namespace std;

// template<class T>
// class Base
// {
//     public:
//         Base()
//         {
//             cout<<"Base���캯������"<<endl;
//         }
//     T m_Date;
// };
// //����̳еĸ�����һ����ģ��ʱ������������ʱ����ָ�������ģ��������ͣ�����������޷�����������ڴ�
// class Son:public Base<int>
// {
//     public:
//         Son()
//         {
//             cout<<"Son���캯������"<<endl;
//         }
// };
// //��������ָ���������е��������ͣ�����Ҳ��Ҫ��Ϊ��ģ��
// template<class T1,class T2>
// class Son2:public Base<T1>
// {
//     public:
//         Son2()
//         {
//             cout<<"Son2���캯������"<<endl;
//             cout<<"T1������:"<<typeid(T1).name()<<endl;
//             cout<<"T2������:"<<typeid(T2).name()<<endl;
//         }
//         T2 m_Date2;
// };

// int main()
// {
//     Son s1;//����̳еĸ�����һ����ģ��ʱ������������ʱ����ָ�������ģ��������ͣ�����������޷�����������ڴ�
//     Son2<int,double> s2;//��������ָ���������е��������ͣ�����Ҳ��Ҫ��Ϊ��ģ��

//     system("pause");
//     return 0;
// }


// /*��ģ���Ա��������ʵ��*/
// #include<iostream>
// #include<string>
// using namespace std;

// template<class T1,class T2>
// class Person
// {
//     public:
//         Person(T1 name,T2 age);
//         void showPerson();
//     private:
//         T1 m_Name;
//         T2 m_Age;
// };
// //��ģ�幹�캯������ʵ��
// template<class T1,class T2>
// Person<T1,T2>::Person(T1 name,T2 age)
// {
//     this->m_Age=age;
//     this->m_Name=name;
// }
// //��ģ���Ա��������ʵ��
// template<class T1,class T2>
// void Person<T1,T2>::showPerson()
// {
//     cout<<"������"<<this->m_Name<<" ���䣺"<<this->m_Age<<endl;
// }

// int main()
// {
//     Person<string,int> p1("����",18);
//     Person<string,int> p2("����",20);
//     p1.showPerson();
//     p2.showPerson();

//     system("pause");
//     return 0;
// }


// /*��ģ����ļ���д���⼰���*/
// //��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
// //�������1��ֱ�Ӱ���.cppԴ�ļ�
// //�������2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��
// #include"person.hpp"
// // #include<iostream>
// // #include<string>
// // using namespace std;
// // template<class T1,class T2>
// // class Person
// // {
// //     public:
// //         Person(T1 name,T2 age);
// //         void showPerson();
// //     private:
// //         T1 m_Name;
// //         T2 m_Age;
// // };
// // //��ģ�幹�캯������ʵ��
// // template<class T1,class T2>
// // Person<T1,T2>::Person(T1 name,T2 age)
// // {
// //     this->m_Age=age;
// //     this->m_Name=name;
// // }
// // //��ģ���Ա��������ʵ��
// // template<class T1,class T2>
// // void Person<T1,T2>::showPerson()
// // {
// //     cout<<"������"<<this->m_Name<<" ���䣺"<<this->m_Age<<endl;
// // }

// int main()
// {
//     Person<string,int> p1("����",18);
//     p1.showPerson();

//     system("pause");
//     return 0;
// }


// /*��ģ������Ԫ*/
// //ȫ�ֺ�������ʵ��--ֱ����������������
// //ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ�ʹ�ùؼ���friend������Ԫ����
// #include<iostream>
// #include<string>
// using namespace std;

// //��ǰ�ñ�����֪��Person��Ĵ���
// template<class T1,class T2>
// class Person;

// //ȫ�ֺ�������ʵ��
// template<class T1,class T2>
// void showPerson2(Person<T1,T2> &p)
// {
//     cout<<"ȫ�ֺ�������ʵ�֣�"<<endl;
//     cout<<"������"<<p.m_Name<<" ���䣺"<<p.m_Age<<endl;
// }

// template<class T1,class T2>
// class Person
// {
//     //1.ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ�ʹ�ùؼ���friend������Ԫ����
//     friend void showPerson(Person<T1,T2> &p)
//     {
//         cout<<"ȫ�ֺ�������ʵ�֣�"<<endl;
//         cout<<"������"<<p.m_Name<<" ���䣺"<<p.m_Age<<endl;
//     }
//     //2.ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ�ʹ�ùؼ���friend������Ԫ����
//     friend void showPerson2<>(Person<T1,T2> &p);

//     public:
//         Person(T1 name,T2 age)
//         {
//             this->m_Name=name;
//             this->m_Age=age;
//         }
//     private:
//         T1 m_Name;
//         T2 m_Age;
// };

// int main()
// {
//     Person<string,int> p1("����",18);
//     Person<string,int> p2("����",20);
//     showPerson(p1);//ȫ�ֺ�������ʵ��--ֱ����������������
//     showPerson2(p2);//ȫ�ֺ�������ʵ��--��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ�ʹ�ùؼ���friend������Ԫ����

//     system("pause");
//     return 0;
// }


// /*��ģ����ذ���--ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//     1.���Զ��������������Լ��Զ����������͵����ݽ��д洢
//     2.�������е����ݴ洢������
//     3.���캯���п��Դ������������
//     4.�ṩ��Ӧ�Ŀ������캯���Լ�Operator=��ֹǳ��������
//     5.�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//     6.����ͨ���±�ķ������������е�Ԫ��
//     7.���Ի�ȡ�����е�ǰԪ�����������������
// */
// #include<iostream>
// #include<string>
// using namespace std;

// //�Զ�����������--Person��
// class Person
// {
//     public:
//         Person() // Default constructor
//         {
//             this->m_Name = "";
//             this->m_Age = 0;
//         }

//         Person(string name, int age)
//         {
//             this->m_Name = name;
//             this->m_Age = age;
//         }

//         //����<<�����
//         friend ostream& operator<<(ostream& os, const Person& person)
//         {
//             os << "Name: " << person.m_Name << ", Age: " << person.m_Age<<endl;
//             return os;
//         }

//         string m_Name;
//         int m_Age;
// };
// //�Զ���������ģ��
// template<class T>
// class MyArray
// {
//     public:
//         MyArray(int capacity=10)//���캯��
//         {
//             this->m_Capacity=capacity;
//             this->m_Size=0;
//             this->m_pAddr= new T[this->m_Capacity];//�ڶ�����������ռ�
//         }
//         //�������캯��
//         MyArray(const MyArray &arr)//���
//         {
//             this->m_Capacity=arr.m_Capacity;
//             this->m_Size=arr.m_Size;
//             this->m_pAddr=new T[this->m_Capacity];//�ڶ�����������ռ�
//             for(int i=0;i<this->m_Size;i++)
//             {
//                 this->m_pAddr[i]=arr.m_pAddr[i];
//             }
//         }
//         //����=�����
//         MyArray& operator=(const MyArray &arr)//���
//         {
//             if(this==&arr)//���Ҹ�ֵ�ж�
//                 return *this;
//             //�ͷ�ԭ�пռ�
//             if(this->m_pAddr!=nullptr)
//             {
//                 delete[] this->m_pAddr;
//                 this->m_pAddr=nullptr;
//             }
//             this->m_Capacity=arr.m_Capacity;
//             this->m_Size=arr.m_Size;
//             this->m_pAddr=new T[this->m_Capacity];//�ڶ�����������ռ�
//             for(int i=0;i<this->m_Size;i++)
//             {
//                 this->m_pAddr[i]=arr.m_pAddr[i];
//             }
//             return *this;
//         }
//         //β�巨
//         void push_back(const T &val)
//         {
//             if(this->m_Size>=this->m_Capacity)
//             {
//                 cout<<"�����������޷��������ݣ�"<<endl;
//                 return;
//             }
//             this->m_pAddr[this->m_Size]=val;//�����ݲ��뵽����ĩβ
//             this->m_Size++;//����Ԫ��������1
//         }
//         //βɾ��
//         void pop_back()
//         {
//             if(this->m_Size<=0)
//             {
//                 cout<<"�����ѿգ��޷�ɾ�����ݣ�"<<endl;
//                 return;
//             }
//             this->m_Size--;//����Ԫ��������1
//         }
//         //�����±������
//         T& operator[](int index)
//         {
//             if(index<0||index>=this->m_Size)
//             {
//                 cout<<"�±�Խ�磡"<<endl;
//                 exit(-1);
//             }
//             return this->m_pAddr[index];//��������Ԫ��
//         }
//         //��ȡ��������
//         int getCapacity()
//         {
//             return this->m_Capacity;
//         }
//         //��ȡ���鵱ǰԪ������
//         int getSize()
//         {
//             return this->m_Size;
//         }
//         //��������
//         ~MyArray()
//         {
//             if(this->m_pAddr!=nullptr)
//             {
//                 delete[] this->m_pAddr;//�ͷŶ����ռ�
//                 this->m_pAddr=nullptr;
//             }
//         }
//         //��ӡ����Ԫ��
//         void printArray()
//         {
//             for(int i=0;i<this->m_Size;i++)
//             {
//                 cout<<this->m_pAddr[i]<<" ";
//             }
//             cout<<endl;
//         }
//     private:
//         T* m_pAddr;//����ָ��
//         int m_Capacity;//��������
//         int m_Size;//���鵱ǰԪ������
// };
// //�����������Ͳ���
// void test01()
// {
//     MyArray<int> arr1(5);//����һ������Ϊ5������
//     arr1.push_back(1);//��������
//     arr1.push_back(2);
//     arr1.push_back(3);
//     arr1.push_back(4);
//     arr1.push_back(5);
//     arr1.printArray();//��ӡ����Ԫ��
//     cout<<"����������"<<arr1.getCapacity()<<endl;//��ȡ��������
//     cout<<"���鵱ǰԪ��������"<<arr1.getSize()<<endl;//��ȡ���鵱ǰԪ������
//     arr1.pop_back();//ɾ������
//     arr1.printArray();//��ӡ����Ԫ��
// }
// //�Զ����������Ͳ���
// void test02()
// {
//     MyArray<string> arr2(5);//����һ������Ϊ5������
//     arr2.push_back("����");//��������
//     arr2.push_back("����");
//     arr2.push_back("����");
//     arr2.push_back("����");
//     arr2.push_back("Ǯ��");
//     arr2.printArray();//��ӡ����Ԫ��
//     cout<<"����������"<<arr2.getCapacity()<<endl;//��ȡ��������
//     cout<<"���鵱ǰԪ��������"<<arr2.getSize()<<endl;//��ȡ���鵱ǰԪ������
//     arr2.pop_back();//ɾ������
//     arr2.printArray();//��ӡ����Ԫ��
// }
// //�������������operator=
// void test03()
// {
//     MyArray<Person> arr3(5);//����һ������Ϊ5������
//     Person p1("����",18);//����һ��Person����
//     Person p2("����",20);
//     arr3.push_back(p1);//��������
//     arr3.push_back(p2);
//     arr3.printArray();//��ӡ����Ԫ��
//     cout<<"����������"<<arr3.getCapacity()<<endl;//��ȡ��������
//     cout<<"���鵱ǰԪ��������"<<arr3.getSize()<<endl;//��ȡ���鵱ǰԪ������
//     arr3.pop_back();//ɾ������
//     arr3.printArray();//��ӡ����Ԫ��
//     MyArray<Person> arr4=arr3;//�������������operator=
//     arr4.printArray();//��ӡ����Ԫ��
//     cout<<"����������"<<arr4.getCapacity()<<endl;//��ȡ��������
//     cout<<"���鵱ǰԪ��������"<<arr4.getSize()<<endl;//��ȡ���鵱ǰԪ������
//     arr4.pop_back();//ɾ������
//     arr4.printArray();//��ӡ����Ԫ��
// }
// int main()
// {
//     // cout<<"�����������Ͳ��ԣ�"<<endl;
//     // test01();//�����������Ͳ���
//     // cout<<"------------------------"<<endl;
//     // cout<<"�Զ����������Ͳ��ԣ�"<<endl;
//     // test02();//�Զ����������Ͳ���
//     // cout<<"------------------------"<<endl;
//     cout<<"���������operator=���ԣ�"<<endl;
//     test03();//�������������operator=
//     cout<<"------------------------"<<endl;

//     system("pause");
//     return 0;
// }


// /*vector���������������*/
// //������vector
// //�㷨��for_each
// //��������vector<int>::iterator
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<iterator>
// using namespace std;

// void print(int val)
// {
//     cout<<val<<" ";
// }
// void test01()
// {
//     vector<int> v;
//     for(int i=0;i<5;i++)
//     {
//         v.push_back(i+1);//β�巨
//     }
//     cout<<"vector�����е�����:"<<endl;
//     // //���������е�����--ʹ��forѭ��
//     // for(vector<int>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator �õ�vector<int>���������ĵ���������
//     // {
//     //     cout<<*it<<" ";
//     // }
//     // cout<<endl;
//     //ʹ��STL�ṩ�ı�׼�����㷨--for_each����
//     for_each(v.begin(),v.end(),print);//���������е�����--ʹ��STL�ṩ�ı�׼�����㷨--for_each()
//     cout<<endl;
//     // //ԭʼ��ʽ
//     // vector<int>::iterator pBegin=v.begin();
//     // vector<int>::iterator pEnd=v.end();
//     // while(pBegin!=pEnd)
//     // {
//     //     cout<<*pBegin<<" ";
//     //     pBegin++;
//     // }
//     // cout<<endl;
// }
// int main()
// {
//     test01();//vector���������������
    
//     system("pause");
//     return 0;
// }


// /*vector����Զ�����������*/
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// class Person
// {
//     public:
//         Person(string name,int age)
//         {
//             this->m_Name=name;
//             this->m_Age=age;
//         }

//         string m_Name;
//         int m_Age;
// };
// void test01()
// {
//     vector<Person> v;
//     Person p1("����",18);
//     Person p2("����",20);
//     Person p3("����",22);
//     v.push_back(p1);//β�巨
//     v.push_back(p2);//β�巨
//     v.push_back(p3);//β�巨
//     cout<<"vector�����е�����:"<<endl;
//     //���������е�����--ʹ��forѭ��
//     for(vector<Person>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator �õ�vector<int>���������ĵ���������
//     {
//         //cout<<"������"<<(*it).m_Name<<" ���䣺"<<(*it).m_Age<<endl;//ʹ��*��������ʳ�Ա����
//         cout<<"������"<<it->m_Name<<"���䣺"<<it->m_Age<<endl;//ʹ��->��������ʳ�Ա����
//     }
// }
// void test02()
// {
//     vector<Person *> v;
//     Person p1("����",18);
//     Person p2("����",20);
//     Person p3("����",22);
//     v.push_back(&p1);//β�巨
//     v.push_back(&p2);//β�巨
//     v.push_back(&p3);//β�巨
//     cout<<"vector�����е�����:"<<endl;
//     //���������е�����--ʹ��forѭ��
//     for(vector<Person *>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator �õ�vector<int>���������ĵ���������
//     {
//         //cout<<"������"<<(*it).m_Name<<" ���䣺"<<(*it).m_Age<<endl;//ʹ��*��������ʳ�Ա����
//         cout<<"������"<<(*it)->m_Name<<" ���䣺"<<(*it)->m_Age<<endl;//ʹ��->��������ʳ�Ա����
//     } 
// }
// int main()
// {
//     //test01();//vector����Զ�����������
//     test02();//vector����Զ�����������ָ��

//     system("pause");
//     return 0;
// }


// /*vector����Ƕ������*/
// #include<iostream>
// #include<vector>
// using namespace std;

// void test01()
// {
//     vector<vector<int>> v;
//     vector<int> v1;
//     vector<int> v2;
//     vector<int> v3;
//     for(int i=0;i<5;i++)
//     {
//         v1.push_back(i+1);
//         v2.push_back(i+3);
//         v3.push_back(i+5);
//     }
//     v.push_back(v1);//β�巨
//     v.push_back(v2);//β�巨
//     v.push_back(v3);//β�巨
//     cout<<"vector�����е�����:"<<endl;
//     //���������е�����--ʹ��forѭ��
//     for(vector<vector<int>>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator �õ�vector<int>���������ĵ���������
//     {
//         //����Ƕ�������е�����--ʹ��forѭ��
//         for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++)//vector<int>::iterator �õ�vector<int>���������ĵ���������
//         {
//             cout<<*vit<<" ";//ʹ��*��������ʳ�Ա����
//         }
//         cout<<endl;
//     }
//     cout<<"------------------------"<<endl;
// }

// int main()
// {
//     test01();//vector����Ƕ������

//     system("pause");
//     return 0;
// }


// //string��c++�����ַ�������string��������һ���࣬���ڲ���װ��char*ָ�룬��������ַ�������һ��char*�͵�����
// /*string��char*������
//     1��string��һ���࣬char*��һ��ָ�룻
//     2��string���Զ�̬��չ��char*���ܣ�
//     3��string����ֱ��ʹ���±���ʣ�char*��Ҫʹ��ָ����ʣ�
//     4��string����ֱ��ʹ��+�����ӣ�char*��Ҫʹ��strcat�������ӣ�
//     5��string����ֱ��ʹ�ø�ֵ�����=��char*��Ҫʹ��strcpy������ֵ��
//     6��string����ֱ��ʹ��size()������ȡ���ȣ�char*��Ҫʹ��strlen������ȡ���ȣ�
//     7��string����ֱ��ʹ��clear()������գ�char*��Ҫʹ��memset������գ�
//     8��string����ֱ��ʹ��empty()�����ж��Ƿ�Ϊ�գ�char*��Ҫ�ж����ַ��Ƿ�Ϊ'\0'��
//     9��string����ֱ��ʹ��find()���������Ӵ���char*��Ҫʹ��strstr���������Ӵ���
//     10��string����ֱ��ʹ��substr()������ȡ�Ӵ���char*��Ҫʹ��strncpy������ȡ�Ӵ���
//     11��string����ֱ��ʹ��compare()�����Ƚ��ַ�����char*��Ҫʹ��strcmp�����Ƚ��ַ�����
//     12��string����ֱ��ʹ��c_str()����ת��Ϊc����ַ�����char*����Ҫת����
//     13��string����ֱ��ʹ��getline()������ȡһ���ַ�����char*��Ҫʹ��cin.getline()������ȡһ���ַ�����
//     14��string����ֱ��ʹ��getline(cin, str)��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ�����
//     15��string����ֱ��ʹ��getline(cin, str, '\n')��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ�����
//     16��string����ֱ��ʹ��getline(cin, str, ' ')��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ�����
//     17��string����ֱ��ʹ��getline(cin, str, '\t')��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ�����
//     18��string����ֱ��ʹ��getline(cin, str, '\r')��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ�����
//     19��string����ֱ��ʹ��getline(cin, str, '\f')��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ�����
//     20��string����ֱ��ʹ��getline(cin, str, '\v')��ȡһ���ַ�����char*��֧�����ַ�ʽ��ȡһ���ַ���*/
// /*string�Ĺ��캯����
//     string();//Ĭ�Ϲ��캯��
//     string(const char *s);//��C����ַ���ת��ΪC++����ַ���
//     string(const string &str);//�������캯��
//     string(int n,char c);//��n���ַ�c��ɵ��ַ���
// */
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1;//Ĭ�Ϲ��캯��
//     const char *s="hello world!";//��C����ַ���ת��ΪC++����ַ���
//     string str2(s);
//     cout<<"str2:"<<str2<<endl;
//     string str3(str2);//�������캯��
//     cout<<"str3:"<<str3<<endl;
//     string str4(5,'a');//��5���ַ�a��ɵ��ַ���
//     cout<<"str4:"<<str4<<endl;
// }
// int main()
// {
//     test01();//string�Ĺ��캯��

//     system("pause");
//     return 0;
// }


// /*string�ĸ�ֵ����ԭ�ͣ�
//     string &operator=(const char *str);//char*���͵��ַ�����ֵ��string���͵��ַ���
//     string &operator=(const string &str);//���ַ���str��ֵ����ǰ���ַ���
//     string &operator=(char c);//�ַ���ֵ����ǰ���ַ���
//     string &assign(const char *str);//���ַ���str��ֵ����ǰ���ַ���
//     string &assign(const char *str,int n);//���ַ���str��ǰn���ַ���ֵ����ǰ���ַ���
//     string &assign(const string &str);//���ַ���str��ֵ����ǰ���ַ���
//     string &assign(int n,char c);//��n���ַ�c��ֵ����ǰ���ַ���
// */
// #include<iostream>
// #include<string>
// using namespace std;

// void test01()
// {
//     string str1="hello world!";//char*���͵��ַ�����ֵ��string���͵��ַ���
//     cout<<"str1:"<<str1<<endl;
//     string str2=str1;//���ַ���str1��ֵ����ǰ���ַ���
//     cout<<"str2:"<<str2<<endl;
//     string str3="c";//���ַ�c��ֵ����ǰ���ַ���
//     cout<<"str3:"<<str3<<endl;
//     string str4;
//     str4.assign("hello world!");//���ַ���str��ֵ����ǰ���ַ���
//     cout<<"str4:"<<str4<<endl;
//     string str5;
//     str5.assign("hello world!",5);//���ַ���str��ǰ5���ַ���ֵ����ǰ���ַ���
//     cout<<"str5:"<<str5<<endl;
//     string str6;
//     str6.assign(str1);//���ַ���str1��ֵ����ǰ���ַ���
//     cout<<"str6:"<<str6<<endl;
//     string str7;
//     str7.assign(5,'a');//��5���ַ�a��ֵ����ǰ���ַ���
//     cout<<"str7:"<<str7<<endl;
// }

// int main()
// {
//     test01();//string�ĸ�ֵ����

//     system("pause");
//     return 0;
// }


// //string�ַ���ƴ��
// /*string��ƴ�Ӻ���ԭ�ͣ�
//     string &operator+=(const char *str);//����+=����������ַ���strƴ�ӵ���ǰ���ַ���
//     string &operator+=(const string &str);//����+=����������ַ���strƴ�ӵ���ǰ���ַ���
//     string &operator+=(char c);//����+=����������ַ���strƴ�ӵ���ǰ���ַ���
//     string &append(const char *str);//���ַ���strƴ�ӵ���ǰ���ַ���
//     string &append(const char *str,int n);//���ַ���str��ǰn���ַ�ƴ�ӵ���ǰ���ַ���
//     string &append(const string &str);//���ַ���strƴ�ӵ���ǰ���ַ���
//     string &append(const string &s,int pos,int n);//���ַ���s�Ĵ�pos��ʼ��n���ַ�ƴ�ӵ���ǰ���ַ���
// */
// #include<iostream>
// #include<string>
// using namespace std;

// void test01()
// {
//     string str1="��";//char*���͵��ַ�����ֵ��string���͵��ַ���
//     const char *s="��һ��";
//     str1+=s;//����+=����������ַ���sƴ�ӵ���ǰ���ַ���
//     cout<<"str1:"<<str1<<endl;
//     string str2="ѧ��";
//     str1+=str2;//����+=����������ַ���str2ƴ�ӵ���ǰ���ַ���
//     cout<<"str1:"<<str1<<endl;
//     string str3=str1;
//     const char c=':';
//     str3+=c;//����+=����������ַ���str3ƴ�ӵ���ǰ���ַ���
//     cout<<"str3:"<<str3<<endl;
//     cout<<"------------------------"<<endl;
//     string str4="I am a";
//     const char *s1=" student!";
//     str4.append(s1);//���ַ���sƴ�ӵ���ǰ���ַ���
//     cout<<"str4:"<<str4<<endl;
//     string str5="I am a";
//     str5.append(s1,8);//���ַ���s��ǰ8���ַ�ƴ�ӵ���ǰ���ַ���
//     cout<<"str5:"<<str5<<endl;
//     string str6;
//     str6.append(str4);//���ַ���str4ƴ�ӵ���ǰ���ַ���
//     cout<<"str6:"<<str6<<endl;
//     string str7;
//     str7.append(str4,0,6);
//     const char *s2=" ZZU";
//     str7.append(s2).append(s1);
//     cout<<"str7:"<<str7<<endl;//���ַ���s�Ĵ�pos��ʼ��n���ַ�ƴ�ӵ���ǰ���ַ���
// }

// int main()
// {
//     test01();//string��ƴ�Ӻ���

//     system("pause");
//     return 0;
// }


//string�Ĳ��Һ��滻
//���ң�����ָ���ַ����Ƿ���ڣ����ص�һ���ַ����±꣬�Ҳ�������-1
//�滻����ָ���ַ����滻Ϊ�µ��ַ����������滻�ĸ���
/*���Һ��滻�ĺ���ԭ�ͣ�
    int find(const string &str,int pos=0)const;//����ָ���ַ���str�ڵ�ǰ�ַ����е�һ�γ��ֵ�λ�ã���pos��ʼ���ң�Ĭ�ϴ�0��ʼ����
    int find(const char *str,int pos=0)const;//����ָ���ַ���str�ڵ�ǰ�ַ����е�һ�γ��ֵ�λ�ã���pos��ʼ���ң�Ĭ�ϴ�0��ʼ����
    int find(const char *str,int pos,int n)const;//��pos��ʼ����str��ǰn���ַ��ڵ�ǰ�ַ����е�һ�γ��ֵ�λ�ã�Ĭ�ϴ�0��ʼ����
    int find(const char c,int pos=0)const;//�����ַ�c��һ�γ��ֵ�λ��
    int rfind(const string &str,int pos=npos)const;//����str���һ�γ��ֵ�λ�ã���pos��ʼ����
    int rfind(const char *str,int pos=npos)const;//����str���һ�γ��ֵ�λ�ã���pos��ʼ����
    int rfind(const char *str,int pos,int n)const;//��pos��ʼ����str��ǰn���ַ��ڵ�ǰ�ַ��������һ�γ��ֵ�λ��
    int rfind(const char c,int pos=npos)const;//�����ַ�c���һ�γ��ֵ�λ��
    string &replace(int pos,int n,const string &str);//����ǰ�ַ����д�pos��ʼ��n���ַ��滻Ϊstr
    string &replace(int pos,int n,const char *str);//����ǰ�ַ����д�pos��ʼ��n���ַ��滻Ϊstr
    string &replace(int pos,int n,const char *str,int m);//����ǰ�ַ����д�pos��ʼ��n���ַ��滻Ϊstr��ǰm���ַ�
    string &replace(int pos,int n,char c);//����ǰ�ַ����д�pos��ʼ��n���ַ��滻Ϊ�ַ�c
*/
//find�����Ǵ������ң�rfind�����Ǵ�������
//find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ����±꣬rfind�ҵ��ַ����󷵻ز��ҵ����һ���ַ����±�
//replace���滻ʱҪ�ƶ����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
// #include<iostream>
// #include<string>
// using namespace std;
// //string�Ĳ���
// void test01()
// {
//     string str1="abcdefgdehfc";
//     string str2="de";
//     //����ָ���ַ���str�ڵ�ǰ�ַ����е�һ�γ��ֵ�λ�ã���pos��ʼ���ң�Ĭ�ϴ�0��ʼ����
//     int pos=str1.find(str2);
//     if(pos!=-1)
//     {
//         cout<<str2<<" ��str1�е�λ��Ϊ:"<<pos<<endl;
//     }
//     else
//     {
//         cout<<str2<<" ����str1��!"<<endl;
//     }
//     //����ָ���ַ���str�ڵ�ǰ�ַ��������һ�γ��ֵ�λ��
//     int npos=str1.rfind(str2);
//     if(pos!=-1)
//     {
//         cout<<str2<<" ��str1�е�λ��Ϊ:"<<npos<<endl;
//     }
//     else
//     {
//         cout<<str2<<" ����str1��!"<<endl;
//     }
// }
// //string���滻
// void test02()
// {
//     string str1="abcdefg";
//     cout<<"�滻ǰ��str1:"<<str1<<endl;
//     const char *s="12345";
//     str1.replace(2,3,s);//����ǰ�ַ����д�pos��ʼ��n���ַ��滻Ϊstr
//     cout<<"�滻���str1:"<<str1<<endl;
// }
// int main()
// {
//     test01();//string�Ĳ���
//     test02();//string���滻

//     system("pause");
//     return 0;
// }


//string���ַ����Ƚ�
//�ȽϷ�ʽ�����ַ���ASCII��ֵ���бȽϣ�=����0��>����1��<����-1
/*�ַ����ȽϺ���ԭ�ͣ�
    int compare(const string &str)const;
    int compare(const char *c)const;
*/
// #include<iostream>
// #include<string>
// using namespace std;
// //string���ַ����Ƚ�
// void test01()
// {
//     string str1="hello world!";
//     string str2="wello world!";
//     if(str1.compare(str2)==0)
//     {
//         cout<<"str1��str2���!"<<endl;
//     }
//     else if(str1.compare(str2)<0)
//     {
//         cout<<"str1С��str2!"<<endl;
//     }
//     else
//     {
//         cout<<"str1����str2!"<<endl;
//     }
// }
// int main()
// {
//     test01();//string���ַ����Ƚ�

//     system("pause");
//     return 0;
// }


//string�ַ���ȡ
//string�е����ַ��Ĵ�ȡ��ʽ��ʹ���±������[]��at()����
//�±������[]������ֱ�ӷ����ַ����е��ַ������ص����ַ������ã������޸��ַ����е��ַ�
//at()����������ֱ�ӷ����ַ����е��ַ������ص����ַ���ֵ�������޸��ַ����е��ַ�
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1="hello world!";
//     cout<<"str1:"<<str1<<endl;
//     //ʹ���±������[]�����ַ����е��ַ�
//     for(int i=0;i<str1.size();i++)
//     {
//         cout<<str1[i]<<" ";
//     }
//     cout<<endl;
//     //ʹ��at()���������ַ����е��ַ�
//     for(int i=0;i<str1.size();i++)
//     {
//         cout<<str1.at(i)<<" ";
//     }
//     cout<<endl;
//     //ʹ���±������[]�޸��ַ����е��ַ�
//     for(int i=0;i<str1.size();i++)
//     {
//         str1[i]='a'+i;
//     }
//     cout<<"str1:"<<str1<<endl;
//     //ʹ��at()�����޸��ַ����е��ַ�
//     for(int i=0;i<str1.size();i++)
//     {
//         str1.at(i)='A'+i;
//     }
//     cout<<"str1:"<<str1<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// //string�Ĳ����ɾ��--��string�ַ������в����ɾ���ַ�����
// //���룺��ָ��λ�ò���ָ���ַ��������ز�����ַ����ĳ���
// //ɾ����ɾ��ָ��λ�õ��ַ�������ɾ�����ַ����ĳ���
// /*�����ɾ���ĺ���ԭ�ͣ�
//     string &insert(int pos,const char *s);//�����ַ���
//     string &insert(int pos,const string &str);//�����ַ���
//     string &insert(int pos,int n,char c);//��ָ��λ�ò���n���ַ�c
//     string &erase(int pos=0,int n=npos);//ɾ����Pos��ʼ��n���ַ�
// */
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1="hello world!";
//     string str2="student";
//     cout<<"����ǰ��str1:"<<str1<<endl;
//     const char *s="12345";
//     str1.replace(6,5,str2);
//     cout<<"�滻���str1:"<<str1<<endl;
//     str1.insert(6,s);//��ָ��λ�ò����ַ���
//     str1.insert(11,1,' ');
//     cout<<"������str1:"<<str1<<endl;
//     str2.insert(0,5,'a');//��ָ��λ�ò���n���ַ�c
//     str2.insert(5,1,' ');
//     cout<<"������str2:"<<str2<<endl;   
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// //string�ִ�--���ַ����л�ȡ��Ҫ���ִ�
// /*string���ִ�����ԭ�ͣ�
//     string substr(int pos=0,int n=npos)const;//��pos��ʼ��ȡn���ַ���ɵ��ִ���nΪnpos��ʾ��ȡ���ַ���ĩβ
// */
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1="hello world!";
//     cout<<"str1:"<<str1<<endl;
//     string str2=str1.substr(0,5);
//     cout<<"str2:"<<str2<<endl;

//     string str3="zhangsan@163.com";
//     cout<<"str3:"<<str3<<endl;
//     int pos=str3.find('@');
//     string str4=str3.substr(0,pos);
//     cout<<"str4:"<<str4<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector���캯��--����vector����*/
// /*vector���캯��ԭ��:
//     vector(T) v;//����ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//     vector(v.begin(),v.end());//����������Χ�ڵ�Ԫ�ظ��Ƶ�vector������
//     vector(n,elem);//���캯����n��elem����������
//     vector(const vector &vec);//�������캯��
// */
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int> &v)
// {
//     for(vector<int>::iterator it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     vector<int> v1;//Ĭ�Ϲ��캯��
//     for(int i=0;i<10;i++)
//     {
//         v1.push_back(i);
//     }
//     printVector(v1);
//     //����������Χ�ڵ�Ԫ�ظ��Ƶ�vector������
//     vector<int> v2=vector<int>(v1.begin(),v1.end());
//     printVector(v2);
//     //���캯����n��elem����������
//     vector<int> v3=vector<int>(10,100);
//     printVector(v3);
//     //�������캯��
//     vector<int> v4=v3;
//     printVector(v4);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector������ֵ����*/
// /*vector��ֵ����ԭ�ͣ�
//     vector &operator=(const vector &vec);//���صȺŲ�����
//     assign(n,elem);//��n��elem����������
//     assign(beg,end);//����������Χ�ڵ�Ԫ�ظ��Ƶ�vector������
// */
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int> &v)
// {
//     for(vector<int>::iterator it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     vector<int> v1;
//     for(int i=0;i<10;i++)
//     {
//         v1.push_back(i);
//     }
//     printVector(v1);
//     //���صȺŲ�����
//     vector<int> v2=v1;
//     printVector(v2);
//     //����������Χ�ڵ�Ԫ�ظ��Ƶ�vector������
//     vector<int> v3;
//     v3.assign(v1.begin(),v1.end());
//     printVector(v3);
//     //��n��elem����������
//     vector<int> v4;
//     v4.assign(10,100);
//     printVector(v4);
// }
// int main()
// {
//     test01();//vector������ֵ����

//     system("pause");
//     return 0;
// }


// /*vector�����ʹ�С*/
// /*��������ԭ�ͣ�
//     empty();//�ж������Ƿ�Ϊ��
//     capacity();//����������
//     size();//����������Ԫ�صĸ���
//     resize(int num);//����ָ�������ĳ���Ϊnum���������䳤����Ĭ��ֵ�����λ�ã��������ĩβ�����������ȵ�Ԫ�ر�ɾ��
//     resize(int num,elem);//����ָ�������ĳ���Ϊnum���������䳤����elemֵ�����λ�ã��������ĩβ�����������ȵ�Ԫ�ر�ɾ��
// */
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int> &v)
// {
//     for(vector<int>::iterator it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     vector<int> v1;
//     for(int i=0;i<10;i++)
//     {
//         v1.push_back(i);
//     }
//     printVector(v1);
//     if(v1.empty())
//     {
//         cout<<"v1Ϊ��!"<<endl;
//     }
//     else
//     {
//         cout<<"v1��Ϊ��!"<<endl;
//         cout<<"v1������Ϊ:"<<v1.capacity()<<endl;
//         cout<<"v1�Ĵ�СΪ:"<<v1.size()<<endl;
//         v1.resize(15);//����ָ������������Ϊ15,Ĭ����0�����λ��
//         cout<<"����ָ������(��0���)���v1:"<<endl;
//         printVector(v1);
//         v1.resize(5);//����ָ������������Ϊ5,ɾ��ĩβ�����������ȵ�Ԫ��
//         cout<<"����ָ���������v1:"<<endl;
//         printVector(v1);
//         v1.resize(12,30);//����ָ������������Ϊ12,��30�����λ��
//         cout<<"����ָ������(��30���)���v1:"<<endl;
//         printVector(v1);
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector�����ɾ��*/
// /*����ԭ��:
//     push_back(elem);//������ĩβ���һ��Ԫ��elem
//     pop_back();//ɾ������ĩβ��һ��Ԫ��
//     insert(const_iterator pos,elem);//��posλ�ò���һ��Ԫ��elem
//     insert(const_iterator pos,int n,elem);//��posλ�ò���n��Ԫ��elem
//     erase(const_iterator pos);//ɾ��posλ�õ�Ԫ��
//     erase(const_iterator start,const_iterator end);//ɾ��[start,end)��Χ�ڵ�Ԫ��
//     clear();//��������е�����Ԫ��
// */
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int> &v)
// {
//     for(vector<int>::iterator it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     vector<int> v1;
//     for(int i=0;i<5;i++)
//     {
//         v1.push_back((i+1)*10);//β�巨
//     }
//     printVector(v1);//��ӡ����Ԫ��
//     //βɾ
//     v1.pop_back();
//     printVector(v1);
//     //ʹ�õ��������뵥��Ԫ��
//     v1.insert(v1.begin(),100);
//     printVector(v1);
//     //ʹ�õ�����������Ԫ��
//     v1.insert(v1.begin()+1,2,200);
//     printVector(v1);
//     //ʹ�õ�����ɾ��ָ��λ�õ���Ԫ��
//     v1.erase(v1.begin()+2);
//     printVector(v1);
//     //ʹ�õ�����ɾ��ָ�������Ԫ��
//     v1.erase(v1.begin()+1,v1.begin()+5);//ָ����������ҿ�
//     printVector(v1);
// }
// int main()
// {
//     test01();//vector�����ɾ��

//     system("pause");
//     return 0;
// }


// /*vector�������ݴ�ȡ*/
// /*����ԭ�ͣ�
//     at(int idx);//��������idx��ָ������
//     operator[];//��������idx��ָ������
//     front();//���������е�һ������Ԫ��
//     back();//�������������һ������Ԫ��
// */
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int> &v)
// {
//     for(vector<int>::iterator it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     vector<int> v1;
//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     v1.push_back(50);
//     printVector(v1);
//     //��������idx��ָ������
//     cout<<"�����е�һ��Ԫ��Ϊ:"<<v1.front()<<endl;//���������е�һ������Ԫ��
//     cout<<"�����еڶ���Ԫ��Ϊ:"<<v1.at(1)<<endl;
//     cout<<"�����е�����Ԫ��Ϊ:"<<v1[2]<<endl;
//     cout<<"���������һ��Ԫ��Ϊ:"<<v1.back()<<endl;//�������������һ������Ԫ��
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector��������--swap(vec)//��vec���������Ԫ�ؽ��л���*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void printVector(vector<int> &v)
// {
//     for(vector<int>::iterator it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     vector<int> v1;
//     for(int i=0;i<5;i++)
//     {
//         v1.push_back(i+1);
//     }
//     cout<<"����ǰv1�е�Ԫ��:";
//     printVector(v1);
//     vector<int> v2;
//     for(int i=0;i<5;i++)
//     {
//         v2.push_back(5-i);
//     }
//     cout<<"����ǰv2�е�Ԫ��:";
//     printVector(v2);
//     cout<<"<---------------------------->"<<endl;
//     v1.swap(v2);
//     cout<<"������v1�е�Ԫ��:";
//     printVector(v1);
//     cout<<"������v2�е�Ԫ��:";
//     printVector(v2);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vectorԤ���ռ�--����vector�ڶ�̬��չ����ʱ����չ����*/
// //����ԭ�ͣ�reserve(int len);//����Ԥ��len��Ԫ�س��ȵĿռ䣬Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
// #include<iostream>
// #include<vector>
// using namespace std;
// void test01()
// {
//     vector<int> v1;
//     //Ԥ���ռ�
//     v1.reserve(100000);//Ԥ��100000��Ԫ�س��ȵĿռ䣬����vector�ڶ�̬��չ����ʱ����չ����
//     int num=0;
//     int *p=nullptr;
//     for(int i=0;i<100000;i++)
//     {
//         v1.push_back(i+1);//β�巨
//         if(p!=&v1[0])
//         {
//             p=&v1[0];//vector��̬��չ��һ���ڴ棬p����ָ����vector���׵�ַ
//             num++;
//         }    
//     }
//     cout<<"vector��̬��չ�� "<<num<<" ��������"<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*deque���캯��*/
// /*����ԭ�ͣ�
//     deque<T> deqT;//Ĭ�Ϲ��캯��
//     deque(beg,end);���캯����[beg,end)��Χ�ڵ�Ԫ�ؿ���������
//     deque(n,elem);//���캯����n��elem����������
//     deque(const deque &deq);//�������캯��
// */
// #include<iostream>
// #include<deque>
// using namespace std;
// void printDeque(const deque<int> &d)
// {
//     for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     deque<int> d1;//Ĭ�Ϲ��캯��
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(i);//β�巨
//     }
//     printDeque(d1);
//     //���캯����[beg,end)��Χ�ڵ�Ԫ�ؿ���������
//     deque<int> d2(d1.begin(),d1.end());
//     printDeque(d2);
//     //���캯����n��elem����������
//     deque<int> d3(10,100);
//     printDeque(d3);
//     //�������캯��
//     deque<int> d4(d3);
//     printDeque(d4);
// }
// int main()
// {
//     test01();//deque���캯��

//     system("pause");
//     return 0;
// }


// /*deque������ֵ����*/
// /*����ԭ�ͣ�
//     deque &operator=(const deque &deq);//���صȺŲ�����
//     assign(n,elem);//��n��elem����������
//     assign(beg,end);//����������Χ�ڵ�Ԫ�ظ��Ƶ�deque������
// */
// #include<iostream>
// #include<deque>
// using namespace std;
// void printDeque(const deque<int> &d)
// {
//     for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     deque<int> d1;
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(i);//β�巨
//     }
//     printDeque(d1);
//     deque<int> d2=d1;//���صȺŲ�����
//     printDeque(d2);
//     //����������Χ�ڵ�Ԫ�ظ��Ƶ�deque������
//     deque<int> d3;
//     d3.assign(d1.begin(),d1.begin()+5);//ָ����������ҿ�
//     printDeque(d3);
//     //��n��elem����������
//     deque<int> d4;
//     d4.assign(10,100);
//     printDeque(d4);
// }
// int main()
// {
//     test01();//deque������ֵ����

//     system("pause");
//     return 0;
// }


// /*deque������С����*/
// /*����ԭ��:
//     empty();//�ж������Ƿ�Ϊ��
//     size();//����������Ԫ�صĸ���
//     resize(int num);//����ָ�������ĳ���Ϊnum���������䳤����Ĭ��ֵ�����λ�ã��������ĩβ�����������ȵ�Ԫ�ر�ɾ��
//     resize(int num,elem);//����ָ�������ĳ���Ϊnum���������䳤����elemֵ�����λ�ã��������ĩβ�����������ȵ�Ԫ�ر�ɾ��
// */
// #include<iostream>
// #include<deque>
// using namespace std;
// void printDeque(const deque<int> &d)
// {
//     for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     deque<int> d1;
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(i);//β�巨
//     }
//     printDeque(d1);
//     if(d1.empty())
//     {
//         cout<<"d1Ϊ��!"<<endl;
//     }
//     else
//     {
//         cout<<"d1��Ϊ��!"<<endl;
//         cout<<"d1�Ĵ�СΪ:"<<d1.size()<<endl;
//         d1.resize(15);//����ָ������������Ϊ15,Ĭ����0�����λ��
//         cout<<"����ָ������(��0���)���d1:"<<endl;
//         printDeque(d1);
//         d1.resize(5);//����ָ������������Ϊ5,ɾ��ĩβ�����������ȵ�Ԫ��
//         cout<<"����ָ���������d1:"<<endl;
//         printDeque(d1);
//         d1.resize(12,30);//����ָ������������Ϊ12,��30�����λ��
//         cout<<"����ָ������(��30���)���d1:"<<endl;
//         printDeque(d1);
//     }
// }
// int main()
// {
//     test01();//deque������С����

//     system("pause");
//     return 0;
// }


// /*deque�Ĳ����ɾ��*/
// /*����ԭ��
// ���˲��������
//     push_front(elem);//������ͷ�����һ��Ԫ��elem
//     push_back(elem);//������β�����һ��Ԫ��elem
//     pop_front();//ɾ������ͷ����һ��Ԫ��
//     pop_back();//ɾ������β����һ��Ԫ��
// ָ��λ�ò�����
//     insert(const_iterator pos,elem);//��posλ�ò���һ��Ԫ��elem
//     insert(const_iterator pos,int n,elem);//��posλ�ò���n��Ԫ��elem
//     erase(const_iterator pos);//ɾ��posλ�õ�Ԫ��
//     erase(const_iterator start,const_iterator end);//ɾ��[start,end)��Χ�ڵ�Ԫ��
//     clear();//��������е�����Ԫ��
// */
// #include<iostream>
// #include<deque>
// using namespace std;
// void printDeque(const deque<int> &d)
// {
//     for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     deque<int> d1;
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(i);//β�巨
//     }
//     printDeque(d1);//��ӡd1�е�Ԫ��

//     //������ͷ�����һ��Ԫ��elem
//     d1.push_front(100);
//     printDeque(d1);
//     //������β�����һ��Ԫ��elem
//     d1.push_back(200);
//     printDeque(d1);
//     //ɾ������ͷ����һ��Ԫ��
//     d1.pop_front();
//     printDeque(d1);
//     //ɾ������β����һ��Ԫ��
//     d1.pop_back();
//     printDeque(d1);

//     //ʹ�õ�������ָ��λ�ò��뵥��Ԫ��
//     d1.insert(d1.begin(),50);//������ͷ������һ��Ԫ��50
//     printDeque(d1);
//     //ʹ�õ�������ָ��λ�ò�����Ԫ��
//     d1.insert(d1.begin()+1,2,100);//������ͷ����������Ԫ��100
//     printDeque(d1);
//     //ʹ�õ�����ɾ��ָ��λ�õ���Ԫ��
//     d1.erase(d1.begin()+2);//ɾ������ͷ����һ��Ԫ��
//     printDeque(d1);
//     //ʹ�õ�����ɾ��ָ�������Ԫ��
//     d1.erase(d1.begin()+1,d1.begin()+5);//ָ����������ҿ�
//     printDeque(d1);
// }
// int main()
// {
//     test01();//deque�Ĳ����ɾ��

//     system("pause");
//     return 0;
// }


// /*deque���ݵĴ�ȡ*/
// /*����ԭ�ͣ�
//     at(int dex);//��������dex��ָ�������
//     operator[];//��������dex��ָ�������
//     front();//���������е�һ������Ԫ��
//     back();//�������������һ������Ԫ��
// */
// #include<iostream>
// #include<deque>
// using namespace std;
// void printDeque(const deque<int> &d)
// {
//     for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     deque<int> d1;
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(i);//β�巨
//     }
//     printDeque(d1);//��ӡd1�е�Ԫ��
//     cout<<"d1�еĵ�һ������Ԫ��Ϊ:"<<d1.at(0)<<endl;
//     cout<<"d1�еĵڶ�������Ԫ��Ϊ:"<<d1[1]<<endl;
//     cout<<"d1�еĵ�һ������Ԫ��Ϊ:"<<d1.front()<<endl;
//     cout<<"d1�е����һ������Ԫ��Ϊ:"<<d1.back()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*deque��������--sort(iterator beg,iterator end):��beg��end����������Ԫ�ؽ�������*/
// #include<iostream>
// #include<deque>
// #include<algorithm>
// using namespace std;
// void printDeque(const deque<int> &d)
// {
//     for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     deque<int> d1;
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(9-i);
//     }
//     cout<<"����ǰ��";
//     printDeque(d1);
//     sort(d1.begin(),d1.end());//Ĭ���������У���������ҿ�
//     cout<<"�����";
//     printDeque(d1);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*��ί��ְ���--��5λѡ��ABCDE��10λ��ί�ֱ��ÿһλѡ�ִ�֣�ȥ����߷ֺ���ͷֺ�ȡƽ����*/
// /*ʵ�ֲ��裺
//     1������5λѡ�֣��ŵ�vector������
//     2������vector����ȡ��ÿһλѡ�֣�ִ��forѭ�������԰���ί�Ĵ�ִ浽deque������
//     3��sort�㷨��deque�з�����������ȥ����߷ֺ���ͷ�
//     4������deque����������Ԫ�أ��ۼ��ܷ�
//     5����ȡƽ����
// */
// #include<iostream>
// #include<vector>
// #include<deque>
// #include<string>
// #include<algorithm>
// #include<ctime>
// using namespace std;
// class Person
// {
//     public:
//         Person(string name,int score)
//         {
//             this->m_Name=name;
//             this->m_Score=score;
//         }
//         string m_Name;
//         int m_Score;
// };
// void creatPerson(vector<Person> &v)
// {
//     string nameSeed="ABCDE";
//     for(int i=0;i<5;i++)
//     {
//         string name="ѡ��";
//         name+=nameSeed[i];
//         int score=0;
//         Person p(name,score);
//         v.push_back(p);//��������Person����ŵ�vector������
//     }
// }
// void printVector(vector<Person> &v)
// {
//     for(vector<Person>::const_iterator it=v.begin();it!=v.end();it++)
//     {
//         cout<<"������"<<(*it).m_Name<<"     ������"<<(*it).m_Score<<endl;
//     }
//     cout<<endl;
// }
// void setScore(vector<Person> &v)
// {
//     for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
//     {
//         //����deque���������ί��ֽ��
//         deque<int> d;
//         for(int i=0;i<10;i++)
//         {
//             int score=rand()%41+60;
//             d.push_back(score);
//         }
//         // cout<<"ѡ�֣�"<<it->m_Name<<"   ��ί��֣�";
//         // for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//         // {
//         //     cout<<*it<<" ";
//         // }
//         // cout<<endl;
//         //����
//         sort(d.begin(),d.end());
//         //ȥ����߷ֺ���ͷ�
//         d.pop_back();
//         d.pop_front();
//         //ȡƽ����
//         int sum=0;
//         for(deque<int>::iterator it=d.begin();it!=d.end();it++)
//         {
//             sum+=*it;
//         }
//         int avg=sum/d.size();
//         //��ѡ�ָ���
//         it->m_Score=avg;
//     }
// }
// int main()
// {
//     //���������
//     srand((unsigned int)time(NULL));
//     //����5λѡ��
//     vector<Person> v;
//     creatPerson(v);
//     //printVector(v);
//     //��5λѡ�ִ��
//     setScore(v);
//     //��ʾ������
//     printVector(v);

//     system("pause");
//     return 0;
// }


// /*stack�Ļ���������ýӿ�*/
// /*������� 
//     1��stack��һ���Ƚ���������ݽṹ��ֻ��һ�����ڣ��������ݳ�Ϊ��ջ��ȡ�����ݳ�Ϊ��ջ
//     2��ջֻ�ж��˵�Ԫ�ز��ܱ����ʹ�ã����ջ�������б�����Ϊ
//     3��ջ�����ж��Ƿ�Ϊ�գ����Է���Ԫ�ظ���*/
// /*���ýӿڣ�
//     1�����캯����stack(T) stk;//Ĭ�Ϲ�����ʽ
//                 stack(const stack &stk)//�������캯��
//     2����ֵ������stack& operator=(const stack &stk)//���ظ�ֵ������
//     3�����ݴ�ȡ��push(elem)//��ջ���������Ԫ��
//                 pop()//��ջ���Ƴ���һ������Ԫ��
//                 top()//����ջ��Ԫ��
//     4����С������empty()//�ж϶�ջ�Ƿ�Ϊ��
//                 size()//����ջ�Ĵ�С*/
// #include<iostream>
// #include<stack>
// using namespace std;
// void test01()
// {
//     stack<int> stk1;
//     stk1.push(10);
//     stk1.push(20);
//     stk1.push(30);
//     stk1.push(40);
//     stack<int> stk2=stk1;
//     cout<<"ջstk2��ԭʼ��СΪ:"<<stk2.size()<<endl;
//     while(!stk2.empty())
//     {
//         //�鿴ջ������Ԫ��
//         cout<<"ջ��Ԫ��Ϊ:"<<stk2.top()<<endl;
//         //�Ƴ�ջ��Ԫ��
//         stk2.pop();
//     }
//     cout<<"ջstk2�����մ�СΪ:"<<stk2.size()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*queue����������ýӿ�*/
// /*�������
//     1��queue��һ���Ƚ��ȳ������ݽṹ��������������
//     2���������������һ����������Ԫ�أ�����һ���Ƴ�����Ԫ��
//     3������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//     4�������н������ݳ�Ϊ��ӣ������ݳ�Ϊ����*/
// /*���ýӿڣ�
//     1�����캯����queue(T) que;//Ĭ�Ϲ�����ʽ
//                 queue(const queue &que)//�������캯��
//     2����ֵ������queue& operator=(const queue &que)//���ظ�ֵ������
//     3�����ݴ�ȡ��push(elem)//����β���Ԫ��
//                 pop()//�Ӷ�ͷ�Ƴ���һ������Ԫ��
//                 front()//���ص�һ��Ԫ��
//                 back()//�������һ��Ԫ��
//     4����С������empty()//�ж϶����Ƿ�Ϊ��
//                 size()//���ض��еĴ�С*/
// #include<iostream>
// #include<queue>
// using namespace std;
// void test01()
// {
//     queue<int> que1;
//     que1.push(10);
//     que1.push(20);
//     que1.push(30);
//     que1.push(40);
//     que1.push(50);
//     que1.push(60);
//     que1.push(70);
//     que1.push(80);
//     que1.push(90);
//     queue<int> que2=que1;
//     cout<<"���е�ԭʼ��СΪ:"<<que2.size()<<endl;
//     //�鿴�������һ��Ԫ��
//     cout<<"�������һ������Ԫ��Ϊ:"<<que2.back()<<endl;
//     while(!que2.empty())
//     {
//         //�鿴��ͷ����Ԫ��
//         cout<<"��ͷ����Ԫ��Ϊ:"<<que2.front()<<endl;
//         cout<<"�Ƴ���ͷ����Ԫ��:"<<que2.front()<<endl;
//         //�Ƴ���ͷ����Ԫ��
//         que2.pop();
//     }
//     cout<<"���е����մ�СΪ:"<<que2.size()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list�Ļ�������:
//     1��������һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//     2��������һϵ�н����ɣ�����ɴ洢����Ԫ�ص�������ʹ洢��һ������ַ��ָ�������
//     3��STL�е�������һ��˫��ѭ��������������Ĵ洢��ʽ�����������Ĵ洢�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
//     4��list���ŵ㣺���ö�̬�洢���䣬��������ڴ���˷Ѻ����
//                 ����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
//     5��list��ȱ�㣺���������ǿռ䣨ָ���򣩺�ʱ�䣨����������ķѽϴ�*/
// /*list���캯��ԭ�ͣ�
//     list<T> lst;//Ĭ�Ϲ��캯��
//     list(beg,end);//��[beg,end)���������Ԫ�ؿ�������������
//     lsit(n,elem);//��n������Ԫ��elem��������������
//     list(const list &lst)//�������캯��*/
// #include<iostream>
// #include<list>
// using namespace std;
// void printList(const list<int> &L)
// {
//     for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     list<int> lst1;//Ĭ�Ϲ��캯��
//     lst1.push_back(10);
//     lst1.push_back(20);
//     lst1.push_back(30);
//     lst1.push_back(40);
//     lst1.push_back(50);
//     printList(lst1);
//     //��[beg,end)���������Ԫ�ؿ�������������
//     list<int> lst2(lst1.begin(),lst1.end());
//     printList(lst2);
//     //�������캯��
//     list<int> lst3(lst1);
//     printList(lst3);
//     //��n������Ԫ��elem��������������
//     list<int> lst4(5,100);
//     printList(lst4);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list������ֵ�ͽ���*/
// /*����ԭ�ͣ�
//     assign(beg,end);//��[beg,end)���������Ԫ�ظ�ֵ����������
//     assign(n,elem);//��n��elem������ֵ����������
//     list &operator=(const list &L);//���صȺŲ�����
//     swap(lst);//��lst�뱾�������Ԫ�ؽ��н���
// */
// #include<iostream>
// #include<list>
// using namespace std;
// void printList(const list<int> &L)
// {
//     for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     list<int> lst1;//Ĭ�Ϲ��캯��
//     lst1.push_back(10);
//     lst1.push_back(20);
//     lst1.push_back(30);
//     lst1.push_back(40);
//     lst1.push_back(50);
//     printList(lst1);
//     //��[beg,end)���������Ԫ�ظ�ֵ����������
//     list<int> lst2;
//     lst2.assign(lst1.begin(),lst1.end());
//     printList(lst2);
//     //��n��elem������ֵ����������
//     list<int> lst3;
//     lst3.assign(5,100);
//     printList(lst3);
//     //���صȺŲ�����
//     list<int> lst4=lst3;
//     printList(lst4);
//     //��lst�뱾�������Ԫ�ؽ��н���
//     lst4.swap(lst1);
//     cout<<"��lst1�������lst4Ϊ:";
//     printList(lst4);
//     cout<<"��lst4�������lst1Ϊ:";
//     printList(lst1);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list������С����*/
// /*����ԭ�ͣ�
//     size();//����������Ԫ�صĸ���
//     empty();//�ж������Ƿ�Ϊ��
//     resize(int num);//����ָ�������ĳ���Ϊnum���������䳤����Ĭ��ֵ�����λ�ã��������ĩβ�����������ȵ�Ԫ�ر�ɾ��
//     resize(int num,elem);//����ָ�������ĳ���Ϊnum���������䳤����elemֵ�����λ�ã��������ĩβ�����������ȵ�Ԫ�ر�ɾ��
// */
// #include<iostream>
// #include<list>
// using namespace std;
// void printList(const list<int> &L)
// {
//     for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     list<int> lst1;//Ĭ�Ϲ��캯��
//     lst1.push_back(10);
//     lst1.push_back(20);
//     lst1.push_back(30);
//     lst1.push_back(40);
//     lst1.push_back(50);
//     printList(lst1);
//     if(lst1.empty())
//     {
//         cout<<"lst1Ϊ��!"<<endl;
//     }
//     else
//     {
//         //����������Ԫ�صĸ���
//         cout<<"lst1������Ԫ�صĸ���Ϊ:"<<lst1.size()<<endl;
//         //����ָ�������ĳ���Ϊ4��ɾ������Ԫ��
//         lst1.resize(4);
//         printList(lst1);
//         //����ָ�������ĳ���Ϊ10�����ӵ�λ����100���
//         lst1.resize(10,100);
//         printList(lst1);
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list���������ɾ������*/
// /*����ԭ�ͣ�
//     push_back(elem);//������β������һ��Ԫ��
//     pop_back();//ɾ�����������һ������Ԫ��
//     push_front(elem);//������ͷ������һ������Ԫ��
//     pop_front();//������ͷ��ɾ��һ������Ԫ��
//     insert(pos,elem);//������ָ��λ�ü���һ������Ԫ�أ����������ݵ�λ��
//     insert(pos,n,elem);//������ָ��λ�ü���n������Ԫ�أ��޷���ֵ
//     insert(pos,beg,end);//������ָ��λ�ü�������[beg,end)������Ԫ�أ��޷���ֵ
//     clear();//�Ƴ���������������Ԫ��
//     erase(beg,end);//�Ƴ�����[beg,end)�е�����Ԫ�أ�������һ�����ݵ�λ��
//     erase(pos);//ɾ��ָ��λ�õ����ݣ�������һ�����ݵ�λ��
//     remove(elem);//ɾ��������������elemƥ�������Ԫ��
// */
// #include<iostream>
// #include<list>
// using namespace std;
// void printList(const list<int> &L)
// {
//     for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     list<int> L1;
//     L1.push_back(10);
//     L1.push_back(20);
//     L1.push_back(30);
//     L1.push_back(40);
//     L1.push_back(50);
//     printList(L1);
//     //ɾ�����������һ������Ԫ��
//     L1.pop_back();
//     printList(L1);
//     //������ͷ������һ������Ԫ��
//     L1.push_front(100);
//     printList(L1);
//     //������ͷ��ɾ��һ������Ԫ��
//     L1.pop_front();
//     printList(L1);
//     //������ָ��λ�ü���һ������Ԫ�أ����������ݵ�λ��
//     L1.insert(L1.end(),50);
//     printList(L1);
//     //������ָ��λ�ü���n������Ԫ�أ��޷���ֵ    
//     L1.insert(L1.begin(),2,300);
//     printList(L1);
//     //������ָ��λ�ü�������[beg,end)������Ԫ�أ��޷���ֵ
//     //list<int>::iterator it=L1.begin();
//     L1.insert(L1.end(),L1.begin(),++L1.begin());
//     //L1.insert(it,it+2,it+7);
//     printList(L1);
//     //�Ƴ�����[beg,end)�е�����Ԫ�أ�������һ�����ݵ�λ��
//     L1.erase(L1.begin(),++L1.begin());
//     printList(L1);
//     //ɾ��ָ��λ�õ����ݣ�������һ�����ݵ�λ��
//     L1.erase(L1.begin());
//     printList(L1);
//     //ɾ��������������elemƥ�������Ԫ��
//     L1.remove(300);
//     printList(L1);
//     //�Ƴ���������������Ԫ��
//     L1.clear();
//     cout<<"list�����Ĵ�СΪ:"<<L1.size()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list���ݴ�ȡ*/
// /*����ԭ�ͣ�
//     front();//���ص�һ��Ԫ��
//     back();//�������һ��Ԫ��*/
// #include<iostream>
// #include<list>
// using namespace std;
// void printList(const list<int> &L)
// {
//     for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     list<int> L1;
//     L1.push_back(10);
//     L1.push_back(20);
//     L1.push_back(30);
//     L1.push_back(40);
//     L1.push_back(50);
//     printList(L1);
//     cout<<"list�����е�һ������Ԫ��Ϊ: "<<L1.front()<<endl;
//     cout<<"list���������һ������Ԫ��Ϊ: "<<L1.back()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list��ת��������ԭ�ͣ�
//     reverse();//��ת����
//     sort();//��������Ĭ�ϰ���������
// */
// #include<iostream>
// #include<list>
// using namespace std;
// void printList(const list<int> &L)
// {
//     for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     list<int> L1;
//     L1.push_back(10);
//     L1.push_back(20);
//     L1.push_back(30);
//     L1.push_back(40);
//     L1.push_back(50);
//     printList(L1);
//     //��ת����
//     L1.reverse();
//     printList(L1);
//     //��������Ĭ�ϰ���������
//     L1.sort();
//     printList(L1);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*list������--���Ȱ���������������У���������ͬʱ����������*/
// #include<iostream>
// #include<list>
// #include<string>
// using namespace std;
// class Person
// {
//     public:
//         Person(string name,int age,int height)
//         {
//             this->m_Name=name;
//             this->m_Age=age;
//             this->m_Height=height;
//         }
//         string m_Name;
//         int m_Age;
//         int m_Height;
// };
// void printList(const list<Person> &L)
// {
//     for(list<Person>::const_iterator it=L.begin();it!=L.end();it++)
//     {
//         cout<<"������"<<(*it).m_Name<<"     ���䣺"<<(*it).m_Age<<"     ��ߣ�"<<(*it).m_Height<<endl;
//     }
// }
// bool compare(Person p1,Person p2)
// {
//     if(p1.m_Age==p2.m_Age)
//     {
//         return p1.m_Height>p2.m_Height;
//     }
//     return p1.m_Age<p2.m_Age;
// }
// void test01()
// {
//     list<Person> L;
//     //��������
//     Person p1("����",40,175);
//     Person p2("�ܲ�",40,180);
//     Person p3("��Ȩ",40,170);
//     Person p4("�ŷ�",35,170);
//     Person p5("����",36,200);
//     //��������
//     L.push_back(p1);
//     L.push_back(p2);
//     L.push_back(p3);
//     L.push_back(p4);
//     L.push_back(p5);
//     //����ǰ��������
//     cout<<"����ǰ��"<<endl;
//     printList(L);
//     //����
//     cout<<"�����"<<endl;
//     L.sort(compare);
//     printList(L);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set/multiset�����������
//     1������Ԫ�ض����ڲ���ʱ���Զ�����
//     2��set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�ֵ�
//     3��set���������������ظ���Ԫ�أ�multiset�������������ظ���Ԫ��*/
// /*set����͸�ֵ
//     ���캯����set<T> st;//Ĭ�Ϲ��캯��
//              set(cost set &se);//�������캯��
//     ��ֵ������set& operator=(const set &st);//���صȺŲ�����*/
// #include<iostream>
// #include<set>
// using namespace std;
// void printSet(const set<int> &S)
// {
//     for(set<int>::const_iterator it=S.begin();it!=S.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     set<int> S1;
//     S1.insert(10);//��������
//     S1.insert(30);
//     S1.insert(30);//set�����������ͬ�����ݣ�ͬһ����ֻ����һ��
//     S1.insert(50);
//     S1.insert(40);
//     S1.insert(20);
//     printSet(S1);
//     //�������캯��
//     set<int> S2(S1);
//     printSet(S2);
//     //���صȺŲ�����
//     set<int> S3=S1;
//     printSet(S3);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set��С�ͽ���*/
// /*����ԭ�ͣ�
//     size();//����������Ԫ�ص���Ŀ
//     empty();//�ж������Ƿ�Ϊ��
//     swap(st);//����������������*/
// #include<iostream>
// #include<set>
// using namespace std;
// void printSet(const set<int> &S)
// {
//     for(set<int>::const_iterator it=S.begin();it!=S.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     set<int> S1;
//     S1.insert(10);//��������
//     S1.insert(30);
//     S1.insert(50);
//     S1.insert(40);
//     S1.insert(20);
//     printSet(S1);
//     cout<<"S1�����е�Ԫ�ظ���Ϊ:"<<S1.size()<<endl;//�鿴������Ԫ�ص���Ŀ
//     if(S1.empty())
//     {
//         cout<<"S1����Ϊ��!"<<endl;
//     }
//     else
//     {
//         set<int> S2;
//         S2.insert(100);//��������
//         S2.insert(300);
//         S2.insert(500);
//         S2.insert(400);
//         S2.insert(200);    
//         printSet(S2);
//         cout<<"S2�����е�Ԫ�ظ���Ϊ:"<<S2.size()<<endl;//�鿴������Ԫ�ص���Ŀ
//         S1.swap(S2);
//         cout<<"�����������S1�е�Ԫ��Ϊ:";
//         printSet(S1);
//         cout<<"�����������S2�е�Ԫ��Ϊ:";
//         printSet(S2);
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set���������ɾ������*/
// /*����ԭ�ͣ�
//     insert(elem);//�������в���һ������Ԫ��
//     clear();//�Ƴ���������������Ԫ��
//     erase(beg,end);//�Ƴ�����[beg,end)�е�����Ԫ�أ�������һ��Ԫ�صĵ�����
//     erase(pos);//ɾ��ָ��λ�õ����ݣ�������һ��Ԫ�صĵ�����
//     erase(elem);//ɾ��������������elemƥ�������Ԫ��*/
// #include<iostream>
// #include<set>
// using namespace std;
// void printSet(const set<int> &S)
// {
//     for(set<int>::const_iterator it=S.begin();it!=S.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     set<int> S1;
//     S1.insert(10);//��������
//     S1.insert(30);
//     S1.insert(50);
//     S1.insert(40);
//     S1.insert(20);
//     printSet(S1);
//     //ɾ��ָ��λ�õ����ݣ�������һ��Ԫ�صĵ�����
//     S1.erase(S1.begin());
//     printSet(S1);
//     //ɾ��������������elemƥ�������Ԫ��*/
//     S1.erase(20);
//     printSet(S1);
//     //�Ƴ�����[beg,end)�е�����Ԫ�أ�������һ��Ԫ�صĵ�����
//     S1.erase(S1.begin(),++S1.begin());
//     printSet(S1);
//     //�Ƴ���������������Ԫ��
//     S1.clear();
//     cout<<"S1�����е�Ԫ�ظ���Ϊ:"<<S1.size()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set���Һ�ͳ��*/
// /*����ԭ�ͣ�
//     find(key);//����key�Ƿ���ڣ��������򷵻ظü���Ԫ�صĵ����������������򷵻�set.end()
//     count(key);//ͳ��key��Ԫ�ظ���*/
// #include<iostream>
// #include<set>
// using namespace std;
// void printSet(const set<int> &S)
// {
//     for(set<int>::const_iterator it=S.begin();it!=S.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     set<int> S1;
//     S1.insert(10);//��������
//     S1.insert(30);
//     S1.insert(50);
//     S1.insert(40);
//     S1.insert(20);
//     printSet(S1);
//     //ͳ��key��Ԫ�ظ���
//     cout<<"������Ԫ��30�ĸ���Ϊ:"<<S1.count(30)<<endl;
//     //����key�Ƿ���ڣ��������򷵻ظü���Ԫ�صĵ����������������򷵻�set.end()
//     set<int>::iterator pos=S1.find(30);
//     if(pos!=S1.end())
//     {
//         cout<<"���������ҵ���Ԫ�أ�"<<*pos<<endl;
//     }
//     else
//     {
//         cout<<"��������û���ҵ���ӦԪ��"<<endl;
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set��multiset������
//     1��set���������������ظ���Ԫ�أ�multiset�������������ظ���Ԫ��
//     2��set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//     3��multiset���������ݣ���˿��Բ����ظ�����*/
// #include<iostream>
// #include<set>
// using namespace std;
// void printMultiset(const multiset<int> &S)
// {
//     for(multiset<int>::const_iterator it=S.begin();it!=S.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// void test01()
// {
//     set<int> s;
//     pair<set<int>::iterator,bool> ret=s.insert(10);
//     if(ret.second)
//     {
//         cout<<"��һ�β���ɹ�!"<<endl;
//     }
//     else
//     {
//         cout<<"��һ�β���ʧ�ܣ�"<<endl;
//     }
//     ret=s.insert(10);
//     if(ret.second)
//     {
//         cout<<"�ڶ��β���ɹ�!"<<endl;
//     }
//     else
//     {
//         cout<<"�ڶ��β���ʧ�ܣ�"<<endl;
//     }
//     multiset<int> ms;
//     ms.insert(10);
//     ms.insert(10);
//     printMultiset(ms);
// }
// int main()
// {
//     test01();
    
//     system("pause");
//     return 0;
// }


// /*pair���飨�ɶԳ��ֵ����ݣ����ö�����Է����������ݣ�������ʽ��
//     pair<type,type> p(value1,value2);
//     pair<type,type> p=make_pair(value1,value2);
// */
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     //��һ�ִ�����ʽ
//     pair<string,int> p1("����",18);
//     cout<<"����: "<<p1.first<<"     ����:"<<p1.second<<endl;

//     //�ڶ��ִ�����ʽ
//     pair<string,int> p2=make_pair("����",20);
//     cout<<"����: "<<p2.first<<"     ����:"<<p2.second<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set��������--Ĭ�ϰ��������У����÷º������Ըı��������*/
// /*������������*/
// #include<iostream>
// #include<set>
// using namespace std;
// void test01()
// {
//     class myCompare//�º���
//     {
//         public:
//             bool operator()(int n1,int n2)
//             {
//                 return n1>n2;
//             } 
//     };
//     set<int> S1;
//     S1.insert(10);//��������
//     S1.insert(30);
//     S1.insert(50);
//     S1.insert(40);
//     S1.insert(20);
//     for(set<int>::const_iterator it=S1.begin();it!=S1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     set<int,myCompare> S2;
//     S2.insert(10);//��������
//     S2.insert(30);
//     S2.insert(50);
//     S2.insert(40);
//     S2.insert(20);
//     for(set<int,myCompare>::const_iterator it=S2.begin();it!=S2.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*set��������--Ĭ�ϰ��������У����÷º������Ըı��������*/
// /*�Զ�����������*/
// #include<iostream>
// #include<string>
// #include<set>
// using namespace std;
// class Person
// {
//     public:
//         Person(string name,int age)
//         {
//             this->m_Name=name;
//             this->m_Age=age;
//         }
//         string m_Name;
//         int m_Age;
// };
// class ComparePerson
// {
//     public:
//         bool operator()(const Person &p1,const Person &p2)
//         {
//             //����������н�������
//             return p1.m_Age>p2.m_Age;
//         }
// };
// void test01()
// {
//     set<Person,ComparePerson> S;
//     //����Person���ݶ���
//     Person p1("����",40);
//     Person p2("�ŷ�",32);
//     Person p3("����",30);
//     Person p4("����",35);
//     //��������
//     S.insert(p1);
//     S.insert(p2);
//     S.insert(p3);
//     S.insert(p4);
//     //�������
//     for(set<Person,ComparePerson>::iterator it=S.begin();it!=S.end();it++)
//     {
//         cout<<"������"<<it->m_Name<<"       ���䣺"<<it->m_Age<<endl;
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*map/multimap����*/
// /*map��������
//     ��飺map������Ԫ�ض���pair,pair�е�һ��Ԫ��Ϊkey�����������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//          ����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//     ���ʣ�map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//     �ŵ㣺���Ը���keyֵ�����ҵ�valueֵ
//     map/multimap����map���������������ظ�keyֵԪ�أ�multimap�������������ظ�keyֵԪ��
// */
// /*map�Ĺ���͸�ֵ
//     ���캯����map<T1,T2> mp;//Ĭ�Ϲ��캯��
//              map<const map &mp>;//�������캯��
//     ��ֵ������map& operator=(const map &mp)//���صȺŲ�����
// */
// #include<iostream>
// #include<map>
// using namespace std;
// void printMap(map<int,int> &m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key= "<<(*it).first<<"   value= "<<it->second<<endl;
//     }
// }
// void test01()
// {
//     map<int,int> mp1;//Ĭ�Ϲ��캯��
//     mp1.insert(pair<int,int>(1,10));
//     mp1.insert(pair<int,int>(3,30));
//     mp1.insert(pair<int,int>(2,20));
//     mp1.insert(pair<int,int>(5,50));
//     mp1.insert(pair<int,int>(4,40));
//     printMap(mp1);
//     cout<<"<--------------------------->"<<endl;
//     map<int,int> mp2(mp1);//�������캯��
//     printMap(mp2);
//     cout<<"<--------------------------->"<<endl;
//     map<int,int> mp3=mp1;//���صȺŲ�����
//     printMap(mp3);
//     cout<<"<--------------------------->"<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*map��С�ͽ���*/
// /*����ԭ�ͣ�
//     size();//����������Ԫ�ص���Ŀ
//     empty();//�ж������Ƿ�Ϊ��
//     swap(m);//����������������*/
// #include<iostream>
// #include<map>
// using namespace std;
// void printMap(map<int,int> &m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key= "<<(*it).first<<"   value= "<<it->second<<endl;
//     }
// }
// void test01()
// {
//     map<int,int> mp1;//Ĭ�Ϲ��캯��
//     mp1.insert(pair<int,int>(1,10));
//     mp1.insert(pair<int,int>(3,30));
//     mp1.insert(pair<int,int>(2,20));
//     mp1.insert(pair<int,int>(5,50));
//     mp1.insert(pair<int,int>(4,40));
//     printMap(mp1);
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
//     cout<<"<--------------------------->"<<endl;
//     if(mp1.empty())
//     {
//         cout<<"mp1����Ϊ��!"<<endl;
//     }
//     else
//     {
//         map<int,int> mp2;//Ĭ�Ϲ��캯��
//         mp2.insert(pair<int,int>(1,100));
//         mp2.insert(pair<int,int>(3,300));
//         mp2.insert(pair<int,int>(2,200));
//         mp2.insert(pair<int,int>(5,500));
//         mp2.insert(pair<int,int>(4,400));
//         printMap(mp2);
//         cout<<"mp2��Ԫ�ظ���Ϊ:"<<mp2.size()<<endl;
//         cout<<"<--------------------------->"<<endl;    
//         //����������Ԫ�ص���Ŀ
//         mp1.swap(mp2);
//         cout<<"�������mp1Ϊ:"<<endl;
//         printMap(mp1);
//         cout<<"�������mp2Ϊ:"<<endl;
//         printMap(mp2);
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*map�����ɾ��*/
// /*����ԭ�ͣ�
//     insert(elem);//�������в���Ԫ��
//     erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//     erase(beg,end);//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//     erase(key);//ɾ��������ֵΪkey��Ԫ��*/
// #include<iostream>
// #include<map>
// using namespace std;
// void printMap(map<int,int> &m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key= "<<(*it).first<<"   value= "<<it->second<<endl;
//     }
// }
// void test01()
// {
//     map<int,int> mp1;//Ĭ�Ϲ��캯��
//     mp1.insert(pair<int,int>(1,10));
//     mp1.insert(pair<int,int>(3,30));
//     mp1.insert(pair<int,int>(2,20));
//     mp1.insert(pair<int,int>(5,50));
//     mp1.insert(pair<int,int>(4,40));
//     printMap(mp1);
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
//     cout<<"<--------------------------->"<<endl;
//     mp1.erase(mp1.begin());
//     printMap(mp1);
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
//     cout<<"<--------------------------->"<<endl;
//     mp1.erase(2);
//     printMap(mp1);
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
//     cout<<"<--------------------------->"<<endl;
//     mp1.erase(mp1.begin(),mp1.end());
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*map���Һ�ͳ��*/
// /*����ԭ�ͣ�
//     find(key);//����key�Ƿ���ڣ������ڷ��ظü���Ԫ�صĵ��������������ڷ���map.end()
//     count(key);//ͳ��key��Ԫ�ظ���*/
// #include<iostream>
// #include<map>
// using namespace std;
// void printMap(map<int,int> &m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key= "<<(*it).first<<"   value= "<<it->second<<endl;
//     }
// }
// void test01()
// {
//     map<int,int> mp1;//Ĭ�Ϲ��캯��
//     mp1.insert(pair<int,int>(1,10));
//     mp1.insert(pair<int,int>(3,30));
//     mp1.insert(pair<int,int>(2,20));
//     mp1.insert(pair<int,int>(5,50));
//     mp1.insert(pair<int,int>(4,40));
//     printMap(mp1);
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
//     cout<<"<--------------------------->"<<endl;
//     //ͳ��key��Ԫ�ظ���
//     cout<<"������keyֵΪ2��Ԫ�ظ���Ϊ:"<<mp1.count(2)<<endl;
//     //����key�Ƿ���ڣ������ڷ��ظü���Ԫ�صĵ��������������ڷ���set.end()
//     if(mp1.find(3)!=mp1.end())
//     {
//         cout<<"����key= 3 ��Ԫ��!"<<endl;
//     }
//     else
//     {
//         cout<<"������key= 3 ��Ԫ��!"<<endl;   
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }
    

// /*map��������--Ĭ�ϰ���keyֵ���д�С�����������÷º������Ըı��������*/
// //map�Ǽ���ʽ����ֻ�ܰ���keyֵ�������������Ҫ����valueֵ������Ҫ���俽��������ʽ������(��vector��list��queue��)
// /*����������������*/
// #include<iostream>
// #include<map>
// using namespace std;
// //�º���
// class MyCompare
// {
//     public:
//         bool operator()(int n1,int n2)
//         {
//             return n1>n2;
//         }
// };
// void printMap1(map<int,int> &m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key= "<<(*it).first<<"   value= "<<it->second<<endl;
//     }
// }
// void printMap2(map<int,int,MyCompare> &m)
// {
//     for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
//     {
//         cout<<"key= "<<(*it).first<<"   value= "<<it->second<<endl;
//     }
// }

// void test01()
// {
//     map<int,int> mp1;//Ĭ�Ϲ��캯��
//     mp1.insert(pair<int,int>(1,10));
//     mp1.insert(pair<int,int>(3,30));
//     mp1.insert(pair<int,int>(2,20));
//     mp1.insert(pair<int,int>(5,50));
//     mp1.insert(pair<int,int>(4,40));
//     printMap1(mp1);
//     cout<<"mp1��Ԫ�ظ���Ϊ:"<<mp1.size()<<endl;
//     cout<<"<--------------------------->"<<endl;
//     map<int,int,MyCompare> mp2;//Ĭ�Ϲ��캯��
//     mp2.insert(pair<int,int>(1,10));
//     mp2.insert(pair<int,int>(3,30));
//     mp2.insert(pair<int,int>(2,20));
//     mp2.insert(pair<int,int>(5,50));
//     mp2.insert(pair<int,int>(4,40));
//     printMap2(mp2);
//     cout<<"mp2��Ԫ�ظ���Ϊ:"<<mp2.size()<<endl;
//     cout<<"<--------------------------->"<<endl;

// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }
    
// /*�Զ���������������*/
// #include<iostream>
// #include<string>
// #include<map>
// using namespace std;
// class Person
// {
//     public:
//         Person(string name,int age)
//         {
//             this->m_Name=name;
//             this->m_Age=age;
//         }
//         string m_Name;
//         int m_Age;
// };
// class ComparePerson
// {
//     public:
//         bool operator()(const Person &p1,const Person &p2)
//         {
//             //����������н�������
//             return p1.m_Age>p2.m_Age;
//         }
// };
// void test01()
// {
//     map<Person,int,ComparePerson> M;
//     //����Person���ݶ���
//     Person p1("����",40);
//     Person p2("�ŷ�",32);
//     Person p3("����",30);
//     Person p4("����",35);
//     //��������
//     M.insert(pair<Person,int>(p1,175));
//     M.insert(pair<Person,int>(p2,180));
//     M.insert(pair<Person,int>(p3,185));
//     M.insert(pair<Person,int>(p4,195));
//     //�������
//     for(map<Person,int,ComparePerson>::iterator it=M.begin();it!=M.end();it++)
//     {
//         cout<<"������"<<it->first.m_Name<<"     ���䣺"<<it->first.m_Age<<"     ��ߣ�"<<it->second<<endl;
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*map��������
//     1����˾��Ƹ��10��Ա��(ABCDEFGHIJ)��10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź���
//     2��Ա����Ϣ�������͹�����ɣ����ŷ�Ϊ���߻����������з��������10��Ա�����䲿�ź͹���
//     3��ͨ��multimap������Ϣ�Ĳ��루key��ʾ���ű�ţ�value��ʾԱ��)�����ֲ�����ʾԱ����Ϣ
// */
// #include<iostream>
// #include<vector>
// #include<map>
// #include<string>
// #include<ctime>
// using namespace std;
// #define CEHUA 0
// #define MEISHU 1
// #define YANFA 2
// class Worker
// {
//     public:
//         string m_Name;
//         int m_Salary;
// };
// void creatVector(vector<Worker> &V)
// {
//     string nameSeed="ABCDEFGHIJ";
//     for(int i=0;i<10;i++)
//     {
//         Worker worker;
//         worker.m_Name="Ա��";
//         worker.m_Name+=nameSeed[i];
//         worker.m_Salary=rand()%10001+10000;
//         V.push_back(worker);
//     }
// }
// void setGroup(vector<Worker> &V,multimap<int,Worker> &M)
// {
//     for(vector<Worker>::iterator it=V.begin();it!=V.end();it++)
//     {
//         //����������ű��
//         int depId=rand()%3;
//         //��Ա�����뵽������
//         M.insert(make_pair(depId,*it));
//     }
// }
// void showWorkerByGroup(multimap<int,Worker> &M)
// {
//     cout<<"�߻����ţ�"<<endl;
//     multimap<int,Worker>::iterator pos=M.find(CEHUA);
//     int count=M.count(CEHUA);
//     int index=0;
//     for(;pos!=M.end()&&index<count;pos++,index++)
//     {
//         cout<<"������"<<pos->second.m_Name<<"   ���ʣ�"<<pos->second.m_Salary<<endl;
//     }
//     cout<<"<------------------------->"<<endl;
//     cout<<"�������ţ�"<<endl;
//     pos=M.find(MEISHU);
//     count=M.count(MEISHU);
//     index=0;
//     for(;pos!=M.end()&&index<count;pos++,index++)
//     {
//         cout<<"������"<<pos->second.m_Name<<"   ���ʣ�"<<pos->second.m_Salary<<endl;
//     }
//     cout<<"<------------------------->"<<endl;
//     cout<<"�з����ţ�"<<endl;
//     pos=M.find(YANFA);
//     count=M.count(YANFA);
//     index=0;
//     for(;pos!=M.end()&&index<count;pos++,index++)
//     {
//         cout<<"������"<<pos->second.m_Name<<"   ���ʣ�"<<pos->second.m_Salary<<endl;
//     }
//     cout<<"<------------------------->"<<endl;
// }
// int main()
// {
//     srand((unsigned int)time(NULL));
//     //����10��Ա�����ŵ�vector������
//     vector<Worker> V;
//     creatVector(V);
//     // for(vector<Worker>::iterator it=V.begin();it!=V.end();it++)
//     // {
//     //     cout<<"������ "<<it->m_Name<<"  ���ʣ�"<<it->m_Salary<<endl;
//     // }
//     //����vector������ȡ��ÿ��Ա�������������
//     multimap<int,Worker> M;
//     setGroup(V,M);
//     //�ֲ�����ʾԱ����Ϣ
//     showWorkerByGroup(M);

//     system("pause");
//     return 0;
// }


// /*����������ʹ��
// 1�����غ������ò��������࣬����󳣳�Ϊ��������
// 2����������ʹ�����ص�()ʱ������Ϊ���ƺ������ã�Ҳ�зº���
// 3���������󣨷º�������������һ���࣬����һ������
// 4������������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
// 5���������󳬳���ͨ�����ĸ����������������Լ��ĸ���
// 6���������������Ϊ��������*/
// #include<iostream>
// #include<string>
// using namespace std;
// class MyAdd
// {
// public:
//     int operator()(int n1,int n2)
//     {
//         return n1+n2;
//     }
// };
// class MyPrint
// {
// public:
//     MyPrint()
//     {
//         count=0;
//     }
//     void operator()(string str)
//     {
//         cout<<str<<endl;
//         count++;
//     }
//     int count;
// };
// void DoPrint(MyPrint &myprint,string str)
// {
//     myprint(str);
// }
// void test01()
// {
//     //����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//     MyAdd myadd;
//     cout<<myadd(10,10)<<endl;
//     //�������󳬳���ͨ�����ĸ����������������Լ��ĸ���
//     MyPrint myprint;
//     myprint("Hello World!");
//     myprint("Hello World!");
//     myprint("Hello World!");
//     cout<<"myprint�ĵ��ô���Ϊ:"<<myprint.count<<endl;
//     //�������������Ϊ��������
//     DoPrint(myprint,"Hello C++!");
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*ν��--����bool���͵ķº���
// 1�����operator()����һ����������ô����һԪν��
// 2�����operator()����������������ô������Ԫν��*/
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// //һԪν��
// class GreatFive
// {
// public:
//     bool operator()(int val)
//     {
//         return val>5;
//     }
// };
// //һԪν��
// void test01()
// {
//     vector<int> V;
//     for(int i=0;i<10;i++)
//     {
//         V.push_back(i);
//     }
//     vector<int>::iterator it=find_if(V.begin(),V.end(),GreatFive());
//     if(it!=V.end())
//     {
//         cout<<"�ҵ��˴���5����:"<<*it<<endl;
//     }
//     else
//     {
//         cout<<"û���ҵ�����5����!"<<endl;
//     }
// }
// //��Ԫν��
// class MyCompare
// {
// public:
//     bool operator()(int val1,int val2)
//     {
//         return val1>val2;
//     }
// };
// //��Ԫν��
// void test02()
// {
//     vector<int> V1;
//     V1.push_back(10);
//     V1.push_back(40);
//     V1.push_back(20);
//     V1.push_back(50);
//     V1.push_back(30);
//     //Ĭ�ϰ���������
//     sort(V1.begin(),V1.end());
//     for(vector<int>::iterator it=V1.begin();it!=V1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     cout<<"<------------------>"<<endl;
//     //���ö�Ԫν��ʵ�ֽ�������
//     sort(V1.begin(),V1.end(),MyCompare());
//     for(vector<int>::iterator it=V1.begin();it!=V1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     cout<<"<------------------>"<<endl;
// }
// int main()
// {
//     //test01();//һԪν��
//     test02();//��Ԫν��

//     system("pause");
//     return 0;
// }


// /*�ڽ���������
// 1�����ࣺ�����º�������ϵ�º������߼��º���
// 2����Щ�º��������Ķ����÷���һ�㺯����ȫ��ͬ
// 3��ʹ���ڽ�����������Ҫ����ͷ�ļ�#include<functional>*/
// /*�����º���--ʵ���������㣬����negate��һԪ���㣬�������Ƕ�Ԫ����
//     template<class T> T plus<T>;//�ӷ��º���
//     template<class T> T minus<T>//�����º���
//     template<class T> T multiplies<T>//�˷��º���
//     template<class T> T divides<T>//�����º���
//     template<class T> T modulus<T>//ȡģ�º���
//     template<class T> T negate<T>//ȡ���º���*/
// #include<iostream>
// #include<functional>
// using namespace std;
// void test01()
// {
//     negate<int> n;//ȡ��
//     cout<<"50ȡ��= "<<n(50)<<endl;
//     plus<int> p;//�ӷ�
//     cout<<"10 + 20 = "<<p(10,20)<<endl;
//     minus<int> mi;//����
//     cout<<"10 - 20 = "<<mi(10,20)<<endl;
//     multiplies<int> mu;//�˷�
//     cout<<"10 * 20 = "<<mu(10,20)<<endl;
//     divides<int> di;//����
//     cout<<"20 / 10 = "<<di(20,10)<<endl;
//     modulus<int> mo;//ȡģ
//     cout<<"15 % 2 ="<<mo(15,2);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*��ϵ�º���
//      template<class T> bool equal_to<T>;//����
//      template<class T> bool not_equal_to<T>;//������
//      template<class T> bool greater<T>;//����
//      template<class T> bool greater_equal<T>;//���ڵ���
//      template<class T> bool less<T>;//С��
//      template<class T> bool less_equal<T>;//С�ڵ���
// */
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<functional>
// using namespace std;
// void test01()
// {
//     vector<int> V1;
//     V1.push_back(10);
//     V1.push_back(40);
//     V1.push_back(20);
//     V1.push_back(50);
//     V1.push_back(30);
//     //Ĭ�ϰ���������
//     sort(V1.begin(),V1.end());
//     for(vector<int>::iterator it=V1.begin();it!=V1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     cout<<"<------------------>"<<endl;
//     //�����ڽ��Ĵ��ڷº���ʵ�ֽ�������
//     sort(V1.begin(),V1.end(),greater<int>());
//     for(vector<int>::iterator it=V1.begin();it!=V1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     cout<<"<------------------>"<<endl;   
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*�߼��º���
//     template<class T> bool logical_and<T>//�߼���
//     template<class T> bool logical_or<T>//�߼���
//     template<class T> bool logical_not<T>//�߼���
// */
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<functional>
// using namespace std;
// void test01()
// {
//     vector<bool> V1;
//     V1.push_back(true);
//     V1.push_back(false);
//     V1.push_back(false);
//     V1.push_back(true);
//     V1.push_back(false);
//     for(vector<bool>::iterator it=V1.begin();it!=V1.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     vector<bool> V2;
//     V2.resize(V1.size());
//     //������V1�е����ݾ����߼��������ת�Ƶ�����V2��
//     transform(V1.begin(),V1.end(),V2.begin(),logical_not<bool>());
//     for(vector<bool>::iterator it=V2.begin();it!=V2.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }
