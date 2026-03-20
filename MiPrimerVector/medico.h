//
// Created by cueva.r on 24/10/2025.
//

#ifndef HERCITAS_MEDICO_H
#define HERCITAS_MEDICO_H
#include <fstream>

using namespace std;

class medico {
public:
    medico();
    medico(const medico& orig);
    virtual ~medico();
    void SetNombre(char* nombre);
    void GetNombre(char*) const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    void SetEspecialidad(char* );
    void GetEspecialidad(char *) const;
    void operator=(const medico& orig);
    bool operator<(const medico&) const;
private:
    int codigo;
    char *nombre;
    char *especialidad;



};
ifstream &operator >> (ifstream &, medico &);

#endif //HERCITAS_MEDICO_H