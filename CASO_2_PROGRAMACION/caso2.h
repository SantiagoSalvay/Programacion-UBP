#pragma once

struct Turno {
    int idTurno;
    char paciente[50];
    char especialidad[40];
    char hora[6];
    bool atendido;
    bool activo;
};

const char* const ARCHIVO_TURNOS = "turnos.bin";

int generarNuevoId();

void altaTurno();
void modificarTurno();
void buscarPorId();
void bajaTurno();
void consultaGeneral();
void registrarAtencion();
