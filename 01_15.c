#define _CRT_SECURE_NO_WARNINGS
//定义一个结构体,关键字是struct
struct Stu
{
	char name[20];
	int age[3];
	char sex[3];
};
int main()
{

	//创建对象
	struct Stu s = { "张三",30,"男" };
	//打印
	printf("%s %d %s", s.name, s.age, s.sex);
	return 0;
}