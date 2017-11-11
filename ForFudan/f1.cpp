#include <stdio.h>
void e1() 
{
	int s, t;
	scanf("%d", &s);
	scanf("%d", &t);
	if (s > t) {
		printf("yes");
	} else {
		printf("no");
	}
}

void e3()
{
	int i;
	scanf("%d", &i);
	if (i%2 == 0) {
		printf("yes");
	} else {
		printf("no");
	}
}

void e4()
{
	int d[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d", &d[i]);
	}
	int n = sizeof(d) / sizeof(int);
	if (n == 10) {
		int max = d[0];
		for(int j = 0; j < 10; j++) {
			if (max < d[j]) 
				max = d[j];
		} 
		printf("%d", max);
	} else {
		printf("数组个数不对，目前有:%d 个", n);
	}
}

void e5()
{
	char d[100];
	scanf("%s", d);
	int i = 0;
	int count = 0;
	while(d[i] != '\0') {
		if (d[i] >= 'A' && d[i] <= 'Z')
			count++;
		i++;
	}
	printf("%d", count);
} 

void e7()
{
	struct student {
		char no[8];
		int score1;
		int score2;
		int score3;
	};
	struct student s[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s %d %d %d", s[i].no, &(s[i].score1), &(s[i].score2), &(s[i].score3));
	}
	for (int j = 0; j < 3; j++) {
		printf("%s %d\n", s[j].no, (s[j].score1 + s[j].score2 + s[j].score3));
	}
}

void e8()
{
	int d[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			scanf("%d", d[i][j]);
			
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			printf("%d", d[i]+j;
		printf("\r\n");
			
}

int count(int a[], int n, int x)
{
	int c = 0;
	for(int i = 0; i < n; i++) 
		if (a[i] == x)
			c++;
	return c;
}
int main()
{
	//e1();
	//e3();
	//e4();
	//e5();
	//e7();
	e8();
	
//	int d[15];
//	int y;
//	for (int i = 0; i < 15; i++) {
//		scanf("%d", &d[i]);
//	}
//	scanf("%d", &y);
//	printf("%d", count(d, 15, y));
}


