#include<stdio.h>
#include<math.h>

/*	����ṹ��	*/
struct point
{
	int x;
	int y;
};

/*	���νṹ��	*/
struct rect {
	struct point pt1;
	struct point pt2;
};

int main() {
	//����
	struct point point1;		// = struct point1;
	
	//���壺��ʼ�� - �ṹ���Ա��ֵ
	struct point point2 = { 30,40 };	//����ʱ��ʼ��
	point1.x = 3;
	point1.y = 4;
	printf("point1.x = %d\npoint1.y = %d\n", point1.x, point1.y);

	//*********************
	struct point pt = { 30,40 };
	double dist, sqrt(double);
	dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	printf("pt.x = %d\npt.y = %d\ndist = %f\n", pt.x, pt.y, dist);

	//**********����*************
	struct rect rectange = { {0,0},{40,30} };
	printf("rectange.pt1.x = %d\nrectange.pt2.y = %d\n", rectange.pt1.x, rectange.pt2.y);


}