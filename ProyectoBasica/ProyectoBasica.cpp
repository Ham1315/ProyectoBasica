#include<iostream>
#include<string>

using namespace std;

int opcion, id = 1, j;
bool a = true;

struct videojuego {
	int alo;
	string nombres, clasificaciones, caracteristicas, descripcion, genero;
	float precio, impuesto, total;
}juego[100];

void main()
{
	while (a)
	{
		cout << "<<<<<<<<<<Bienvenido a la tienda de manolito>>>>>>>>>>" << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "--------Menu Principal--------" << endl;
		cout << "\t1-.Agregar Articulo" << endl;
		cout << "\t2-.Modificar Articulo" << endl;
		cout << "\t3-.Eliminar Articulo" << endl;
		cout << "\t4-.Lista de Articulos Vigentes" << endl;
		cout << "\t5-.Limpiar Pantalla" << endl;
		cout << "\t6-.Salir" << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Eliga una opcion: "; cin >> opcion;
		cin.ignore();

		switch (opcion)
		{
		case 1:
		{
			system("cls");
			cout << char(168) << "Cuantos juegos deseas dar de alta?: "; cin >> j;
			cin.ignore();
			for (int i = 0; i < j; i++)
			{
				if ((juego[i].nombres).empty())
				{
					cout << "Ingresa el nombre del videojuego " << i + 1 << ": ";
					getline(cin, (juego[i].nombres));
					cout << "Ingrese el a" << char(164) << "o de lanzamiento: "; cin >> (juego[i].alo);
					cin.ignore();
					cout << "Ingrese la clasificacion del videojuego: ";
					getline(cin, (juego[i].clasificaciones));
					cout << "Ingresa las caracteristicas: ";
					getline(cin, (juego[i].caracteristicas));
					cout << "Ingresa la descripcion del videojuego: ";
					getline(cin, (juego[i].descripcion));
					cout << "Ingrese el genero: ";
					getline(cin, (juego[i].genero));
					cout << "Ingrese el precio unitario: ";
					cin >> (juego[i].precio);
					cin.ignore();
					cout << "Ingrese el impuesto: ";
					cin >> (juego[i].impuesto);
					(juego[i].total) = (juego[i].precio) + (juego[i].impuesto);
					cin.ignore();
					cout << "El precio total es: " << (juego[i].total) << endl;
					cout << "Presione la tecla enter para continuar...";
					cin.ignore();
				}
				else {
					j++;

				}
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Modificara un articulo..." << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Eliminara un articulo..." << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Lista de articulos vigentes: " << endl;
			for (int i = 0; i < j; i++)
			{
				cout << id + i << ": " << juego[i].nombres << endl;
				cout << "\tA" << char(164) << "o: " << juego[i].alo << endl;
				cout << "\tClasificacion: " << juego[i].clasificaciones << endl;
				cout << "\tCaracteristicas: " << juego[i].caracteristicas << endl;
				cout << "\tDescripcion: " << juego[i].descripcion << endl;
				cout << "\tGenero: " << juego[i].genero << endl;
				cout << "\tPrecio Unitario: " << juego[i].precio << endl;
				cout << "\tImpuesto: " << juego[i].impuesto << endl;
				cout << "\tPrecio Total: " << juego[i].total << endl;
			}
			break;
		}
		case 5:
		{
			system("cls");
			break;
		}
		case 6:
		{
			system("cls");
			a = false;
			cout << "Usted esta saliendo..." << endl;
			break;

		}
		default:
		{
			cout << ">>>>>>>>>Opcion Incorrecta Volver a Intntarlo<<<<<<<<<" << endl;
			break;
		}
		}
	}
	system("pause");
}