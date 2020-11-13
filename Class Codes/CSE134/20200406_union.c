#include <stdio.h>
#define std 1000
#define tc 100
#define staf 20

typedef union {
    char vill[100];
    char city[30];
    int no;
} street;

struct address{
    int flat_no;
    int house_no;
    street info;
    char country[100];
};

struct {
    char name[100];
    struct address add;
    int id, age;
    double cgpa;
} x[std];

struct teacher{
    char name[100];
    struct address add;
    int id, age;
    double salary;
} y[tc];

struct staff{
    char name[100];
    struct address add;
    int id, age;
    double salary;
};

int main()
{

    struct staff z[staf]={"A. Kuddus", {46,21,"Akhalia","Bangladesh"}, 915, 30, 7000,
        "Jhakkas", 26,22,"Madina Market","Bangladesh", 3321, 50, 5000};
    struct teacher p={"Akkas", {46,21,"Akhalia","Bangladesh"}, 915, 30, 25000};
    struct teacher q={"Bakkas", 46,21,"Akhalia","Bangladesh", 915, 30, 25000};
    printf("%d %s %d %lf %d %d %s %s\n", p.id, p.name, p.age,
              p.salary, p.add.flat_no, p.add.house_no,
              p.add.info.city, p.add.country);
    printf("%d %d %d %d %d %d %d %d\n", &p.name, &p.add.flat_no, &p.add.house_no,
              &p.add.info.city, &p.add.info.vill, &p.add.info.no, &p.add.country, &p.id,  &p.age,
              &p.salary);
    int i, n, m, k;

//    /// student info
//    scanf("%d", &n);
//    for (i = 0; i<n; i++)
//    {
//        scanf("%d %s %d %lf %d %d %s %s", &x[i].id, x[i].name, &x[i].age,
//              &x[i].cgpa, &x[i].add.flat_no, &x[i].add.house_no,
//              x[i].add.street, x[i].add.country);
//    }
//
//    for (i = 0; i<n; i++)
//    {
//        printf("%d %s %d %lf %d %d %s %s", x[i].id, x[i].name, x[i].age,
//              x[i].cgpa, x[i].add.flat_no, x[i].add.house_no,
//              x[i].add.street, x[i].add.country);
//    }
//
//    /// teacher info
//    scanf("%d", &m);
//    for (i = 0; i<m; i++)
//    {
//        scanf("%d %s %d %lf %d %d %s %s", &y[i].id, y[i].name, &y[i].age,
//              &y[i].salary, &y[i].add.flat_no, &y[i].add.house_no,
//              y[i].add.street, y[i].add.country);
//    }
//
//    for (i = 0; i<m; i++)
//    {
//        printf("%d %s %d %lf %d %d %s %s", y[i].id, y[i].name, y[i].age,
//              y[i].salary, y[i].add.flat_no, y[i].add.house_no,
//              y[i].add.street, y[i].add.country);
//    }
//
//
//    /// staff info
//    scanf("%d", &k);
//    for (i = 0; i<k; i++)
//    {
//        scanf("%d %s %d %lf %d %d %s %s", &z[i].id, z[i].name, &z[i].age,
//              &z[i].salary, &z[i].add.flat_no, &z[i].add.house_no,
//              z[i].add.street, z[i].add.country);
//    }

    for (i = 0; i<3; i++)
    {
        printf("%d %s %d %lf %d %d %s %s\n", z[i].id, z[i].name, z[i].age,
              z[i].salary, z[i].add.flat_no, z[i].add.house_no,
              z[i].add.info, z[i].add.country);
    }
    return 0;
}
