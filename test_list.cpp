

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


// /*职工管理系统--用来管理公司内所有员工的信息*/
// //公司中职工分为三类：普通员工、经理、老板。显示信息时，需要显示职工编号、职工姓名、职工岗位以及职责
// //普通员工职责：完成经理交给的任务
// //经理职责：完成老板交给的任务，并下发任务给员工
// //老板职责：管理公司所有事务
// /*管理系统中需要实现的功能如下：
// 1.退出管理系统：退出当前管理系统；
// 2.增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为：职工编号、姓名、部门编号；
// 3.显示职工信息：显示公司内所有职工的信息；
// 4.删除离职职工：按照编号删除指定的职工；
// 5.修改职工信息：按照编号修改指定职工的信息；
// 6.查找职工信息：按照职工的编号或职工的姓名进行查找相关的人员信息；
// 7.按照编号排序：按照职工编号进行排序，或排序规则由用户指定；
// 8.清空所有文档：清空文件中记录的所有职工信息（清空前需要再次确认，防止误删）；*/
// //#include<iostream>
// #include"workManger.h"
// using namespace std;

// int main()
// {
//     workManager wm;
//     wm.showMenu();
//     int choice=0;
//     cout<<"请输入您的选择："<<endl;
//     cin>>choice;
//     while(true)
//     {
//         switch(choice)
//         {
//             case 0://退出系统
//                 wm.exitSystem();
//                 break;
//             case 1://增加职工
//                 wm.addEmp();
//                 break;
//             case 2://显示职工
//                 wm.showEmp();
//                 break;
//             case 3://删除职工
//                 wm.delEmp();
//                 break;
//             case 4://修改职工
//                 wm.modEmp();
//                 break;
//             case 5://查找职工
//                 wm.findEmp();
//                 break;
//             case 6://按照编号排序
//                 wm.sortEmp();
//                 break;
//             case 7://清空所有文档
//                 wm.cleanFile();
//                 break;
//             default:
//                 cout<<"输入有误，请重新输入！"<<endl;
//                 break;
//         }
//         wm.showMenu();
//         cout<<"请输入您的选择："<<endl;
//         cin>>choice;    
//     }

//     system("pause");
//     return 0;
// }


/*普通函数和函数模板的调用规则*/
/*调用规则如下：
1.如果普通函数和函数模板都可以实现，优先调用普通函数
2.可以通过空模板参数列表来强制调用函数模板
3.函数模板也可以发生重载
4.如果函数模板可以产生更好的匹配，优先调用函数模板*/
// #include<iostream>
// using namespace std;

// void func(int a,int b)
// {
//     cout<<"普通函数的调用"<<endl;
// }
// template<typename T>
// void func(T a,T b)
// {
//     cout<<"函数模板的调用"<<endl;
// }
// template<typename T>
// void func(T a,T b,T c)
// {
//     cout<<"函数模板的重载调用"<<endl;
// }

// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;
//     char d='A';
//     char e='B';
//     func(a,b);//如果普通函数和函数模板都可以实现，优先调用普通函数
//     func<>(a,b);//可以通过空模板参数列表来强制调用函数模板
//     func<>(a,b,c);//函数模板也可以发生重载
//     func(d,e);//如果函数模板可以产生更好的匹配，优先调用函数模板

//     system("pause");
//     return 0;
// }


/*模板的局限性*/
//模板的局限性：1、不能使用sizeof()  2、不能使用类型特性  3、不能使用sizeof...(参数包)  4、不能使用类型转换
//5、不能使用sizeof(类名::成员)  6、不能使用sizeof(类名::静态成员)  7、不能使用sizeof(类名::函数指针)
//8、不能使用sizeof(类名::函数对象)  9、不能使用sizeof(类名::函数模板)  10、不能使用sizeof(类名::函数指针模板)
//11、不能使用sizeof(类名::函数对象模板)  12、不能使用sizeof(类名::函数指针模板)  13、不能使用sizeof(类名::函数对象模板)
//14、不能使用sizeof(类名::函数指针模板)  15、不能使用sizeof(类名::函数对象模板)  16、不能使用sizeof(类名::函数指针模板)
//17、不能使用sizeof(类名::函数对象模板)  18、不能使用sizeof(类名::函数指针模板)  19、不能使用sizeof(类名::函数对象模板)
//20、不能使用sizeof(类名::函数指针模板)  21、不能使用sizeof(类名::函数对象模板)  22、不能使用sizeof(类名::函数指针模板)
//23、不能使用sizeof(类名::函数对象模板)  24、不能使用sizeof(类名::函数指针模板)  25、不能使用sizeof(类名::函数对象模板) 
//26、不能使用sizeof(类名::函数指针模板)  
//27、不能使用sizeof(类名::函数对象模板)  
//28、不能使用sizeof(类名::函数指针模板)  
//29、不能使用sizeof(类名::函数对象模板)  
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
// //函数模板的特化
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
//         cout<<"相等"<<endl;
//     else
//         cout<<"不相等"<<endl;
// }
// void test02()
// {
//     Person p1("Tom",10);
//     Person p2("Tom",10);
//     bool ret=compare(p1,p2);
//     if(ret)
//         cout<<"相等"<<endl;
//     else
//         cout<<"不相等"<<endl;

// }
// int main()
// {
//     //test01();
//     test02();

//     system("pause");
//     return 0;
// }

/*类模板*/
//类模板的定义：template<typename T> class 类名{...}
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
//             cout<<"姓名："<<m_name<<"  年龄："<<m_age<<endl;
//         }
//     private:
//         T1 m_name;
//         T2 m_age;
// };

// int main()
// {
//     //创建类模板对象
//     Person<string,int> p1("Tom",18);
//     Person<string,int> p2("Jerry",20);
//     p1.showPerson();
//     p2.showPerson();

//     system("pause");
//     return 0;
// }

/*类模板与函数模板的区别：
    1.类模板没有自动类型推导使用方式
    2.类模板在模板参数列表中可以使用默认参数*/
// 类模板是一个类的定义，而函数模板是一个函数的定义；
// 类模板可以有多个类型参数，而函数模板只能有一个类型参数；
// 类模板可以有多个成员函数，而函数模板只能有一个函数；
// 类模板可以有多个成员变量，而函数模板只能有一个参数；
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
//             cout<<"姓名："<<this->m_name<<"  年龄："<<this->m_age<<endl;
//         }
//     private:
//         NameType m_name;
//         AgeType m_age;
// };

// int main()
// {
//     //创建类模板对象
//     //Person p3("张三",18);//类模板没有自动类型推导使用方式
//     Person<string,int> p1("孙悟空",1000);
//     Person<string> p2("猪八戒",1200);//类模板在模板参数列表中可以使用默认参数
//     p1.showPerson();
//     p2.showPerson();

//      system("pause");
//      return 0;
// }


// /*类模板中成员函数的创建时机*/
// //类模板中成员函数和普通类中成员函数创建时机是有区别的：
// //1.普通类中成员函数创建时机：一开始就可以创建
// //2.类模板中成员函数创建时机：在调用时才创建
// #include<iostream>
// using namespace std;
// class Person1
// {
//     public:
//         void ShowPerson1()
//         {
//             cout<<"Person1函数调用"<<endl;
//         }
// };
// class Person2
// {
//     public:
//         void ShowPerson2()
//         {
//             cout<<"Person2函数调用"<<endl;
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
//     Person<Person1> p3;//类模板中成员函数创建时机：在调用时才创建
//     p3.func1();//调用时才创建
//     //p3.func2();//编译错误，类模板中成员函数创建时机：在调用时才创建
//     Person<Person2> p4;//类模板中成员函数创建时机：在调用时才创建
//     p4.func2();//调用时才创建
//     //p4.func1();//编译错误，类模板中成员函数创建时机：在调用时才创建

//     system("pause");
//     return 0;
// }


// /*类模板参数作函数对象*/
// //类模板实例化出的对象向函数传参的方式：
// //1.指定传入的类型--直接显示对象的数据类型
// //2.参数模板化--将对象中的参数变为模板进行传递
// //3.整个类模板化--将这个对象类型模板化进行传递
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
// void showPerson1(Person<string,int> &p)//指定传入的类型--直接显示对象的数据类型
// {
//     cout<<"姓名："<<p.m_Name<<"  年龄："<<p.m_Age<<endl;
// }
// template<class T1,class T2>
// void showPerson2(Person<T1,T2> &p)//参数模板化--将对象中的参数变为模板进行传递
// {
//     cout<<"姓名："<<p.m_Name<<"  年龄："<<p.m_Age<<endl;
// }
// template<class T>
// void showPerson3(T &p)//整个类模板化--将这个对象类型模板化进行传递
// {
//     cout<<"姓名："<<p.m_Name<<"  年龄："<<p.m_Age<<endl;
// }
//
// void test01()
// {
//     Person<string,int>p1("孙悟空",100);
//     showPerson1(p1);//指定传入的类型--直接显示对象的数据类型
// }
// void test02()
// {
//     Person<string,int>p2("猪八戒",120);
//     showPerson2(p2);//指定传入的类型--直接显示对象的数据类型
// }
// void test03()
// {
//     Person<string,int>p3("唐僧",40);
//     showPerson3(p3);//参数模板化--将对象中的参数变为模板进行传递
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


/*类模板与继承*/
//当类模板碰到继承时，需要注意以下几点：
//1.当子类继承的父类是一个类模板时，子类在声明时必须指定父类的模板参数类型，否则编译器无法给子类分配内存；
//2.如果想灵活指定出父类中的数据类型，子类也需要变为类模板；
// #include<iostream>
// using namespace std;

// template<class T>
// class Base
// {
//     public:
//         Base()
//         {
//             cout<<"Base构造函数调用"<<endl;
//         }
//     T m_Date;
// };
// //子类继承的父类是一个类模板时，子类在声明时必须指定父类的模板参数类型，否则编译器无法给子类分配内存
// class Son:public Base<int>
// {
//     public:
//         Son()
//         {
//             cout<<"Son构造函数调用"<<endl;
//         }
// };
// //如果想灵活指定出父类中的数据类型，子类也需要变为类模板
// template<class T1,class T2>
// class Son2:public Base<T1>
// {
//     public:
//         Son2()
//         {
//             cout<<"Son2构造函数调用"<<endl;
//             cout<<"T1的类型:"<<typeid(T1).name()<<endl;
//             cout<<"T2的类型:"<<typeid(T2).name()<<endl;
//         }
//         T2 m_Date2;
// };

// int main()
// {
//     Son s1;//子类继承的父类是一个类模板时，子类在声明时必须指定父类的模板参数类型，否则编译器无法给子类分配内存
//     Son2<int,double> s2;//如果想灵活指定出父类中的数据类型，子类也需要变为类模板

//     system("pause");
//     return 0;
// }


// /*类模板成员函数类外实现*/
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
// //类模板构造函数类外实现
// template<class T1,class T2>
// Person<T1,T2>::Person(T1 name,T2 age)
// {
//     this->m_Age=age;
//     this->m_Name=name;
// }
// //类模板成员函数类外实现
// template<class T1,class T2>
// void Person<T1,T2>::showPerson()
// {
//     cout<<"姓名："<<this->m_Name<<" 年龄："<<this->m_Age<<endl;
// }

// int main()
// {
//     Person<string,int> p1("张三",18);
//     Person<string,int> p2("李四",20);
//     p1.showPerson();
//     p2.showPerson();

//     system("pause");
//     return 0;
// }


// /*类模板分文件编写问题及解决*/
// //类模板中成员函数创建时期是在调用阶段，导致分文件编写时链接不到
// //解决方法1：直接包含.cpp源文件
// //解决方法2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
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
// // //类模板构造函数类外实现
// // template<class T1,class T2>
// // Person<T1,T2>::Person(T1 name,T2 age)
// // {
// //     this->m_Age=age;
// //     this->m_Name=name;
// // }
// // //类模板成员函数类外实现
// // template<class T1,class T2>
// // void Person<T1,T2>::showPerson()
// // {
// //     cout<<"姓名："<<this->m_Name<<" 年龄："<<this->m_Age<<endl;
// // }

// int main()
// {
//     Person<string,int> p1("张三",18);
//     p1.showPerson();

//     system("pause");
//     return 0;
// }


// /*类模板与友元*/
// //全局函数类内实现--直接在类内声明即可
// //全局函数类外实现--需要提前让编译器知道全局函数的存在，使用关键字friend声明友元函数
// #include<iostream>
// #include<string>
// using namespace std;

// //提前让编译器知道Person类的存在
// template<class T1,class T2>
// class Person;

// //全局函数类外实现
// template<class T1,class T2>
// void showPerson2(Person<T1,T2> &p)
// {
//     cout<<"全局函数类外实现："<<endl;
//     cout<<"姓名："<<p.m_Name<<" 年龄："<<p.m_Age<<endl;
// }

// template<class T1,class T2>
// class Person
// {
//     //1.全局函数类外实现--需要提前让编译器知道全局函数的存在，使用关键字friend声明友元函数
//     friend void showPerson(Person<T1,T2> &p)
//     {
//         cout<<"全局函数类内实现："<<endl;
//         cout<<"姓名："<<p.m_Name<<" 年龄："<<p.m_Age<<endl;
//     }
//     //2.全局函数类外实现--需要提前让编译器知道全局函数的存在，使用关键字friend声明友元函数
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
//     Person<string,int> p1("张三",18);
//     Person<string,int> p2("李四",20);
//     showPerson(p1);//全局函数类内实现--直接在类内声明即可
//     showPerson2(p2);//全局函数类外实现--需要提前让编译器知道全局函数的存在，使用关键字friend声明友元函数

//     system("pause");
//     return 0;
// }


// /*类模板相关案例--实现一个通用的数组类，要求如下：
//     1.可以对内置数据类型以及自定义数据类型的数据进行存储
//     2.将数组中的数据存储到堆区
//     3.构造函数中可以传入数组的容量
//     4.提供对应的拷贝构造函数以及Operator=防止浅拷贝问题
//     5.提供尾插法和尾删法对数组中的数据进行增加和删除
//     6.可以通过下标的方法访问数组中的元素
//     7.可以获取数组中当前元素数量和数组的容量
// */
// #include<iostream>
// #include<string>
// using namespace std;

// //自定义数据类型--Person类
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

//         //重载<<运算符
//         friend ostream& operator<<(ostream& os, const Person& person)
//         {
//             os << "Name: " << person.m_Name << ", Age: " << person.m_Age<<endl;
//             return os;
//         }

//         string m_Name;
//         int m_Age;
// };
// //自定义数组类模板
// template<class T>
// class MyArray
// {
//     public:
//         MyArray(int capacity=10)//构造函数
//         {
//             this->m_Capacity=capacity;
//             this->m_Size=0;
//             this->m_pAddr= new T[this->m_Capacity];//在堆区开辟数组空间
//         }
//         //拷贝构造函数
//         MyArray(const MyArray &arr)//深拷贝
//         {
//             this->m_Capacity=arr.m_Capacity;
//             this->m_Size=arr.m_Size;
//             this->m_pAddr=new T[this->m_Capacity];//在堆区开辟数组空间
//             for(int i=0;i<this->m_Size;i++)
//             {
//                 this->m_pAddr[i]=arr.m_pAddr[i];
//             }
//         }
//         //重载=运算符
//         MyArray& operator=(const MyArray &arr)//深拷贝
//         {
//             if(this==&arr)//自我赋值判断
//                 return *this;
//             //释放原有空间
//             if(this->m_pAddr!=nullptr)
//             {
//                 delete[] this->m_pAddr;
//                 this->m_pAddr=nullptr;
//             }
//             this->m_Capacity=arr.m_Capacity;
//             this->m_Size=arr.m_Size;
//             this->m_pAddr=new T[this->m_Capacity];//在堆区开辟数组空间
//             for(int i=0;i<this->m_Size;i++)
//             {
//                 this->m_pAddr[i]=arr.m_pAddr[i];
//             }
//             return *this;
//         }
//         //尾插法
//         void push_back(const T &val)
//         {
//             if(this->m_Size>=this->m_Capacity)
//             {
//                 cout<<"数组已满，无法插入数据！"<<endl;
//                 return;
//             }
//             this->m_pAddr[this->m_Size]=val;//将数据插入到数组末尾
//             this->m_Size++;//数组元素数量加1
//         }
//         //尾删法
//         void pop_back()
//         {
//             if(this->m_Size<=0)
//             {
//                 cout<<"数组已空，无法删除数据！"<<endl;
//                 return;
//             }
//             this->m_Size--;//数组元素数量减1
//         }
//         //重载下标运算符
//         T& operator[](int index)
//         {
//             if(index<0||index>=this->m_Size)
//             {
//                 cout<<"下标越界！"<<endl;
//                 exit(-1);
//             }
//             return this->m_pAddr[index];//返回数组元素
//         }
//         //获取数组容量
//         int getCapacity()
//         {
//             return this->m_Capacity;
//         }
//         //获取数组当前元素数量
//         int getSize()
//         {
//             return this->m_Size;
//         }
//         //析构函数
//         ~MyArray()
//         {
//             if(this->m_pAddr!=nullptr)
//             {
//                 delete[] this->m_pAddr;//释放堆区空间
//                 this->m_pAddr=nullptr;
//             }
//         }
//         //打印数组元素
//         void printArray()
//         {
//             for(int i=0;i<this->m_Size;i++)
//             {
//                 cout<<this->m_pAddr[i]<<" ";
//             }
//             cout<<endl;
//         }
//     private:
//         T* m_pAddr;//数组指针
//         int m_Capacity;//数组容量
//         int m_Size;//数组当前元素数量
// };
// //内置数据类型测试
// void test01()
// {
//     MyArray<int> arr1(5);//创建一个容量为5的数组
//     arr1.push_back(1);//插入数据
//     arr1.push_back(2);
//     arr1.push_back(3);
//     arr1.push_back(4);
//     arr1.push_back(5);
//     arr1.printArray();//打印数组元素
//     cout<<"数组容量："<<arr1.getCapacity()<<endl;//获取数组容量
//     cout<<"数组当前元素数量："<<arr1.getSize()<<endl;//获取数组当前元素数量
//     arr1.pop_back();//删除数据
//     arr1.printArray();//打印数组元素
// }
// //自定义数据类型测试
// void test02()
// {
//     MyArray<string> arr2(5);//创建一个容量为5的数组
//     arr2.push_back("张三");//插入数据
//     arr2.push_back("李四");
//     arr2.push_back("王五");
//     arr2.push_back("赵六");
//     arr2.push_back("钱七");
//     arr2.printArray();//打印数组元素
//     cout<<"数组容量："<<arr2.getCapacity()<<endl;//获取数组容量
//     cout<<"数组当前元素数量："<<arr2.getSize()<<endl;//获取数组当前元素数量
//     arr2.pop_back();//删除数据
//     arr2.printArray();//打印数组元素
// }
// //测试运算符重载operator=
// void test03()
// {
//     MyArray<Person> arr3(5);//创建一个容量为5的数组
//     Person p1("张三",18);//创建一个Person对象
//     Person p2("李四",20);
//     arr3.push_back(p1);//插入数据
//     arr3.push_back(p2);
//     arr3.printArray();//打印数组元素
//     cout<<"数组容量："<<arr3.getCapacity()<<endl;//获取数组容量
//     cout<<"数组当前元素数量："<<arr3.getSize()<<endl;//获取数组当前元素数量
//     arr3.pop_back();//删除数据
//     arr3.printArray();//打印数组元素
//     MyArray<Person> arr4=arr3;//测试运算符重载operator=
//     arr4.printArray();//打印数组元素
//     cout<<"数组容量："<<arr4.getCapacity()<<endl;//获取数组容量
//     cout<<"数组当前元素数量："<<arr4.getSize()<<endl;//获取数组当前元素数量
//     arr4.pop_back();//删除数据
//     arr4.printArray();//打印数组元素
// }
// int main()
// {
//     // cout<<"内置数据类型测试："<<endl;
//     // test01();//内置数据类型测试
//     // cout<<"------------------------"<<endl;
//     // cout<<"自定义数据类型测试："<<endl;
//     // test02();//自定义数据类型测试
//     // cout<<"------------------------"<<endl;
//     cout<<"运算符重载operator=测试："<<endl;
//     test03();//测试运算符重载operator=
//     cout<<"------------------------"<<endl;

//     system("pause");
//     return 0;
// }


// /*vector存放内置数据类型*/
// //容器：vector
// //算法：for_each
// //迭代器：vector<int>::iterator
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
//         v.push_back(i+1);//尾插法
//     }
//     cout<<"vector容器中的数据:"<<endl;
//     // //遍历容器中的数据--使用for循环
//     // for(vector<int>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//     // {
//     //     cout<<*it<<" ";
//     // }
//     // cout<<endl;
//     //使用STL提供的标准遍历算法--for_each（）
//     for_each(v.begin(),v.end(),print);//遍历容器中的数据--使用STL提供的标准遍历算法--for_each()
//     cout<<endl;
//     // //原始方式
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
//     test01();//vector存放内置数据类型
    
//     system("pause");
//     return 0;
// }


// /*vector存放自定义数据类型*/
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
//     Person p1("张三",18);
//     Person p2("李四",20);
//     Person p3("王五",22);
//     v.push_back(p1);//尾插法
//     v.push_back(p2);//尾插法
//     v.push_back(p3);//尾插法
//     cout<<"vector容器中的数据:"<<endl;
//     //遍历容器中的数据--使用for循环
//     for(vector<Person>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//     {
//         //cout<<"姓名："<<(*it).m_Name<<" 年龄："<<(*it).m_Age<<endl;//使用*运算符访问成员变量
//         cout<<"姓名："<<it->m_Name<<"年龄："<<it->m_Age<<endl;//使用->运算符访问成员变量
//     }
// }
// void test02()
// {
//     vector<Person *> v;
//     Person p1("张三",18);
//     Person p2("李四",20);
//     Person p3("王五",22);
//     v.push_back(&p1);//尾插法
//     v.push_back(&p2);//尾插法
//     v.push_back(&p3);//尾插法
//     cout<<"vector容器中的数据:"<<endl;
//     //遍历容器中的数据--使用for循环
//     for(vector<Person *>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//     {
//         //cout<<"姓名："<<(*it).m_Name<<" 年龄："<<(*it).m_Age<<endl;//使用*运算符访问成员变量
//         cout<<"姓名："<<(*it)->m_Name<<" 年龄："<<(*it)->m_Age<<endl;//使用->运算符访问成员变量
//     } 
// }
// int main()
// {
//     //test01();//vector存放自定义数据类型
//     test02();//vector存放自定义数据类型指针

//     system("pause");
//     return 0;
// }


// /*vector容器嵌套容器*/
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
//     v.push_back(v1);//尾插法
//     v.push_back(v2);//尾插法
//     v.push_back(v3);//尾插法
//     cout<<"vector容器中的数据:"<<endl;
//     //遍历容器中的数据--使用for循环
//     for(vector<vector<int>>::iterator it=v.begin();it!=v.end();it++)//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//     {
//         //访问嵌套容器中的数据--使用for循环
//         for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++)//vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//         {
//             cout<<*vit<<" ";//使用*运算符访问成员变量
//         }
//         cout<<endl;
//     }
//     cout<<"------------------------"<<endl;
// }

// int main()
// {
//     test01();//vector容器嵌套容器

//     system("pause");
//     return 0;
// }


// //string是c++风格的字符串，而string本质上是一个类，类内部封装了char*指针，管理这个字符串，是一个char*型的容器
// /*string和char*的区别：
//     1、string是一个类，char*是一个指针；
//     2、string可以动态扩展，char*不能；
//     3、string可以直接使用下标访问，char*需要使用指针访问；
//     4、string可以直接使用+号连接，char*需要使用strcat函数连接；
//     5、string可以直接使用赋值运算符=，char*需要使用strcpy函数赋值；
//     6、string可以直接使用size()函数获取长度，char*需要使用strlen函数获取长度；
//     7、string可以直接使用clear()函数清空，char*需要使用memset函数清空；
//     8、string可以直接使用empty()函数判断是否为空，char*需要判断首字符是否为'\0'；
//     9、string可以直接使用find()函数查找子串，char*需要使用strstr函数查找子串；
//     10、string可以直接使用substr()函数截取子串，char*需要使用strncpy函数截取子串；
//     11、string可以直接使用compare()函数比较字符串，char*需要使用strcmp函数比较字符串；
//     12、string可以直接使用c_str()函数转换为c风格字符串，char*不需要转换；
//     13、string可以直接使用getline()函数读取一行字符串，char*需要使用cin.getline()函数读取一行字符串；
//     14、string可以直接使用getline(cin, str)读取一行字符串，char*不支持这种方式读取一行字符串；
//     15、string可以直接使用getline(cin, str, '\n')读取一行字符串，char*不支持这种方式读取一行字符串；
//     16、string可以直接使用getline(cin, str, ' ')读取一行字符串，char*不支持这种方式读取一行字符串；
//     17、string可以直接使用getline(cin, str, '\t')读取一行字符串，char*不支持这种方式读取一行字符串；
//     18、string可以直接使用getline(cin, str, '\r')读取一行字符串，char*不支持这种方式读取一行字符串；
//     19、string可以直接使用getline(cin, str, '\f')读取一行字符串，char*不支持这种方式读取一行字符串；
//     20、string可以直接使用getline(cin, str, '\v')读取一行字符串，char*不支持这种方式读取一行字符串*/
// /*string的构造函数：
//     string();//默认构造函数
//     string(const char *s);//将C风格字符串转换为C++风格字符串
//     string(const string &str);//拷贝构造函数
//     string(int n,char c);//将n个字符c组成的字符串
// */
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1;//默认构造函数
//     const char *s="hello world!";//将C风格字符串转换为C++风格字符串
//     string str2(s);
//     cout<<"str2:"<<str2<<endl;
//     string str3(str2);//拷贝构造函数
//     cout<<"str3:"<<str3<<endl;
//     string str4(5,'a');//将5个字符a组成的字符串
//     cout<<"str4:"<<str4<<endl;
// }
// int main()
// {
//     test01();//string的构造函数

//     system("pause");
//     return 0;
// }


// /*string的赋值函数原型：
//     string &operator=(const char *str);//char*类型的字符串赋值给string类型的字符串
//     string &operator=(const string &str);//把字符串str赋值给当前的字符串
//     string &operator=(char c);//字符赋值给当前的字符串
//     string &assign(const char *str);//把字符串str赋值给当前的字符串
//     string &assign(const char *str,int n);//把字符串str的前n个字符赋值给当前的字符串
//     string &assign(const string &str);//把字符串str赋值给当前的字符串
//     string &assign(int n,char c);//把n个字符c赋值给当前的字符串
// */
// #include<iostream>
// #include<string>
// using namespace std;

// void test01()
// {
//     string str1="hello world!";//char*类型的字符串赋值给string类型的字符串
//     cout<<"str1:"<<str1<<endl;
//     string str2=str1;//把字符串str1赋值给当前的字符串
//     cout<<"str2:"<<str2<<endl;
//     string str3="c";//将字符c赋值给当前的字符串
//     cout<<"str3:"<<str3<<endl;
//     string str4;
//     str4.assign("hello world!");//把字符串str赋值给当前的字符串
//     cout<<"str4:"<<str4<<endl;
//     string str5;
//     str5.assign("hello world!",5);//把字符串str的前5个字符赋值给当前的字符串
//     cout<<"str5:"<<str5<<endl;
//     string str6;
//     str6.assign(str1);//把字符串str1赋值给当前的字符串
//     cout<<"str6:"<<str6<<endl;
//     string str7;
//     str7.assign(5,'a');//把5个字符a赋值给当前的字符串
//     cout<<"str7:"<<str7<<endl;
// }

// int main()
// {
//     test01();//string的赋值函数

//     system("pause");
//     return 0;
// }


// //string字符串拼接
// /*string的拼接函数原型：
//     string &operator+=(const char *str);//重载+=运算符，把字符串str拼接到当前的字符串
//     string &operator+=(const string &str);//重载+=运算符，把字符串str拼接到当前的字符串
//     string &operator+=(char c);//重载+=运算符，把字符串str拼接到当前的字符串
//     string &append(const char *str);//把字符串str拼接到当前的字符串
//     string &append(const char *str,int n);//把字符串str的前n个字符拼接到当前的字符串
//     string &append(const string &str);//把字符串str拼接到当前的字符串
//     string &append(const string &s,int pos,int n);//把字符串s的从pos开始的n个字符拼接到当前的字符串
// */
// #include<iostream>
// #include<string>
// using namespace std;

// void test01()
// {
//     string str1="我";//char*类型的字符串赋值给string类型的字符串
//     const char *s="是一个";
//     str1+=s;//重载+=运算符，把字符串s拼接到当前的字符串
//     cout<<"str1:"<<str1<<endl;
//     string str2="学生";
//     str1+=str2;//重载+=运算符，把字符串str2拼接到当前的字符串
//     cout<<"str1:"<<str1<<endl;
//     string str3=str1;
//     const char c=':';
//     str3+=c;//重载+=运算符，把字符串str3拼接到当前的字符串
//     cout<<"str3:"<<str3<<endl;
//     cout<<"------------------------"<<endl;
//     string str4="I am a";
//     const char *s1=" student!";
//     str4.append(s1);//把字符串s拼接到当前的字符串
//     cout<<"str4:"<<str4<<endl;
//     string str5="I am a";
//     str5.append(s1,8);//把字符串s的前8个字符拼接到当前的字符串
//     cout<<"str5:"<<str5<<endl;
//     string str6;
//     str6.append(str4);//把字符串str4拼接到当前的字符串
//     cout<<"str6:"<<str6<<endl;
//     string str7;
//     str7.append(str4,0,6);
//     const char *s2=" ZZU";
//     str7.append(s2).append(s1);
//     cout<<"str7:"<<str7<<endl;//把字符串s的从pos开始的n个字符拼接到当前的字符串
// }

// int main()
// {
//     test01();//string的拼接函数

//     system("pause");
//     return 0;
// }


//string的查找和替换
//查找：查找指定字符串是否存在，返回第一个字符的下标，找不到返回-1
//替换：将指定字符串替换为新的字符串，返回替换的个数
/*查找和替换的函数原型：
    int find(const string &str,int pos=0)const;//查找指定字符串str在当前字符串中第一次出现的位置，从pos开始查找，默认从0开始查找
    int find(const char *str,int pos=0)const;//查找指定字符串str在当前字符串中第一次出现的位置，从pos开始查找，默认从0开始查找
    int find(const char *str,int pos,int n)const;//从pos开始查找str的前n个字符在当前字符串中第一次出现的位置，默认从0开始查找
    int find(const char c,int pos=0)const;//查找字符c第一次出现的位置
    int rfind(const string &str,int pos=npos)const;//查找str最后一次出现的位置，从pos开始查找
    int rfind(const char *str,int pos=npos)const;//查找str最后一次出现的位置，从pos开始查找
    int rfind(const char *str,int pos,int n)const;//从pos开始查找str的前n个字符在当前字符串中最后一次出现的位置
    int rfind(const char c,int pos=npos)const;//查找字符c最后一次出现的位置
    string &replace(int pos,int n,const string &str);//将当前字符串中从pos开始的n个字符替换为str
    string &replace(int pos,int n,const char *str);//将当前字符串中从pos开始的n个字符替换为str
    string &replace(int pos,int n,const char *str,int m);//将当前字符串中从pos开始的n个字符替换为str的前m个字符
    string &replace(int pos,int n,char c);//将当前字符串中从pos开始的n个字符替换为字符c
*/
//find查找是从左往右，rfind查找是从右往左
//find找到字符串后返回查找的第一个字符的下标，rfind找到字符串后返回查找的最后一个字符的下标
//replace在替换时要制定从哪个位置起，多少个字符，替换成什么样的字符串
// #include<iostream>
// #include<string>
// using namespace std;
// //string的查找
// void test01()
// {
//     string str1="abcdefgdehfc";
//     string str2="de";
//     //查找指定字符串str在当前字符串中第一次出现的位置，从pos开始查找，默认从0开始查找
//     int pos=str1.find(str2);
//     if(pos!=-1)
//     {
//         cout<<str2<<" 在str1中的位置为:"<<pos<<endl;
//     }
//     else
//     {
//         cout<<str2<<" 不在str1中!"<<endl;
//     }
//     //查找指定字符串str在当前字符串中最后一次出现的位置
//     int npos=str1.rfind(str2);
//     if(pos!=-1)
//     {
//         cout<<str2<<" 在str1中的位置为:"<<npos<<endl;
//     }
//     else
//     {
//         cout<<str2<<" 不在str1中!"<<endl;
//     }
// }
// //string的替换
// void test02()
// {
//     string str1="abcdefg";
//     cout<<"替换前的str1:"<<str1<<endl;
//     const char *s="12345";
//     str1.replace(2,3,s);//将当前字符串中从pos开始的n个字符替换为str
//     cout<<"替换后的str1:"<<str1<<endl;
// }
// int main()
// {
//     test01();//string的查找
//     test02();//string的替换

//     system("pause");
//     return 0;
// }


//string的字符串比较
//比较方式：按字符的ASCII码值进行比较，=返回0，>返回1，<返回-1
/*字符串比较函数原型：
    int compare(const string &str)const;
    int compare(const char *c)const;
*/
// #include<iostream>
// #include<string>
// using namespace std;
// //string的字符串比较
// void test01()
// {
//     string str1="hello world!";
//     string str2="wello world!";
//     if(str1.compare(str2)==0)
//     {
//         cout<<"str1和str2相等!"<<endl;
//     }
//     else if(str1.compare(str2)<0)
//     {
//         cout<<"str1小于str2!"<<endl;
//     }
//     else
//     {
//         cout<<"str1大于str2!"<<endl;
//     }
// }
// int main()
// {
//     test01();//string的字符串比较

//     system("pause");
//     return 0;
// }


//string字符存取
//string中单个字符的存取方式：使用下标运算符[]和at()函数
//下标运算符[]：可以直接访问字符串中的字符，返回的是字符的引用，可以修改字符串中的字符
//at()函数：可以直接访问字符串中的字符，返回的是字符的值，不能修改字符串中的字符
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1="hello world!";
//     cout<<"str1:"<<str1<<endl;
//     //使用下标运算符[]访问字符串中的字符
//     for(int i=0;i<str1.size();i++)
//     {
//         cout<<str1[i]<<" ";
//     }
//     cout<<endl;
//     //使用at()函数访问字符串中的字符
//     for(int i=0;i<str1.size();i++)
//     {
//         cout<<str1.at(i)<<" ";
//     }
//     cout<<endl;
//     //使用下标运算符[]修改字符串中的字符
//     for(int i=0;i<str1.size();i++)
//     {
//         str1[i]='a'+i;
//     }
//     cout<<"str1:"<<str1<<endl;
//     //使用at()函数修改字符串中的字符
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


// //string的插入和删除--对string字符串进行插入和删除字符操作
// //插入：在指定位置插入指定字符串，返回插入后字符串的长度
// //删除：删除指定位置的字符，返回删除后字符串的长度
// /*插入和删除的函数原型：
//     string &insert(int pos,const char *s);//插入字符串
//     string &insert(int pos,const string &str);//插入字符串
//     string &insert(int pos,int n,char c);//在指定位置插入n个字符c
//     string &erase(int pos=0,int n=npos);//删除从Pos开始的n个字符
// */
// #include<iostream>
// #include<string>
// using namespace std;
// void test01()
// {
//     string str1="hello world!";
//     string str2="student";
//     cout<<"插入前的str1:"<<str1<<endl;
//     const char *s="12345";
//     str1.replace(6,5,str2);
//     cout<<"替换后的str1:"<<str1<<endl;
//     str1.insert(6,s);//在指定位置插入字符串
//     str1.insert(11,1,' ');
//     cout<<"插入后的str1:"<<str1<<endl;
//     str2.insert(0,5,'a');//在指定位置插入n个字符c
//     str2.insert(5,1,' ');
//     cout<<"插入后的str2:"<<str2<<endl;   
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// //string字串--从字符串中获取想要的字串
// /*string的字串函数原型：
//     string substr(int pos=0,int n=npos)const;//从pos开始获取n个字符组成的字串，n为npos表示获取到字符串末尾
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


// /*vector构造函数--创建vector容器*/
// /*vector构造函数原型:
//     vector(T) v;//采用实现类实现，默认构造函数
//     vector(v.begin(),v.end());//将迭代器范围内的元素复制到vector容器中
//     vector(n,elem);//构造函数将n个elem拷贝给本身
//     vector(const vector &vec);//拷贝构造函数
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
//     vector<int> v1;//默认构造函数
//     for(int i=0;i<10;i++)
//     {
//         v1.push_back(i);
//     }
//     printVector(v1);
//     //将迭代器范围内的元素复制到vector容器中
//     vector<int> v2=vector<int>(v1.begin(),v1.end());
//     printVector(v2);
//     //构造函数将n个elem拷贝给本身
//     vector<int> v3=vector<int>(10,100);
//     printVector(v3);
//     //拷贝构造函数
//     vector<int> v4=v3;
//     printVector(v4);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector容器赋值操作*/
// /*vector赋值函数原型：
//     vector &operator=(const vector &vec);//重载等号操作符
//     assign(n,elem);//将n个elem拷贝给本身
//     assign(beg,end);//将迭代器范围内的元素复制到vector容器中
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
//     //重载等号操作符
//     vector<int> v2=v1;
//     printVector(v2);
//     //将迭代器范围内的元素复制到vector容器中
//     vector<int> v3;
//     v3.assign(v1.begin(),v1.end());
//     printVector(v3);
//     //将n个elem拷贝给本身
//     vector<int> v4;
//     v4.assign(10,100);
//     printVector(v4);
// }
// int main()
// {
//     test01();//vector容器赋值操作

//     system("pause");
//     return 0;
// }


// /*vector容量和大小*/
// /*容量函数原型：
//     empty();//判断容器是否为空
//     capacity();//容器的容量
//     size();//返回容器中元素的个数
//     resize(int num);//重新指定容器的长度为num，若容器变长则以默认值填充新位置，若变短则末尾超出容器长度的元素被删除
//     resize(int num,elem);//重新指定容器的长度为num，若容器变长则以elem值填充新位置，若变短则末尾超出容器长度的元素被删除
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
//         cout<<"v1为空!"<<endl;
//     }
//     else
//     {
//         cout<<"v1不为空!"<<endl;
//         cout<<"v1的容量为:"<<v1.capacity()<<endl;
//         cout<<"v1的大小为:"<<v1.size()<<endl;
//         v1.resize(15);//重新指定容器的容量为15,默认以0填充新位置
//         cout<<"重新指定容量(以0填充)后的v1:"<<endl;
//         printVector(v1);
//         v1.resize(5);//重新指定容器的容量为5,删除末尾超出容器长度的元素
//         cout<<"重新指定容量后的v1:"<<endl;
//         printVector(v1);
//         v1.resize(12,30);//重新指定容器的容量为12,以30填充新位置
//         cout<<"重新指定容量(以30填充)后的v1:"<<endl;
//         printVector(v1);
//     }
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector插入和删除*/
// /*函数原型:
//     push_back(elem);//在容器末尾添加一个元素elem
//     pop_back();//删除容器末尾的一个元素
//     insert(const_iterator pos,elem);//在pos位置插入一个元素elem
//     insert(const_iterator pos,int n,elem);//在pos位置插入n个元素elem
//     erase(const_iterator pos);//删除pos位置的元素
//     erase(const_iterator start,const_iterator end);//删除[start,end)范围内的元素
//     clear();//清空容器中的所有元素
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
//         v1.push_back((i+1)*10);//尾插法
//     }
//     printVector(v1);//打印数组元素
//     //尾删
//     v1.pop_back();
//     printVector(v1);
//     //使用迭代器插入单个元素
//     v1.insert(v1.begin(),100);
//     printVector(v1);
//     //使用迭代器插入多个元素
//     v1.insert(v1.begin()+1,2,200);
//     printVector(v1);
//     //使用迭代器删除指定位置单个元素
//     v1.erase(v1.begin()+2);
//     printVector(v1);
//     //使用迭代器删除指定区间的元素
//     v1.erase(v1.begin()+1,v1.begin()+5);//指定区间左闭右开
//     printVector(v1);
// }
// int main()
// {
//     test01();//vector插入和删除

//     system("pause");
//     return 0;
// }


// /*vector容器数据存取*/
// /*函数原型：
//     at(int idx);//返回索引idx所指的数据
//     operator[];//返回索引idx所指的数据
//     front();//返回容器中第一个数据元素
//     back();//返回容器中最后一个数据元素
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
//     //返回索引idx所指的数据
//     cout<<"容器中第一个元素为:"<<v1.front()<<endl;//返回容器中第一个数据元素
//     cout<<"容器中第二个元素为:"<<v1.at(1)<<endl;
//     cout<<"容器中第三个元素为:"<<v1[2]<<endl;
//     cout<<"容器中最后一个元素为:"<<v1.back()<<endl;//返回容器中最后一个数据元素
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector互换容器--swap(vec)//将vec与该容器的元素进行互换*/
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
//     cout<<"交换前v1中的元素:";
//     printVector(v1);
//     vector<int> v2;
//     for(int i=0;i<5;i++)
//     {
//         v2.push_back(5-i);
//     }
//     cout<<"交换前v2中的元素:";
//     printVector(v2);
//     cout<<"<---------------------------->"<<endl;
//     v1.swap(v2);
//     cout<<"交换后v1中的元素:";
//     printVector(v1);
//     cout<<"交换后v2中的元素:";
//     printVector(v2);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*vector预留空间--减少vector在动态扩展容量时的扩展次数*/
// //函数原型：reserve(int len);//容器预留len个元素长度的空间，预留位置不初始化，元素不可访问
// #include<iostream>
// #include<vector>
// using namespace std;
// void test01()
// {
//     vector<int> v1;
//     //预留空间
//     v1.reserve(100000);//预留100000个元素长度的空间，减少vector在动态扩展容量时的扩展次数
//     int num=0;
//     int *p=nullptr;
//     for(int i=0;i<100000;i++)
//     {
//         v1.push_back(i+1);//尾插法
//         if(p!=&v1[0])
//         {
//             p=&v1[0];//vector动态扩展了一次内存，p重新指向了vector的首地址
//             num++;
//         }    
//     }
//     cout<<"vector动态扩展了 "<<num<<" 次容量！"<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*deque构造函数*/
// /*函数原型：
//     deque<T> deqT;//默认构造函数
//     deque(beg,end);构造函数将[beg,end)范围内的元素拷贝给本身
//     deque(n,elem);//构造函数将n个elem拷贝给本身
//     deque(const deque &deq);//拷贝构造函数
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
//     deque<int> d1;//默认构造函数
//     for(int i=0;i<10;i++)
//     {
//         d1.push_back(i);//尾插法
//     }
//     printDeque(d1);
//     //构造函数将[beg,end)范围内的元素拷贝给本身
//     deque<int> d2(d1.begin(),d1.end());
//     printDeque(d2);
//     //构造函数将n个elem拷贝给本身
//     deque<int> d3(10,100);
//     printDeque(d3);
//     //拷贝构造函数
//     deque<int> d4(d3);
//     printDeque(d4);
// }
// int main()
// {
//     test01();//deque构造函数

//     system("pause");
//     return 0;
// }


// /*deque容器赋值操作*/
// /*函数原型：
//     deque &operator=(const deque &deq);//重载等号操作符
//     assign(n,elem);//将n个elem拷贝给本身
//     assign(beg,end);//将迭代器范围内的元素复制到deque容器中
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
//         d1.push_back(i);//尾插法
//     }
//     printDeque(d1);
//     deque<int> d2=d1;//重载等号操作符
//     printDeque(d2);
//     //将迭代器范围内的元素复制到deque容器中
//     deque<int> d3;
//     d3.assign(d1.begin(),d1.begin()+5);//指定区间左闭右开
//     printDeque(d3);
//     //将n个elem拷贝给本身
//     deque<int> d4;
//     d4.assign(10,100);
//     printDeque(d4);
// }
// int main()
// {
//     test01();//deque容器赋值操作

//     system("pause");
//     return 0;
// }


// /*deque容器大小操作*/
// /*函数原型:
//     empty();//判断容器是否为空
//     size();//返回容器中元素的个数
//     resize(int num);//重新指定容器的长度为num，若容器变长则以默认值填充新位置，若变短则末尾超出容器长度的元素被删除
//     resize(int num,elem);//重新指定容器的长度为num，若容器变长则以elem值填充新位置，若变短则末尾超出容器长度的元素被删除
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
//         d1.push_back(i);//尾插法
//     }
//     printDeque(d1);
//     if(d1.empty())
//     {
//         cout<<"d1为空!"<<endl;
//     }
//     else
//     {
//         cout<<"d1不为空!"<<endl;
//         cout<<"d1的大小为:"<<d1.size()<<endl;
//         d1.resize(15);//重新指定容器的容量为15,默认以0填充新位置
//         cout<<"重新指定容量(以0填充)后的d1:"<<endl;
//         printDeque(d1);
//         d1.resize(5);//重新指定容器的容量为5,删除末尾超出容器长度的元素
//         cout<<"重新指定容量后的d1:"<<endl;
//         printDeque(d1);
//         d1.resize(12,30);//重新指定容器的容量为12,以30填充新位置
//         cout<<"重新指定容量(以30填充)后的d1:"<<endl;
//         printDeque(d1);
//     }
// }
// int main()
// {
//     test01();//deque容器大小操作

//     system("pause");
//     return 0;
// }


// /*deque的插入和删除*/
// /*函数原型
// 两端插入操作：
//     push_front(elem);//在容器头部添加一个元素elem
//     push_back(elem);//在容器尾部添加一个元素elem
//     pop_front();//删除容器头部的一个元素
//     pop_back();//删除容器尾部的一个元素
// 指定位置操作：
//     insert(const_iterator pos,elem);//在pos位置插入一个元素elem
//     insert(const_iterator pos,int n,elem);//在pos位置插入n个元素elem
//     erase(const_iterator pos);//删除pos位置的元素
//     erase(const_iterator start,const_iterator end);//删除[start,end)范围内的元素
//     clear();//清空容器中的所有元素
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
//         d1.push_back(i);//尾插法
//     }
//     printDeque(d1);//打印d1中的元素

//     //在容器头部添加一个元素elem
//     d1.push_front(100);
//     printDeque(d1);
//     //在容器尾部添加一个元素elem
//     d1.push_back(200);
//     printDeque(d1);
//     //删除容器头部的一个元素
//     d1.pop_front();
//     printDeque(d1);
//     //删除容器尾部的一个元素
//     d1.pop_back();
//     printDeque(d1);

//     //使用迭代器在指定位置插入单个元素
//     d1.insert(d1.begin(),50);//在容器头部插入一个元素50
//     printDeque(d1);
//     //使用迭代器在指定位置插入多个元素
//     d1.insert(d1.begin()+1,2,100);//在容器头部插入两个元素100
//     printDeque(d1);
//     //使用迭代器删除指定位置单个元素
//     d1.erase(d1.begin()+2);//删除容器头部的一个元素
//     printDeque(d1);
//     //使用迭代器删除指定区间的元素
//     d1.erase(d1.begin()+1,d1.begin()+5);//指定区间左闭右开
//     printDeque(d1);
// }
// int main()
// {
//     test01();//deque的插入和删除

//     system("pause");
//     return 0;
// }


// /*deque数据的存取*/
// /*函数原型：
//     at(int dex);//返回索引dex所指向的数据
//     operator[];//返回索引dex所指向的数据
//     front();//返回容器中第一个数据元素
//     back();//返回容器中最后一个数据元素
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
//         d1.push_back(i);//尾插法
//     }
//     printDeque(d1);//打印d1中的元素
//     cout<<"d1中的第一个数据元素为:"<<d1.at(0)<<endl;
//     cout<<"d1中的第二个数据元素为:"<<d1[1]<<endl;
//     cout<<"d1中的第一个数据元素为:"<<d1.front()<<endl;
//     cout<<"d1中的最后一个数据元素为:"<<d1.back()<<endl;
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*deque容器排序--sort(iterator beg,iterator end):对beg和end区间内数据元素进行排序*/
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
//     cout<<"排序前：";
//     printDeque(d1);
//     sort(d1.begin(),d1.end());//默认升序排列，区间左闭右开
//     cout<<"排序后：";
//     printDeque(d1);
// }
// int main()
// {
//     test01();

//     system("pause");
//     return 0;
// }


// /*评委打分案例--有5位选手ABCDE，10位评委分别对每一位选手打分，去除最高分和最低分后取平均分*/
// /*实现步骤：
//     1、创建5位选手，放到vector容器中
//     2、遍历vector容器取出每一位选手，执行for循环，可以把评委的打分存到deque容器中
//     3、sort算法对deque中分数进行排序，去除最高分和最低分
//     4、遍历deque容器中数据元素，累加总分
//     5、获取平均分
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
//         string name="选手";
//         name+=nameSeed[i];
//         int score=0;
//         Person p(name,score);
//         v.push_back(p);//将创建的Person对象放到vector容器中
//     }
// }
// void printVector(vector<Person> &v)
// {
//     for(vector<Person>::const_iterator it=v.begin();it!=v.end();it++)
//     {
//         cout<<"姓名："<<(*it).m_Name<<"     分数："<<(*it).m_Score<<endl;
//     }
//     cout<<endl;
// }
// void setScore(vector<Person> &v)
// {
//     for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
//     {
//         //创建deque容器存放评委打分结果
//         deque<int> d;
//         for(int i=0;i<10;i++)
//         {
//             int score=rand()%41+60;
//             d.push_back(score);
//         }
//         // cout<<"选手："<<it->m_Name<<"   评委打分：";
//         // for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
//         // {
//         //     cout<<*it<<" ";
//         // }
//         // cout<<endl;
//         //排序
//         sort(d.begin(),d.end());
//         //去除最高分和最低分
//         d.pop_back();
//         d.pop_front();
//         //取平均分
//         int sum=0;
//         for(deque<int>::iterator it=d.begin();it!=d.end();it++)
//         {
//             sum+=*it;
//         }
//         int avg=sum/d.size();
//         //给选手赋分
//         it->m_Score=avg;
//     }
// }
// int main()
// {
//     //随机数种子
//     srand((unsigned int)time(NULL));
//     //创建5位选手
//     vector<Person> v;
//     creatPerson(v);
//     //printVector(v);
//     //给5位选手打分
//     setScore(v);
//     //显示最后分数
//     printVector(v);

//     system("pause");
//     return 0;
// }