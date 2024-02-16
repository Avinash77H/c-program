#include <stdio.h>
int main()
{
    int n_student = 3;
    int m_marks = 5;
    int marks[3][5];
    for (int i = 0; i < n_student; i++)
    {
        for (int j = 0; j < m_marks; j++)
        {
            printf("enter marks of student %d subject is %d\n", i, j);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < n_student; i++)
    {
        for (int j = 0; j < m_marks; j++)
        {
            printf("the student %d marks is %d\n", i, marks[i][j]);
        }
    }
    return 0;
}