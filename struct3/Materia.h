#pragma once
#ifndef MATERIA_H
#define MATERIA_H

#include <string>
#include <optional>//std::optinal
#include <iostream>

namespace materia
{
	struct Materia
	{
		double* m_matematicas{ nullptr };
		
		double* m_sociales{ nullptr };

		double* m_espanhol{ nullptr };

		int m_capa_v_ma{};

		int m_capa_v_so{};

		int m_capa_v_es{};

		//Funcionalidades del struct 

		void set_notas_matematicas();

		void set_notas_sociales();

		void set_notas_espanhol_mate();

		void set_num_notas_sociales();

		void set_num_notas_espanhol();

		std::optional<double> validation_notas_double();

		std::optional<int> validation_cantidad_notas();

		int input_num_notas();

	};
	
	//definicion de las funciones declarada en el espacio de nombres 
	//del struct
	std::optional<int> Materia::validation_cantidad_notas()
	{
		int num_notas{};

		std::optional<int> num;

		//Se almacena en una variable local y temporal
		std::cin >> num_notas;

		//Validacion de entradas extranas no completamente
		if (std::cin.good())
		{
			num = num_notas;

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			return num;
		}
		else
		{
			//Importante limpiar siempre el estado de error para que compile correctametne
			std::cin.clear();

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			return std::nullopt;
		}


	}

	int Materia::input_num_notas()
	{
		std::optional<int> cant_notas;

		bool validador{ true };

		int num_notas{};


		while (validador)
		{

			cant_notas = validation_cantidad_notas();

			if (!cant_notas)
			{

				std::cout << "\nIngresaste datos erroneos. ";

				std::cout << "\nIngresa nuevamente la cantidad de notas: ";

			}
			else
			{

				m_capa_v_ma = *cant_notas;

				validador = false;

			}

		}

		return m_capa_v_ma;
	}

	void Materia::set_notas_espanhol_mate()
	{

		std::cout << "Digite el numero de notas a ingresar en matematicas: ";

		m_capa_v_ma = input_num_notas();

	}

	void Materia::set_num_notas_sociales()
	{

		std::cout << "Digite el numero de notas a ingresar en matematicas: ";

		m_capa_v_so = input_num_notas();

	}

	void Materia::set_num_notas_espanhol()
	{

		std::cout << "Digite el numero de notas a ingresar en espanhol: ";

		m_capa_v_es = input_num_notas();

	}

	
	
}

#endif // !MATERIA_H

