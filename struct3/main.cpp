#include <iostream>
#include <string>
#include "Materia.h"

int main()
{

	materia::Materia ma;

	ma.m_capa_v_es = 3;

#if 0
	std::cout << "hola" << ma.m_capa_v_es;

	std::optional<int> num{ ma.validation_cantidad_notas() };

	std::cout << "\nmostra optional " << *num;

	
#endif // 0

	int numero{ ma.input_num_notas() };

	std::cout << "\nmostrar input num notas " << numero;
	

	//ma.set_notas_sociales();

	return 0;
}