#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    Employee* e1;
    Employee* e2;
    e1 = (Employee*) pEmployeeA;
    e2 = (Employee*) pEmployeeB;
    int retorno;

    retorno = strcmp(e1->name, e2->name);

    return retorno;
}


void employee_print(Employee* this)
{
    if (this->id > 0)
    {
    printf("\nID: %d \nNOMBRE: %s \nAPELLIDO: %s \n", this->id, this->name, this->lastName);
    }
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


