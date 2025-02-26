
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
#include<iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Base的构造函数"<<endl;
        }
        ~Base()
        {
            cout<<"Base的析构函数"<<endl;
        }
};
class Son:public Base
{
    public:
        Son()
        {
            cout<<"Son的构造函数"<<endl;
        }
        ~Son()
        {
            cout<<"Son的析构函数"<<endl;
        }
};

int main()
{   
    //Base b;
    Son s;

    system("pause");
    return 0;
}