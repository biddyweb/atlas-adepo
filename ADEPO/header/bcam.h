#ifndef BCAM_H
#define BCAM_H

#include <iostream>

class BCAM
{
public:
    //constructeurs et destructeurs
    BCAM();
<<<<<<< HEAD
    BCAM(std::string nom_BCAM, int id_detector, int num_Port_Driver, int num_Port_Mux, int num_chip, std::string objet_vise);
=======
    BCAM(std::string nom_BCAM, int id_detector, int num_Port_Driver, int num_Port_Mux, std::string type_bool_BCAM, int num_chip, std::string objet_vise);
>>>>>>> 149068ee3d8f20229540571d3a3e0dc42df9b518
    virtual ~BCAM();

    //setter et getter
    std::string Get_nom_BCAM() const { return m_nom_BCAM; }
    void Set_nom_BCAM(std::string val) {m_nom_BCAM = val; }

    int Get_id_detector() const { return m_id_detector; }
    void set_id_detector(int val) {m_id_detector =val; }

    int Get_num_Port_Driver() const { return m_num_Port_Driver; }
    void Set_num_Port_Driver(int val) { m_num_Port_Driver = val; }

    int Get_num_Port_Mux() const { return m_num_Port_Mux; }
    void Set_num_Port_Mux(int val) { m_num_Port_Mux = val; }

    int Get_num_chip() const { return m_num_chip; }
    void Set_num_chip(int val) { m_num_chip = val; }

    std::string Get_objet_vise() const { return m_objet_vise; }
    void Set_objet_vise(std::string val) {m_objet_vise = val; }

<<<<<<< HEAD
=======
    std::string Get_type_bool_BCAM() const { return m_type_bool_BCAM; }
    void Set_type_bool_BCAM(std::string val) {m_type_bool_BCAM = val; }

>>>>>>> 149068ee3d8f20229540571d3a3e0dc42df9b518
    //methodes
    void Affiche();

protected:
private:
    std::string m_nom_BCAM;
<<<<<<< HEAD
    int m_id_detector;
=======
>>>>>>> 149068ee3d8f20229540571d3a3e0dc42df9b518
    int m_num_Port_Driver;
    int m_num_Port_Mux;
    int m_num_chip;
    std::string m_objet_vise;
<<<<<<< HEAD
=======
    std::string m_type_bool_BCAM;
    int m_id_detector;




>>>>>>> 149068ee3d8f20229540571d3a3e0dc42df9b518


};

#endif // BCAM_H
