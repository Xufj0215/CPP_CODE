
//设计一个圆类，求圆的周长和面积
//圆的周长：2*PI*半径
//圆的面积：PI*半径*半径
//PI取3.14

// #include<iostream>
// using namespace std;
// const double PI=3.14;

// class Circle
// {
//     private:
//         double m_r;
//     public:
//         //设置半径
//         void setR(double r)
//         {
//             m_r=r;
//         }
//         //获取半径
//         double getR()
//         {
//             return m_r;
//         }
//         //获取周长
//         double calculateZC()
//         {
//             return 2*PI*m_r;
//         }
//         //获取面积
//         double calculateMJ()
//         {
//             return PI*m_r*m_r;
//         }
// };

// int main()
// {
//     Circle C1;
//     //设置半径
//     C1.setR(1);
//     //获取周长
//     double ZC=C1.calculateZC();
//     cout<<"圆的周长为："<<ZC<<endl;
//     //获取面积
//     double MJ=C1.calculateMJ();
//     cout<<"圆的面积为："<<MJ<<endl;
    
    
//     system("pause");
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"hello world!"<<endl;
//     cout<<"调试控制台程序"<<endl;
//     system("pause");
//     return 0;
// }

/*类继承示例*/
// #include<iostream>
// using namespace std;

// class common
// {
//     public:
//         void hearder()
//         {
//             cout<<"这是一个公共的hearder"<<endl;
//         }

//         void footer()
//         {
//             cout<<"这是一个公共的footer"<<endl;
//         }

//         void left()
//         {
//             cout<<"这是一个公共的left"<<endl;
//         }
// };

// //java课程内容
// class java:public common
// {
//     public:
//         void java_content()
//         {
//             cout<<"java课程内容"<<endl;
//         }
// };

// //python课程内容
// class python:public common
// {
//     public:
//         void python_content()
//         {
//             cout<<"python课程内容"<<endl;
//         }
// };
// //cpp课程内容
// class cpp:public common
// {
//     public:
//         void cpp_content()
//         {
//             cout<<"cpp课程内容"<<endl;
//         }
// };


// void test01()
// {
// //java课程内容
//     java j;
//     j.hearder();
//     j.footer();
//     j.left();
//     j.java_content();
//     cout<<"-------------------"<<endl;
// //python课程内容
//     python p;
//     p.hearder();
//     p.footer();
//     p.left();
//     p.python_content();
//     cout<<"-------------------"<<endl;
// //cpp课程内容
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

/*类继承方式--public、private、protected方式*/
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

// //公共继承
// class Son1:public Base
// {
//     public:
//         void func()
//         {
//             m_A=10;//类内可以访问公共权限内容
//             m_B=10;//类内可以访问保护权限内容
//             //m_c=10;//类内不可以访问私有权限内容
//         }
// };
// void test01()
// {
//     Son1 s1;
//     s1.m_A=100;//类外可以访问公共权限内容
//     //s1.m_B=100;//类外不可以访问保护权限内容
//     //s1.m_C=100;//类外不可以访问私有权限内容
// }

// //保护继承
// class Son2:protected Base
// {
//     public:
//         void func()
//         {
//             m_A=10;//类内可以访问公共权限内容
//             m_B=10;//类内可以访问保护权限内容
//             //m_c=10;//类内不可以访问私有权限内容
//         }
// };
// void test02()
// {
//     Son2 s2;
//     //s2.m_A=100;//类外不可以访问公共权限内容
//     //s2.m_B=100;//类外不可以访问保护权限内容
//     //s2.m_C=100;//类外不可以访问私有权限内容
// }

// //私有继承
// class Son3:private Base
// {
//     public:
//         void func()
//         {
//             m_A=10;//类内可以访问公共权限内容
//             m_B=10;//类内可以访问保护权限内容
//             //m_c=10;//类内不可以访问私有权限内容
//         }
// };
// void test03()
// {
//     Son3 s3;
//     // s3.m_A=100;//类外不可以访问公共权限内容
//     // s3.m_B=100;//类外不可以访问保护权限内容
//     // s3.m_C=100;//类外不可以访问私有权限内容
// }
// class Grandson1:public Son3
// {
//     public:
//         void func()
//         {
//             // m_A=10;//类内不可以访问公共权限内容
//             // m_B=10;//类内不可以访问保护权限内容
//             //m_c=10;//类内不可以访问私有权限内容
//         }

// };

// int main()
// {
//     system("pause");
//     return 0;
// }


/*继承中的对象模型*/
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
//     //父类中的私有成员也被子类继承下去了，只是由编译器隐藏后访问不到。
//     cout<<"size of Son is: "<<sizeof(Son)<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }

/*继承中的构造和析构顺序*/
//先构造父类，在构造子类，析构的顺序与构造的顺序相反
// #include<iostream>
// using namespace std;
// class Base
// {
//     public:
//         Base()
//         {
//             cout<<"Base的构造函数"<<endl;
//         }
//         ~Base()
//         {
//             cout<<"Base的析构函数"<<endl;
//         }
// };
// class Son:public Base
// {
//     public:
//         Son()
//         {
//             cout<<"Son的构造函数"<<endl;
//         }
//         ~Son()
//         {
//             cout<<"Son的析构函数"<<endl;
//         }
// };

// int main()
// {   
//     //Base b;
//     Son s;

//     system("pause");
//     return 0;
// }


/*继承中同名成员的处理方式*/
//子类对象可以直接访问子类中同名成员
//子类对象加作用域可以访问到父类同名成员
//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有同名成员函数，加作用域可以访问到父类中的同名成员函数
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
//             cout<<"Base的func函数调用"<<endl;
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
//             cout<<"Son的func函数调用"<<endl;
//         }

// };
// void test01()
// {
//     Son s;
//     cout<<"Son中的m_A为:"<<s.m_A<<endl;
//     cout<<"Base中的m_A为:"<<s.Base::m_A<<endl;
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


/*继承同名静态成员处理方式*/
//静态成员和非静态成员出现同名，处理方式一致
//访问子类同名成员，直接访问即可
//访问父类同名成员，需要加作用域
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
//             cout<<"Base的静态func函数调用"<<endl;
//         }
//         static void func(int n)
//         {
//             cout<<"Base的有参静态func函数调用"<<endl;
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
//             cout<<"Son的静态func函数调用"<<endl;
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
//     //1、通过对象访问
//     cout<<"通过对象访问"<<endl;
//     Son s;
//     cout<<"Son中的m_A为:"<<s.m_A<<endl;
//     cout<<"Base中的m_A为:"<<s.Base::m_A<<endl;
//     cout<<"*********************"<<endl;
//     //2、通过类名访问
//     cout<<"通过类名访问"<<endl;
//     cout<<"Son中的m_A为:"<<Son::m_A<<endl;
//     //第一个::代表通过类名方式访问，第二个::代表访问父类作用域下的成员
//     cout<<"Base中的m_A为:"<<Son::Base::m_A<<endl;
// }
// void test02()
// {
//     //1、通过对象访问
//     cout<<"通过对象访问"<<endl;
//     Son s;
//     Base b;
//     // s.func();
//     // s.Base::func();
//     cout<<"Son中的m_B为:"<<s<<endl;
//     cout<<"Base中的m_B为:"<<b<<endl;
//     cout<<"*********************"<<endl;
//     //2、通过类名访问
//     cout<<"通过类名访问"<<endl;
//     Son::func();
//     //第一个::代表通过类名方式访问，第二个::代表访问父类作用域下的成员
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


/*多继承语法*/
//C++允许一个类继承多个类，可能会引发父类中有同名成员出现，需要加作用域区分
//语法：class 子类：继承方式 父类1，继承方式 父类2
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
//     cout<<"Base1中的m_B="<<s.m_B<<endl;
//     cout<<"Base2中的m_C="<<s.m_C<<endl;
//     cout<<"Son中的m_D="<<s.m_D<<endl;
//     cout<<"Son中的m_E="<<s.m_E<<endl;
//     cout<<"Base1中的m_A="<<s.Base1::m_A<<endl;
//     cout<<"Base2中的m_A="<<s.Base2::m_A<<endl;
// }

// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*菱形继承问题*/
// #include<iostream>
// using namespace std;
// //动物类
// class Animal
// {
//     public:
//         int m_Age;
// };
// //羊类
// class Sheep:virtual public Animal{};

// //驼类
// class Tuo:virtual public Animal{};
// //羊驼类
// class SheepTuo:public Sheep,public Tuo{};

// void test01()
// {
//     SheepTuo st;
//     st.Sheep::m_Age=18;
//     st.Tuo::m_Age=28;
//     //当菱形继承时，两个父类拥有相同数据，需要加以作用域区分
//     cout<<"st.Sheep::m_Age="<<st.Sheep::m_Age<<endl;
//     cout<<"st.Tuo::m_Age="<<st.Tuo::m_Age<<endl;
//     //这份数据我们知道只要有一份就可以，但是菱形继承导致数据有两份，浪费空间
//     //解决方案：虚继承 Animal类称为虚基类
//     //
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }


/*多态的基本概念*/
//多态分为两类：1、静态多态：函数重载和运算符重载属于静态多态，复用函数名 
//             2、动态多态：派生类和虚函数实现运行时多态
//静态多态和动态多态的区别：1、静态多态的函数地址早绑定--编译阶段确定函数地址
//                        2、动态多态的函数地址晚绑定--运行阶段确定函数地址
//动态多态的使用条件：1、有继承关系  
//                   2、子类重写（函数返回值类型、函数名、参数列表完全相同）父类的虚函数 
//                   3、父类指针或引用指向子类对象
// #include<iostream>
// using namespace std;
// class Animal
// {
//     public:
//         //虚函数
//         virtual void speak()
//         {
//             cout<<"动物在说话"<<endl;
//         }
// };
// //猫类
// class Cat:public Animal
// {
//     public:
//         void speak()
//         {
//             cout<<"小猫在说话"<<endl;
//         }
// };
// //狗类
// class Dog:public Animal
// {
//     public:
//         void speak()
//         {
//             cout<<"小狗在说话"<<endl;
//         }
// };
// //执行说话的函数，地址早绑定，在编译阶段确定函数地址
// //如果想执行讲话讲话者的函数,需要函数地址晚绑定，在父类的函数前加virtual关键字,在运行阶段确定函数地址
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


/*多态案例1--计算器类*/
//分别利用普通写法和多态写法，设计实现两个操作数进行运算的计算器类
//多态的优点：1、代码组织结构清晰  2、可读性强  3、利用前期和后期的扩展以及维护性高
// #include<iostream>
// using namespace std;
// //计算器类--普通写法  
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
// //计算器类--多态写法
// class AbstractCalculate
// {
//     public:
//         int m_Num1;
//         int m_Num2;
//         //父类虚函数
//         virtual int GetResult()
//         {
//             return 0;
//         }
// };
// //加法计算器类
// class AddCalculate:public AbstractCalculate
// {
//     public:
//     //子类重写父类虚函数
//     int GetResult()
//     {
//         return m_Num1+m_Num2;
//     }
// };
// //减法计算器类
// class SubCalculate:public AbstractCalculate
// {
//     public:
//     //子类重写父类虚函数
//     int GetResult()
//     {
//         return m_Num1-m_Num2;
//     }
// };
// //乘法计算器类
// class MulCalculate:public AbstractCalculate
// {
//     public:
//     //子类重写父类虚函数
//     int GetResult()
//     {
//         return m_Num1*m_Num2;
//     }
// };
// //除法计算器类
// class DivCalculate:public AbstractCalculate
// {
//     public:
//     //子类重写父类虚函数
//     int GetResult()
//     {
//         return m_Num1/m_Num2;
//     }
// };

// void test01()
// {
//     cout<<"普通写法:"<<endl;
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
//     cout<<"多态写法:"<<endl;
//     //加法运算
//     AbstractCalculate * abc=new AddCalculate;//父类指针或引用指向子类对象
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"+"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
//     //减法运算
//     abc=new SubCalculate;
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"-"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
//     //乘法运算
//     abc=new MulCalculate;
//     abc->m_Num1=10;
//     abc->m_Num2=10;
//     cout<<abc->m_Num1<<"*"<<abc->m_Num2<<"="<<abc->GetResult()<<endl;
//     delete abc;
//     abc=nullptr;
//     //除法运算
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


/*纯虚函数和抽象类*/
//纯虚函数语法：virtual 返回值类型 函数名（参数列表）=0;
//当类中有了纯虚函数，这个类也称为抽象类
//抽象类特点：1、无法实例化对象  2、子类必须重写父类中的纯虚函数，否则也属于抽象类
// #include<iostream>
// using namespace std;
// class Base
// {
//     public:
//         //纯虚函数
//         virtual void func()=0;
// };
// class Son:public Base{
//     public:
//         //子类必须重写父类中的纯虚函数，否则也属于抽象类
//         void func()
//         {
//             cout<<"func函数调用"<<endl;
//         }
// };
// int main()
// {
//     //Base b;//抽象类无法实例化对象
//     // Son s;
//     // s.func(); 
//     Base * base=new Son;
//     base->func();
//     delete base;
//     base=nullptr;

//     system("pause");
//     return 0;
// }


/*多态案例2--制作饮品*/
//制作饮的大致流程为：烧水--冲泡--倒入杯中--加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶
// #include<iostream>
// using namespace std;
// class AbstractDrink
// {
//     public:
//         //烧水
//         virtual void Boil()=0;
//         //冲泡
//         virtual void Brew()=0;
//         //倒入杯中
//         virtual void PourInCup()=0;
//         //加入辅料
//         virtual void AddCondiments()=0;
//         //制作饮品
//         void MakeDrink()
//         {
//             Boil();
//             Brew();
//             PourInCup();
//             AddCondiments();
//         }
// };
// //制作咖啡
// class Coffee:public AbstractDrink
// {
//     public:
//         //烧水
//         void Boil()
//         {
//             cout<<"煮沸水"<<endl;
//         }
//         //冲泡
//         void Brew()
//         {
//             cout<<"冲泡咖啡"<<endl;
//         }
//         //倒入杯中
//         void PourInCup()
//         {
//             cout<<"倒入杯中"<<endl;
//         }
//         //加入辅料
//         void AddCondiments()
//         {
//             cout<<"加入糖和牛奶"<<endl;
//         }
// };
// //制作茶
// class Tea:public AbstractDrink
// {
//     public:
//         //烧水
//         void Boil()
//         {
//             cout<<"煮沸水"<<endl;
//         }
//         //冲泡
//         void Brew()
//         {
//             cout<<"冲泡茶叶"<<endl;
//         }
//         //倒入杯中
//         void PourInCup()
//         {
//             cout<<"倒入杯中"<<endl;
//         }
//         //加入辅料
//         void AddCondiments()
//         {
//             cout<<"加入柠檬"<<endl;
//         }
// };
// void test01()
// {
//     //制作咖啡
//     AbstractDrink * ad=new Coffee;
//     ad->MakeDrink();
//     delete ad;
//     ad=nullptr;
//     cout<<"<---------------------->"<<endl;
//     //制作茶
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


/*虚析构和纯虚析构*/
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决办法：将父类中的析构函数改为虚析构或纯虚析构
//虚析构和纯虚析构的共同点：1、都可以解决父类指针释放子类对象  2、都需要有具体的函数实现
//虚析构和纯虚析构的不同点：1、虚析构有具体的函数实现，纯虚析构没有具体的函数实现（属于抽象类，无法实例化对象）
// #include<iostream>
// #include<string>
// using namespace std;
// class Animal
// {
//     public:
//         //构造函数
//         Animal()
//         {
//             cout<<"Animal的构造函数调用"<<endl;
//         }
//         //纯虚函数
//         virtual void func()=0;
//         //纯虚析构，需要声明也需要实现
//         virtual ~Animal()=0;//声明
//         //虚析构,与纯虚析构不能共存
//         // virtual ~Animal()
//         // {
//         //     cout<<"Animal的纯虚析构函数调用"<<endl;
//         // }
// };
// Animal::~Animal()//实现
// {
//     cout<<"Animal的纯虚析构函数调用"<<endl;
// }
// class Cat:public Animal
// {
//     public:
//         Cat(string name)
//         {
//             cout<<"Cat的构造函数调用"<<endl;
//             m_Name=new string(name);
//         }
//         virtual void func()
//         {
//             cout<<*m_Name<<"小猫在说话"<<endl;
//         }
//         ~Cat()
//         {
//             cout<<"Cat的析构函数调用"<<endl;
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


/*多态案例3--电脑组装*/
//电脑主要组成部件为CPU（用于计算）、显卡（用于显示）、内存条（用于存储）
//将每个零件封装成抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口，测试时组装三台不同的电脑进行工作
// #include<iostream>
// using namespace std;
// //CPU类
// class CPU
// {
//     public:
//         //抽象计算函数
//         virtual void calculate()=0;
// };
// //显卡类
// class VideoCard
// {
//     public:
//         //抽象显示函数
//         virtual void display()=0;
// };
// //内存条类
// class Memory
// {
//     public:
//         //抽象存储函数
//         virtual void storage()=0;
// };

// //电脑类
// class Computer
// {
//     public:
//         //构造函数中传入三个零件指针
//         Computer(CPU * cpu,VideoCard * vc,Memory * mem)
//         {
//             m_cpu=cpu;
//             m_vc=vc;
//             m_mem=mem;
//         }
//         //提供工作函数
//         void work()
//         {
//             m_cpu->calculate();
//             m_vc->display();
//             m_mem->storage();
//         }
//         //提供析构函数，释放三个电脑零件
//         ~Computer()
//         {
//             //释放CPU零件
//             if(m_cpu!=nullptr)
//             {
//                 delete m_cpu;
//                 m_cpu=nullptr;
//             }
//             //释放显卡零件
//             if(m_vc!=nullptr)
//             {
//                 delete m_vc;
//                 m_vc=nullptr;
//             }
//             //释放内存条零件
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

// //零件厂商Inter类
// class InterCpu:public CPU
// {
//     public:
//         void calculate()
//         {
//             cout<<"Inter的CPU开始计算了!"<<endl;
//         }
// };
// class InterVideoCard:public VideoCard
// {
//     public:
//         void display()
//         {
//             cout<<"Inter的显卡开始显示了!"<<endl;
//         }
// };
// class InterMemory:public Memory
// {
//     public:
//         void storage()
//         {
//             cout<<"Inter的内存条开始存储了"<<endl;
//         }
// };

// //零件厂商Lenovo类
// class LenovoCpu:public CPU
// {
//     public:
//         void calculate()
//         {
//             cout<<"Lenovo的CPU开始计算了!"<<endl;
//         }
// };
// class LenovoVideoCard:public VideoCard
// {
//     public:
//         void display()
//         {
//             cout<<"Lenovo的显卡开始显示了!"<<endl;
//         }
// };
// class LenovoMemory:public Memory
// {
//     public:
//         void storage()
//         {
//             cout<<"Lenovo的内存条开始存储了"<<endl;
//         }
// };
// //测试函数!!!!
// void test01()
// {
//     //第一台电脑零件
//     CPU * interCpu=new InterCpu;
//     VideoCard * interVideoCard=new InterVideoCard;
//     Memory * interMemory=new InterMemory;

//     //创建第一台电脑
//     cout<<"第一台电脑开始工作了!"<<endl;
//     Computer * computer1=new Computer(interCpu,interVideoCard,interMemory);
//     computer1->work();
//     delete computer1;
//     computer1=nullptr;
//     cout<<"******************************"<<endl;

//     //第二台电脑零件
//     // CPU * lenovoCpu=new LenovoCpu;
//     // VideoCard * lenovoVideoCard=new LenovoVideoCard;
//     // Memory * lenovoMemory=new LenovoMemory;

//     //创建第二台电脑
//     cout<<"第二台电脑开始工作了!"<<endl;
//     Computer * computer2=new Computer(new LenovoCpu,new LenovoVideoCard,new LenovoMemory);
//     computer2->work();
//     delete computer2;
//     computer2=nullptr;
//     cout<<"******************************"<<endl;

//     //第三台电脑零件
//     // CPU * lenovoCpu=new LenovoCpu;
//     // VideoCard * interVideoCard=new InterVideoCard;
//     // Memory * lenovoMemory=new LenovoMemory;

//     //创建第三台电脑
//     cout<<"第三台电脑开始工作了!"<<endl;
//     Computer * computer3=new Computer(new InterCpu,new LenovoVideoCard,new InterMemory);
//     computer3->work();
//     delete computer3;
//     computer3=nullptr;
//     cout<<"******************************"<<endl;
// }


//文件操作
//文本文件：以文本的ASCII码形式存储的文件
//二进制文件：以文本的二进制形式存储的文件
//操作文件的三大类：1、ofstream：写操作  2、ifstream：读操作  3、fstream：读写操作
/*文件打开方式：
    1、ios::in：打开文件，文件必须存在
    2、ios::out：打开文件，文件不存在则创建，文件存在则清空
    3、ios::ate：打开文件，文件存在则打开文件并移动到文件末尾
    4、ios::app：追加方式打开文件，文件存在则打开文件并移动到文件末尾，文件不存在则创建文件
    5、ios::trunc：打开文件，文件存在则清空文件，文件不存在则创建文件
    注意：文件打开方式可以配合使用，利用|操作符，例如：用二进制方式写文件 ios::binary|ios::out
*/
/*写文件的步骤：
    1.包含头文件  #include<fstream>；
    2.创建流对象  #ofstream ofs；
    3.打开文件  ofs.open("文件路径"，打开方式)；
    4.写数据    ofs<<"写入的数据"；
    5.关闭文件  ofs.close();
*/
/*文本文件--写文件*/
// #include<iostream>
// #include<fstream>
// using namespace std;

// void test01()
// {
//     //1.包含头文件
//     //2.创建流对象
//     ofstream ofs;
//     //3.打开文件
//     ofs.open("test_list.txt",ios::out);
//     //4.写数据
//     ofs<<"姓名：张三"<<endl;
//     ofs<<"性别：男"<<endl;
//     ofs<<"年龄: 18"<<endl;
//     //5.关闭文件
//     ofs.close();  
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }


/*读文件的步骤：
    1.包含头文件  #include<fstream>；
    2.创建流对象  #ifstream ifs；
    3.打开文件  ifs.open("文件路径"，打开方式)；
    4.写数据    ifs>>"写入的数据"；
    5.关闭文件  ifs.close();
*/
/*文本文件--读文件*/
// #include<iostream>
// #include<fstream>
// using namespace std;

// void test01()
// {
//     //1.包含头文件
//     //2.创建流对象
//     ifstream ifs;
//     //3.打开文件，判断文件是否打开成功
//     ifs.open("test_list.txt",ios::in);
//     if(!ifs.is_open())
//     {
//         cout<<"文件打开失败"<<endl;
//         return;
//     }
//    // 4.读数据
//     //第一种方式
//     // cout<<"第一种方式读取文件"<<endl;
//     // char buf[1024]={0};
//     // while(ifs>>buf)
//     // {
//     //     cout<<buf<<endl;
//     // }
//     //第二种方式
//     // cout<<"第二种方式读取文件"<<endl;
//     // char buf2[1024]={0};
//     // while(ifs.getline(buf2,sizeof(buf2)))
//     // {
//     //     cout<<buf2<<endl;
//     // }
//     //第三种方式
//     // cout<<"第三种方式读取文件"<<endl;
//     // string buf3;
//     // while(getline(ifs,buf3))
//     // {
//     //     cout<<buf3<<endl;
//     // }
//     //第四种方式
//     cout<<"第四种方式读取文件"<<endl;
//     char c;
//     while((c=ifs.get())!=EOF)
//     {
//         cout<<c;
//     }
//     //5.关闭文件
//     ifs.close();
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }


//二进制文件--写文件
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
//     //1.包含头文件
//     //2.创建流对象
//     ofstream ofs;
//     //3.打开文件，判断文件是否打开成功
//     ofs.open("person.txt",ios::out|ios::binary);
//     if(!ofs.is_open())
//     {
//         cout<<"文件打开失败"<<endl;
//         return;
//     }
//     //4.写数据
//     Person P={"张三",18};
//     ofs.write((const char *)&P,sizeof(Person));
//     //5.关闭文件
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
//}


//二进制文件--读文件
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
//     //1.包含头文件
//     //2.创建流对象
//     ifstream ifs;
//     //3.打开文件，判断文件是否打开成功
//     ifs.open("person.txt",ios::in|ios::binary);
//     if(!ifs.is_open())
//     {
//         cout<<"二进制文件打开失败！"<<endl;
//         return;
//     }
//     //4.读文件
//     ifs.read((char *)&P,sizeof(P));
//     cout<<"姓名："<<P.m_name<<"\n年龄: "<<P.m_age<<endl;
//     //5，关闭文件
//     ifs.close();
// }

// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


/*职工管理系统--用来管理公司内所有员工的信息*/
//公司中职工分为三类：普通员工、经理、老板。显示信息时，需要显示职工编号、职工姓名、职工岗位以及职责
//普通员工职责：完成经理交给的任务
//经理职责：完成老板交给的任务，并下发任务给员工
//老板职责：管理公司所有事务
/*管理系统中需要实现的功能如下：
1.退出管理系统：退出当前管理系统；
2.增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为：职工编号、姓名、部门编号；
3.显示职工信息：显示公司内所有职工的信息；
4.删除离职职工：按照编号删除指定的职工；
5.修改职工信息：按照编号修改指定职工的信息；
6.查找职工信息：按照职工的编号或职工的姓名进行查找相关的人员信息；
7.按照编号排序：按照职工编号进行排序，或排序规则由用户指定；
8.清空所有文档：清空文件中记录的所有职工信息（清空前需要再次确认，防止误删）；*/
#include<iostream>
using namespace std;

int main()
{

    system("pause");
    return 0;
}