#define _CRT_SECURE_NO_WARNINGS
//����һ���ṹ��,�ؼ�����struct
struct Stu
{
	char name[20];
	int age[3];
	char sex[3];
};
int main()
{

	//��������
	struct Stu s = { "����",30,"��" };
	//��ӡ
	printf("%s %d %s", s.name, s.age, s.sex);
	return 0;
}