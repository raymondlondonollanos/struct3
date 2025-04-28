#include <iostream>
#include <string>
#include "Materia.h"

int main()
{

	materia::Materia ma;

	ma.m_capa_v_es = 3;

	std::cout << "hola" << ma.m_capa_v_es;

	std::optional<int> num{ ma.validation_cantidad_notas() };

	std::cout << "\nmostra optional " << *num;

	ma.validation_cantidad_notas();

	return 0;
}