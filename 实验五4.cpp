//#include<iostream>
//using namespace std;
//class student
//{
//public:
//	int id;
//	int score;
//};
//void max(student *p)
//{
//	int max = p->score;
//	int m_id = p->id;
//	for (int i = 1; i < 4; i++)
//	{
//		if (max< (p+i)->score)
//		{
//			max = (p + i)->score;
//			m_id = (p + i)->id;
//		}
//	}
//	cout << "最高分的学号为" << m_id;
//}
//int main()
//{
//	student student[5] = {0};
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "请输入第" << i + 1 << "位同学的学号和成绩";
//		cin >> student[i].id;
//		cin >> student[i].score;
//	}
//	max(student);
//
//	
//}