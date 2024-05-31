#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <memory>
#include <thread>
#include <condition_variable>
#include<mutex>
#include"private_lib.h"
#include "Memento.h"
#include "SadHandler.h"
#include "HappyHandler.h"
#include "AngryHandler.h"
#include "DataBase.h"
#include "Screen.h"
#include "ConreteMediator.h"
#include "TXTFactory.h"
#include "AuthoFactory.h"
#include "Console.h"
#include "Command.h"
#include "ConsoleFactory.h"

std::shared_ptr<Mediator> mid=std::make_shared<ConreteMediator>();
std::shared_ptr<Mediator> mid2=std::make_shared<ConreteMediator>();
DataBase* ptr=TXTFactory::GetObject(mid);
DataBase* ptrB2=AuthoFactory::GetObject(mid2);
Screen* ptr1=(new ConsoleFactory())->CreateProduct(mid);
Screen* ptr2S2=(new ConsoleFactory())->CreateProduct(mid2);
Command com(ptr1);
std::string user_input;
std::mutex mx;
bool flag1=false;
bool flag2=false;
bool AuthFlag=false;
void User_Input(void)
{
    
    while(1)
    {
        if(AuthFlag==true)
            break;
        mx.lock();
        user_input = ptr2S2->GetAutho();
        flag1=true;
        mx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    while(1)
    {
        mx.lock();
        user_input = ptr1->GetInput();
        flag2=true;
        mx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}
void User_Handling(void)
{
    while(1)
    {
        if(flag1==true)
        {
            mx.lock();
            if(ptr2S2->GetOutput()!="non authorized")
                ptr2S2->SendMassage(user_input);
                //std::cout<<"hi refaat\n";
                flag1=false;
                std::string str1=ptr2S2->GetOutput();
                if(str1=="Accept")
                        AuthFlag=true;
                mx.unlock();
                if(str1=="Accept")
                    break;
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
    while(1)
    {
            if(flag2==true)
            {
                mx.lock();
                if(user_input=="0")
                {
                    com.Save();
                    std::cout<<"saved succefuly..................."<<std::endl;
                }
                else if(user_input=="1")
                {
                    com.FileBackUp();
                    std::cout<<"see you later..................."<<std::endl;
                    exit(0);
                } 
                else if(user_input=="2")
                {
                    ptr->Referesh();
                    std::cout<<"Referesh data base..................."<<std::endl;
                } 
                else
                    ptr1->SendMassage(user_input);
                flag2=false;
                mx.unlock();
            }  
    }   
}
 int main()
 {
    mid->AddColleage(ptr1);
    mid->AddColleage(ptr);
    mid2->AddColleage(ptrB2);
    mid2->AddColleage(ptr2S2);
    std::thread th2(User_Handling);
    std::thread th1(User_Input);
    th2.join();
    th1.join();
    return 0;

 }
