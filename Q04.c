
#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    printf("Enter marks in 5 subjects:\n");
    printf("Englsih : ");
    scanf("%d", &s1);
    printf("\nHindi : ");
    scanf("%d", &s2);
    printf("\nMaths : ");
    scanf("%d", &s3);
    printf("\nScience : ");
    scanf("%d", &s4);
    printf("\nSocial Science : ");
    scanf("%d", &s5);

    int percent = ((s1 + s2 + s3 + s4 + s5) * 100) / 500.0;

    if (percent < 60)
        printf("\nGrade : F");

    else if (percent >= 60 && percent < 70)
        printf("\nGrade : E");

    else if (percent >= 60 && percent < 70)
        printf("\nGrade : D");

    else if (percent >= 70 && percent < 80)
        printf("\nGrade : C");

    else if (percent >= 80 && percent < 90)
        printf("\nGrade : B");

    else if (percent >= 90)
        printf("\nGrade : A");

    return 0;
}