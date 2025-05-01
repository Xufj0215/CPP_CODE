
// //#include<iostream>
// #include"workManger.h"
// using namespace std;

// //?????????????
// workManager::workManager()
// {
//     //1.?????????
//     ifstream ifs;
//     ifs.open(FILENAME,ios::in);
//     if(!ifs.is_open())
//     {
//         cout<<"?????????"<<endl;
//         //?????????
//         //????????????
//         this->m_EmpNum=0;
//         //???????????????
//         this->worker=NULL;
//         //??????????????
//         this->fileIsEmpty=true;
//         //??????
//         ifs.close();
//         return;
//     }
//     //2.???????????????
//     char ch;
//     ifs>>ch;
//     if(ifs.eof())
//     {
//         cout<<"??????"<<endl;
//         //????????????
//         this->m_EmpNum=0;
//         //???????????????
//         this->worker=NULL;
//         //??????????????
//         this->fileIsEmpty=true;
//         //??????
//         ifs.close();
//         return;
//     }
//     //3.???????????????
//     int num=this->getEmpNum();
//     //cout<<"??????????"<<num<<endl;
//     this->m_EmpNum=num;
//     //??????
//     this->worker=new Worker*[this->m_EmpNum];
//     //????????
//     this->initEmp();
//     //????????
//     this->fileIsEmpty=false;
//     //cout<<"????????????"<<endl;
//     // for(int i=0;i<this->m_EmpNum;i++)
//     // {
//     //     cout<<"???????"<<this->worker[i]->m_Id
//     //         <<"\t???????:"<<this->worker[i]->m_Name
//     //         <<"\t??¦Ë:"<<this->worker[i]->getDeptId()
//     //         <<"\t??¦Ë???:"<<this->worker[i]->getDeptId()<<endl;
//     // }
//     //??????
//     ifs.close();
// }

// //???????§Ö????????
// int workManager::getEmpNum()
// {
//     ifstream ifs;
//     ifs.open(FILENAME,ios::in);
//     int id;
//     string name;
//     int dId;
//     int num=0;
//     while(ifs>>id&&ifs>>name&&ifs>>dId)
//     {
//         num++;
//     }
//     return num;
// }

// //????????
// void workManager::initEmp()
// {
//     ifstream ifs;
//     ifs.open(FILENAME,ios::in);
//     int id;
//     string name;
//     int dId;
//     int index=0;
//     while(ifs>>id&&ifs>>name&&ifs>>dId)
//     {
//         Worker * worker=NULL;
//         if(dId==1)
//         {
//             worker=new Employee(id,name,dId);
//         }
//         else if(dId==2)
//         {
//             worker=new Manager(id,name,dId);
//         }
//         else
//         {
//             worker=new Boss(id,name,dId);
//         }
//         this->worker[index]=worker;
//         index++;
//     }
//     ifs.close();
// }

// //?????
// void workManager::showMenu()
// {
//     cout<<"*********************************"<<endl;
//     cout<<"*****  ???????????????  *****"<<endl;
//     cout<<"********  0.???????????  ********"<<endl;
//     cout<<"********  1.??????????  ********"<<endl;
//     cout<<"********  2.?????????  ********"<<endl;
//     cout<<"********  3.?????????  ********"<<endl;
//     cout<<"********  4.?????????  ********"<<endl;
//     cout<<"********  5.??????????  ********"<<endl;
//     cout<<"********  6.??????????  ********"<<endl;
//     cout<<"********  7.??????????  ********"<<endl;
//     cout<<"**********************************"<<endl;
//     cout<<endl;
// }

// //?????
// void workManager::exitSystem()
// {
//     cout<<"?????????"<<endl;
//     exit(0);
// }

// //????????
// workManager::~workManager()
// {

// }

// //????????????
// Employee::Employee(int id,string name,int dId)
// {
//     this->m_Id=id;
//     this->m_Name=name;
//     this->m_DeptId=dId;
// }
// //????????????????
// void Employee::showInfo()
// {
//     cout<<"???????"<<this->m_Id
//         <<"\t???????:"<<this->m_Name
//         <<"\t??¦Ë:"<<this->getDeptId()
//         <<"\t??¦Ë???:????????????????"<<endl;
// }
// //???????????¦Ë????
// string Employee::getDeptId()
// {
//     return string("??????");
// }

// //??????????
// Manager::Manager(int id,string name,int dId)
// {
//     this->m_Id=id;
//     this->m_Name=name;
//     this->m_DeptId=dId;
// }
// //??????????????
// void Manager::showInfo()
// {
//     cout<<"???????"<<this->m_Id
//         <<"\t???????:"<<this->m_Name
//         <<"\t??¦Ë:"<<this->getDeptId()
//         <<"\t??¦Ë???:?????³¹??????????¡¤?????????"<<endl;
// }
// //?????????¦Ë????
// string Manager::getDeptId()
// {
//     return string("????");
// }

// //?????????
// Boss::Boss(int id,string name,int dId)
// {
//     this->m_Id=id;
//     this->m_Name=name;
//     this->m_DeptId=dId;
// }
// //????????????
// void Boss::showInfo()
// {
//     cout<<"???????"<<this->m_Id
//         <<"\t???????:"<<this->m_Name
//         <<"\t??¦Ë:"<<this->getDeptId()
//         <<"\t??¦Ë???:???????????????"<<endl;
// }
// //???????????¦Ë????
// string Boss::getDeptId()
// {
//     return string("???");
// }

// //???????
// void workManager::save()
// {
//     ofstream ofs;
//     ofs.open("empFile.txt",ios::out);
//     if(!ofs.is_open())
//     {
//         cout<<"????????"<<endl;
//         return;
//     }
//     for(int i=0;i<this->m_EmpNum;i++)
//     {
//         ofs<<this->worker[i]->m_Id<<" "
//             <<this->worker[i]->m_Name<<" "
//             <<this->worker[i]->m_DeptId<<endl;
//     }
//     ofs.close();
// }

// //???????
// void workManager::addEmp()
// {
//     int addNum=0;
//     //?????????????????????
//     cout<<"???????????????????"<<endl;
//     cin>>addNum;
//     if(addNum>0)
//     {
//         //?????????§³
//         int newNum=this->m_EmpNum+addNum;
//         //????????
//         Worker ** newSpace=new Worker*[newNum];
//         //?????????????????????
//         if(this->worker!=NULL)
//         {
//             for(int i=0;i<this->m_EmpNum;i++)
//             {
//                 newSpace[i]=this->worker[i];
//             }
//         }
//         //??????????
//         for(int i=0;i<addNum;i++)
//         {
//             int id;
//             string name;
//             int dSelect;
//             cout<<"???????"<<i+1<<"???????????"<<endl;
//             cin>>id;
//             cout<<"???????"<<i+1<<"?????????????"<<endl;
//             cin>>name;
//             cout<<"???????????¦Ë??"<<endl;
//             cout<<"1????????"<<endl;
//             cout<<"2??????"<<endl;
//             cout<<"3?????"<<endl;
//             cin>>dSelect;
//             Worker * worker=NULL;
//             switch(dSelect)
//             {
//                 case 1:
//                     worker=new Employee(id,name,1);
//                     break;
//                 case 2:
//                     worker=new Manager(id,name,2);
//                     break;
//                 case 3:
//                     worker=new Boss(id,name,3);
//                     break;
//                 default:
//                     break;
//             }
//             newSpace[this->m_EmpNum+i]=worker;
//         }
//         //?????§á??
//         delete[] this->worker;
//         //????????????
//         this->worker=newSpace;
//         //??????????????
//         this->m_EmpNum=newNum;
//         //?????????????
//         cout<<"???????"<<addNum<<"???????"<<endl;
//         //????????????
//         this->save();

//         system("pause");
//         system("cls");
//     }
//     else
//     {
//         cout<<"????????????"<<endl;
//     }
// }

// //??????
// void workManager::showEmp()
// {
//     if(this->fileIsEmpty==true)
//     {
//         cout<<"???????????????"<<endl; 
//     }
//     else
//     {
//         for(int i=0;i<this->m_EmpNum;i++)
//         {
//             this->worker[i]->showInfo();
//         }
//     }
//     system("pause");
//     system("cls");
// }

// //?§Ø??????????
// int workManager::isExist(int id)
// {
//     if(this->fileIsEmpty==true)
//     {
//         return -1;
//     }
//     else
//     {
//         for(int i=0;i<this->m_EmpNum;i++)
//         {
//             if(this->worker[i]->m_Id==id)
//             {
//                 return i;
//             }
//         }
//     }
//     return -1;
// }
// //??????
// void workManager::delEmp()
// {
//     if(this->fileIsEmpty==true)
//     {
//         cout<<"???????????????"<<endl;
//     }
//     else
//     {
//         cout<<"?????????????????????"<<endl;
//         int id=0;
//         cin>>id;
//         int index=this->isExist(id);
//         if(index!=-1)
//         {
//             for(int i=index;i<this->m_EmpNum-1;i++)
//             {
//                 this->worker[i]=this->worker[i+1];
//             }
//             this->m_EmpNum--;
//             this->save();
//             cout<<"??????"<<endl;
//         }
//         else
//         {
//             cout<<"???????¦Ä????????"<<endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }

// //??????
// void workManager::modEmp()
// {
//     if(this->fileIsEmpty==true)
//     {
//         cout<<"???????????????"<<endl;
//     }
//     else
//     {
//         cout<<"????????????????????"<<endl;
//         int id=0;
//         cin>>id;
//         int index=this->isExist(id);
//         if(index!=-1)
//         {
//             delete this->worker[index];
//             int newId=0;
//             string newName="";
//             int dSelect=0;
//             cout<<"?ùz??"<<id<<"??????????????????????"<<endl;
//             cin>>newId;
//             cout<<"??????????????"<<endl;
//             cin>>newName;
//             cout<<"??????¦Ë??"<<endl;
//             cout<<"1????????"<<endl;
//             cout<<"2??????"<<endl;
//             cout<<"3?????"<<endl;
//             cin>>dSelect;
//             Worker * worker=NULL;
//             switch(dSelect)
//             {
//                 case 1:
//                     worker=new Employee(newId,newName,1);
//                     break;
//                 case 2:
//                     worker=new Manager(newId,newName,2);
//                     break;
//                 case 3:
//                     worker=new Boss(newId,newName,3);
//                     break;
//                 default:
//                     break;
//             }
//             this->worker[index]=worker;
//             cout<<"?????"<<endl;
//             this->save();
//         }
//         else
//         {
//             cout<<"???????¦Ä????????"<<endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }

// //???????
// void workManager::findEmp()
// {
//     if(this->fileIsEmpty==true)
//     {
//         cout<<"???????????????"<<endl;
//     }
//     else
//     {
//         cout<<"??????????????"<<endl;
//         cout<<"1???????????????"<<endl;
//         cout<<"2?????????????????"<<endl;
//         int select=0;
//         cin>>select;
//         if(select==1)
//         {
//             int id=0;
//             cout<<"?????????????????"<<endl;
//             cin>>id;
//             int index=this->isExist(id);
//             if(index!=-1)
//             {
//                 this->worker[index]->showInfo();
//             }
//             else
//             {
//                 cout<<"¦Ä????????"<<endl;
//             }
//         }
//         else if(select==2)
//         {
//             string name="";
//             cout<<"???????????????????"<<endl;
//             cin>>name;
//             bool flag=false;
//             for(int i=0;i<this->m_EmpNum;i++)
//             {
//                 if(this->worker[i]->m_Name==name)
//                 {
//                     this->worker[i]->showInfo();
//                     flag=true;
//                 }
//             }
//             if(flag==false)
//             {
//                 cout<<"¦Ä????????"<<endl;
//             }
//         }
//         else
//         {
//             cout<<"????????"<<endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }

// //??????????
// void workManager::sortEmp()
// {
//     if(this->fileIsEmpty==true)
//     {
//         cout<<"???????????????"<<endl;
//     }
//     else
//     {
//         cout<<"????????????"<<endl;
//         cout<<"1??????"<<endl;
//         cout<<"2??????"<<endl;
//         int select=0;
//         cin>>select;
//         for(int i=0;i<this->m_EmpNum;i++)
//         {
//             int minOrMax=i;
//             for(int j=i+1;j<this->m_EmpNum;j++)
//             {
//                 if(select==1)
//                 {
//                     if(this->worker[minOrMax]->m_Id>this->worker[j]->m_Id)
//                     {
//                         minOrMax=j;
//                     }
//                 }
//                 else
//                 {
//                     if(this->worker[minOrMax]->m_Id<this->worker[j]->m_Id)
//                     {
//                         minOrMax=j;
//                     }
//                 }
//             }
//             if(i!=minOrMax)
//             {
//                 Worker * temp=this->worker[i];
//                 this->worker[i]=this->worker[minOrMax];
//                 this->worker[minOrMax]=temp;
//             }
//         }
//         cout<<"??????"<<endl;
//         this->save();
//         this->showEmp();
//     }
//     //system("pause");
//     //system("cls");
// }

// //??????????
// void workManager::cleanFile()
// {
//     cout<<"???????"<<endl;
//     cout<<"1?????"<<endl;
//     cout<<"2??????"<<endl;
//     int select=0;
//     cin>>select;
//     if(select==1)
//     {
//         ofstream ofs(FILENAME,ios::trunc);
//         ofs.close();
//         if(this->worker!=NULL)
//         {
//             for(int i=0;i<this->m_EmpNum;i++)
//             {
//                 if(this->worker[i]!=NULL)
//                 {
//                     delete this->worker[i];
//                     this->worker[i]=NULL;
//                 }
//             }
//             this->m_EmpNum=0;
//             delete[] this->worker;
//             this->worker=NULL;
//             this->fileIsEmpty=true;
//         }
//         cout<<"?????"<<endl;
//     }
//     system("pause");
//     system("cls");
// }



