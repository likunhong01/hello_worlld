///**
//基于C语言程序实现模拟贴吧系统。该系统需要实现以下功能：
//1、查看系统中所有帖子的信息；
//2、根据帖子编号查看系统中对应帖子的所有信息；
//3、发表新帖子；
//4、根据帖子标题删除对应的帖子；
//5、根据帖子编号给某个帖子点赞。
//程序说明及要求：
//1、程序已定义帖子结构体，帖子基本属性包括：帖子编号、帖子标题、帖子内容、帖子作者和帖子点赞数。
//   程序已定义main函数、菜单函数menu、打印所有帖子信息函数printAll。
//2、要求考生完成定义函数post，用来发布新的帖子的信息。
//3、要求考生完成定义函数modifyPosting，用来根据帖子编号修改对应帖子的相关信息，对帖子的每个属性修改前要判断是否修改。
//4、要求考生完成定义函数deletePosting，用来根据帖子标题删除对应的帖子。
//5、要求考生完成定义函数searchPosting，用来根据帖子标题或作者或内容查看对应的帖子。
//6、要求考生完成定义函数insertPosting，用来在指定位置插入一个新的帖子。
//*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 10
//void menu();
//void printAll();
//void post();
//void modifyPosting();
//void deletePosting();
//void searchPosting();
//void insertPosting();
//
//struct POSTING{
//char posting_id[30];
//char posting_name[30];
//char posting_content[20];
//char posting_writer[20];
//int posting_thumbUP;
//};
//
//void main()
//{
//while(1)
//menu();
//}
//void menu()
//{
//int ch;
//printf("\n\t\t\t\t模拟贴吧系统\n");
//printf("\t\t\t****************************\n");
//printf("\t\t\t1.发布新帖子\n");
//printf("\t\t\t2.修改帖子信息\n");
//printf("\t\t\t3.删除某个帖子的信息\n");
//printf("\t\t\t4.查找某个帖子的信息\n");
//printf("\t\t\t5.插入某个帖子的信息\n");
//printf("\t\t\t6.退出系统\n");
//printf("\t\t\t****************************\n");
//printf("\n\n输入你的选择（1-6）:");
//scanf("%d",&ch);
//switch(ch)
//{
//case 1:{post();
//break;}
//case 2:{modifyPosting();
//break;}
//case 3:{deletePosting();
//break;}
//case 4:{searchPosting();
//break; }
//case 5:{insertPosting();
//break;}
//default :{printf("\n退出系统并按任意键退出系统");
//exit(EXIT_SUCCESS);}
//}
//
//
//}
//
//
//void post()
//{
//
//
//}
//
//void modifyPosting()
//{
//
//}
//void printAll()
//{
//int i;
//for(i=0;i<count;i++)
//{
//printf("\n帖子编号:%s帖子标题:%s帖子内容:%s帖子作者:%s帖子点赞数量:%d",
//posting[i].posting_id,posting[i].posting_name,posting[i].posting_content,posting[i].posting_writer,
//posting[i].posting_thumbUP);
//}
//}
//void deletePosting()
//{
//
//}
//
//
//void searchPosting()
//{
//
//}
//
//
//}
//void insertPosting()
//{
//}
