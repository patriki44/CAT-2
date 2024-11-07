#include<stdio.h>
#include<string.h>

struct employee{
	char name[25];
	int id ;
	char department[20];
	float salary;
	char email[50];
};
int main() {
	struct employee  emp;
	
	strcpy(emp.name,"John Doe");
	emp.id = 12345;
	strcpy(emp.department,"Human resources");
	emp.salary = 55000.50;
	strcpy(emp.email,"john.doe@company.com");
	
	
	printf("employee name: %s\n" ,emp.name);
	printf("employee id: %d\n" ,emp.id);
	printf("employee department : %s\n",emp.department);
	printf("employee salary: %.2f\n",emp.salary);
	printf("employee email: %s\n",emp.email);
	
	return 0;
	
}

  

