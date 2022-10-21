#include<stdio.h>

void incrementSalary(double *current_salary, double percentage_increment) {
    double increment_value = (*current_salary) * (percentage_increment / 100.0);
    
    // increment the salary
    // the changes will persist outside function scope
    // because the current salary reference was passed to the function
    *current_salary = *current_salary + increment_value;
}

int main() {
    double *salary, hike = 5.0;
    *salary = 1000.0;
    
    printf("Current salary = %f\n", *salary);
    
    // passing pointer salary to the function call
    incrementSalary(salary, hike);
    
    printf("Salary after %f % hike = %f \n", hike, *salary);
return 0;
}
