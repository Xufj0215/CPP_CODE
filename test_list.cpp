

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