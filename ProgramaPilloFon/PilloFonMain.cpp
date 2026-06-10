#include <iostream>
#include <string>

using namespace std;
//DEFINIR E INICIALIZAR VARIABLES
string NombreEmpledo;
int EdadEmpleado;
int TipoEmpleado; // 1 Empleado de planta, 2 Empleado medio tiempo, 3 Empleado por contrato
char GeneroEmpleado; // M Masculino, F Femenino
double SalarioMensualEmpleado;


int main() { 

char continuar;
do {


    cout << "PILLOFON S.A. DE C.V." << endl;
    cout << "Bienvenido al sistema de calculo de sueldo  de empleados" << endl;
// DATOS GENERALES DE EMPLEADO
cout << "Ingrese el nombre del empleado: " << endl;
cin.ignore(1000, '\n'); // Limpiar el buffer de entrada antes de leer el nombre del empleado
getline(cin, NombreEmpledo); // Leer el nombre del empleado, incluyendo espacios

cout << "Ingrese la edad del empleado: " << endl;
cin >> EdadEmpleado; // Leer la edad del empleado
//validar la edad del empleado
while (EdadEmpleado < 18 || EdadEmpleado > 70) { // Validar que la edad esté entre 18 y 70 años
    cout << "Edad no valida. Ingrese una edad entre 18 y 70 años: " << endl;
    cin >> EdadEmpleado; // Leer nuevamente la edad del empleado
}
cout << "Ingrese el tipo de empleado (1: Planta, 2: Medio tiempo, 3: Contrato): " << endl;
cin >> TipoEmpleado; // Leer el tipo de empleado
// Validar el tipo de empleado
while (TipoEmpleado < 1 || TipoEmpleado > 3) { // Validar que el tipo de empleado sea 1, 2 o 3
    cout << "Tipo de empleado no valido. Ingrese 1 para Planta, 2 para Medio tiempo o 3 para Contrato: " << endl;
    cin >> TipoEmpleado; // Leer nuevamente el tipo de empleado
}
cout << "Ingrese el genero del empleado (M: Masculino, F: Femenino): " << endl;
cin >> GeneroEmpleado; // Leer el genero del empleado
// Validar el genero del empleado
while (GeneroEmpleado != 'M' && GeneroEmpleado != 'm' && GeneroEmpleado != 'F' && GeneroEmpleado != 'f') { // Validar que el genero sea 'M' o 'F'
    cout << "Genero no valido. Ingrese M para Masculino o F para Femenino: " << endl;
    cin >> GeneroEmpleado; // Leer nuevamente el genero del empleado
}
cout << "Ingrese el salario mensual del empleado: " << endl;
cin >> SalarioMensualEmpleado; // Leer el salario mensual del empleado
// Validar que sea mayor a 16,000.00
while (SalarioMensualEmpleado < 16000.00) { // Validar que el salario mensual sea mayor a 16,000.00
    cout << "Salario no valido. Ingrese un salario mensual mayor a 16,000.00: " << endl;
    cin >> SalarioMensualEmpleado; // Leer nuevamente el salario mensual del empleado
}

//OPERACIONES

//Variables para el calculo de sueldo
double HorasEmpleadoPlantaLV;
double HorasEmpleadoPlantaSabado;
double HorasSemPlanta;
double HorasMenPlanta;
double SueldoHoraPlanta;
double SueldoMinutoPlanta;
double SueldoSegundoPlanta;
double SueldoDiarioPlanta;
double SueldoSabadoPlanta;
double SueldoQuincenalPlanta;

switch (TipoEmpleado) { 
    case 1: // Empleado de planta
    cout << "Empleado de Planta" << endl;
HorasEmpleadoPlantaLV = (10.5 - 1) * 5; // Horas trabajadas de lunes a viernes (10.5 horas menos 1 hora de almuerzo)
HorasEmpleadoPlantaSabado = (7 - 1); // Horas trabajadas el sábado (7 horas menos 1 hora de almuerzo)
HorasSemPlanta = HorasEmpleadoPlantaLV + HorasEmpleadoPlantaSabado; // Total de horas trabajadas en la semana
SueldoHoraPlanta = SalarioMensualEmpleado / (HorasSemPlanta * 4); // Calculo del sueldo por hora
SueldoMinutoPlanta = SueldoHoraPlanta / 60; // Calculo del sueldo por minuto
SueldoSegundoPlanta = SueldoMinutoPlanta / 60; // Calculo del sueldo por segundo
SueldoDiarioPlanta = SueldoHoraPlanta * HorasEmpleadoPlantaLV / 5; // Calculo del sueldo diario de lunes a viernes
SueldoSabadoPlanta = SueldoHoraPlanta * HorasEmpleadoPlantaSabado; // Calculo del sueldo del sábado
SueldoQuincenalPlanta = SalarioMensualEmpleado / 2; // Calculo del sueldo quincenal

//Informacion del reporte empleado de planta
cout << "--------------------------------------" << endl;
cout << "Reporte de Sueldo del Empleado de Planta" << endl;
cout << "--------------------------------------" << endl;
cout << "Nombre del Empleado: " << NombreEmpledo << endl;
cout << "Edad del Empleado: " << EdadEmpleado << " años" << endl;
cout << "Genero del Empleado: " << (GeneroEmpleado == 'M' || GeneroEmpleado == 'm' ? "Masculino" : "Femenino") << endl;
cout << "Salario Mensual del Empleado: L" << SalarioMensualEmpleado << endl;
cout << "Horas trabajadas de Lunes a Viernes: " << HorasEmpleadoPlantaLV << " horas" << endl;
cout << "Horas trabajadas el Sabado: " << HorasEmpleadoPlantaSabado << " horas" << endl;
cout << "Total de Horas trabajadas en la Semana: " << HorasSemPlanta << " horas" << endl;
cout << "Sueldo por Hora: L" << SueldoHoraPlanta << endl;
cout << "Sueldo por Minuto: L" << SueldoMinutoPlanta << endl;
cout << "Sueldo por Segundo: L" << SueldoSegundoPlanta << endl;
cout << "Sueldo Diario de Lunes a Viernes: L" << SueldoDiarioPlanta << endl;
cout << "Sueldo del Sabado: L" << SueldoSabadoPlanta << endl;
cout << "Sueldo Quincenal: L" << SueldoQuincenalPlanta << endl;
    break;

// Variables para calculo de empleado de medio tiempo

double HorasSemanalesEmpleadoMedioTiempo;
double HorasMensualesEmpleadoMedioTiempo;
double SueldoHoraMedioTiempo;
double SueldoMinutoMedioTiempo;
double SueldoSegundoMedioTiempo;
double SueldoDiarioMedioTiempo;
double SueldoSemanalMedioTiempo;
double SueldoQuincenalMedioTiempo;

    case 2: // Empleado de medio tiempo
    cout << "Empleado de Medio Tiempo" << endl;
    HorasSemanalesEmpleadoMedioTiempo = (6.5 - 1) * 6; // Horas trabajadas por semana (6.5 horas menos 1 hora de almuerzo, 6 días a la semana)
    HorasMensualesEmpleadoMedioTiempo = HorasSemanalesEmpleadoMedioTiempo * 4; // Total de horas trabajadas en el mes
    SueldoHoraMedioTiempo = SalarioMensualEmpleado / HorasMensualesEmpleadoMedioTiempo; // Calculo del sueldo por hora
    SueldoMinutoMedioTiempo = SueldoHoraMedioTiempo / 60; // Calculo del sueldo por minuto
    SueldoSegundoMedioTiempo = SueldoMinutoMedioTiempo / 60; // Calculo del sueldo por segundo
    SueldoDiarioMedioTiempo = SueldoHoraMedioTiempo * (6.5 - 1); // Calculo del sueldo diario (6.5 horas menos 1 hora de almuerzo)
    SueldoSemanalMedioTiempo = SueldoHoraMedioTiempo * HorasSemanalesEmpleadoMedioTiempo; // Calculo del sueldo semanal
    SueldoQuincenalMedioTiempo = SueldoSemanalMedioTiempo * 2; // Calculo del sueldo quincenal (2 semanas en una quincena)

//Informacion del reporte empleado de medio tiempo
cout << "--------------------------------------" << endl;
cout << "Reporte de Sueldo del Empleado de Medio Tiempo" << endl;
cout << "--------------------------------------" << endl;
cout << "Nombre del Empleado: " << NombreEmpledo << endl;
cout << "Edad del Empleado: " << EdadEmpleado << " años" << endl;
cout << "Genero del Empleado: " << (GeneroEmpleado == 'M' || GeneroEmpleado == 'm' ? "Masculino" : "Femenino") << endl;
cout << "Salario Mensual del Empleado: L" << SalarioMensualEmpleado << endl;
cout << "Horas trabajadas por Semana: " << HorasSemanalesEmpleadoMedioTiempo << " horas" << endl;
cout << "Horas trabajadas por Mes: " << HorasMensualesEmpleadoMedioTiempo << " horas" << endl;
cout << "Sueldo por Hora: L" << SueldoHoraMedioTiempo << endl;
cout << "Sueldo por Minuto: L" << SueldoMinutoMedioTiempo << endl;
cout << "Sueldo por Segundo: L" << SueldoSegundoMedioTiempo << endl;
cout << "Sueldo Diario: L" << SueldoDiarioMedioTiempo << endl;
cout << "Sueldo Semanal: L" << SueldoSemanalMedioTiempo << endl;
cout << "Sueldo Quincenal: L" << SueldoQuincenalMedioTiempo << endl;

    break;

    // Variables para calculo de empleado por contrato
    double HorasSemanalesEmpleadoContrato; //Deben ser mayor que 30 pero menores o iguales a 40
    double HorasMensualesEmpleadoContrato;
    double SueldoHoraContrato;
    double SueldoMinutoContrato;
    double SueldoSegundoContrato;
    double SueldoDiarioContrato;
    double SueldoSemanalContrato;
    double SueldoQuincenalContrato;

    case 3: // Empleado por contrato
    cout << "Empleado por Contrato" << endl;
    cout << "Ingrese las horas semanales del empleado por contrato (deben ser mayor que 30 pero menores o iguales a 40): " << endl;
    cin >> HorasSemanalesEmpleadoContrato; // Leer las horas semanales del empleado por contrato
    // Validar las horas semanales del empleado por contrato
    while (HorasSemanalesEmpleadoContrato <= 30 || HorasSemanalesEmpleadoContrato > 40) { // Validar que las horas semanales sean mayores que 30 pero menores o iguales a 40
        cout << "Horas semanales no validas. Ingrese un valor mayor que 30 pero menor o igual a 40: " << endl;
        cin >> HorasSemanalesEmpleadoContrato; // Leer nuevamente las horas semanales del empleado por contrato
    }
    HorasMensualesEmpleadoContrato = HorasSemanalesEmpleadoContrato * 4; // Total de horas trabajadas en el mes
    SueldoHoraContrato = SalarioMensualEmpleado / HorasMensualesEmpleadoContrato; // Calculo del sueldo por hora
    SueldoMinutoContrato = SueldoHoraContrato / 60; // Calculo del sueldo por minuto
    SueldoSegundoContrato = SueldoMinutoContrato / 60; // Calculo del sueldo por segundo
    SueldoDiarioContrato = SueldoHoraContrato * (HorasSemanalesEmpleadoContrato / 5); // Calculo del sueldo diario (asumiendo que el empleado trabaja 5 días a la semana)
    SueldoSemanalContrato = SueldoHoraContrato * HorasSemanalesEmpleadoContrato; // Calculo del sueldo semanal
    SueldoQuincenalContrato = SueldoSemanalContrato * 2; // Calculo del sueldo quincenal (2 semanas en una quincena)

//Informacion del reporte empleado por contrato
cout << "--------------------------------------" << endl;
cout << "Reporte de Sueldo del Empleado por Contrato" << endl;
cout << "--------------------------------------" << endl;
cout << "Nombre del Empleado: " << NombreEmpledo << endl;
cout << "Edad del Empleado: " << EdadEmpleado << " años" << endl;
cout << "Genero del Empleado: " << (GeneroEmpleado == 'M' || GeneroEmpleado == 'm' ? "Masculino" : "Femenino") << endl;
cout << "Salario Mensual del Empleado: L" << SalarioMensualEmpleado << endl;
cout << "Horas trabajadas por Semana: " << HorasSemanalesEmpleadoContrato << " horas" << endl;
cout << "Horas trabajadas por Mes: " << HorasMensualesEmpleadoContrato << " horas" << endl;
cout << "Sueldo por Hora: L" << SueldoHoraContrato << endl;
cout << "Sueldo por Minuto: L" << SueldoMinutoContrato << endl;
cout << "Sueldo por Segundo: L" << SueldoSegundoContrato << endl;
cout << "Sueldo Diario: L" << SueldoDiarioContrato << endl;
cout << "Sueldo Semanal: L" << SueldoSemanalContrato << endl;
cout << "Sueldo Quincenal: L" << SueldoQuincenalContrato << endl;

    break;

    default:
    cout << "Tipo de empleado no válido" << endl;
    break;

}

cout << "¿Desea ingresar otro empleado? (S/N): " << endl;
cin >> continuar; // Leer la respuesta del usuario para continuar o no

} while (continuar == 'S' || continuar == 's'); // Continuar el ciclo si el usuario ingresa 'S' o 's'

cout << "Gracias por usar el sistema de calculo de sueldo de empleados de PILLOFON S.A. DE C.V." << endl;


return 0;
}
