
#include <stdio.h>
struct student
{
int eng;
int maths;
int science;
};
int main()
{
    int total;
    struct student stud;
    stud.eng=75;
    stud.maths=90;
    stud.science=65;
    total=stud.eng+stud.maths+stud.science;
        printf("Total is %d\n",total);
        
    
    return 0;
}
/* Output
Total is 230 */
