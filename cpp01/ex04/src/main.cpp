#include "../include/sed.hpp"

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::ofstream fichier(filename);
    if (!fichier.is_open())
    {
        std::cerr << "Impossible d'ouvrir le fichier : " << filename << std::endl;
        return 1;
    }
    fichier << argv[2] << std::endl;
    fichier << argv[3];
    fichier.close();
    std::ifstream fichier_in(filename);
    if (!fichier_in.is_open())
    {
        std::cerr << "Impossible d'ouvrir le fichier : " << filename << std::endl;
        return 1;
    }
    std::string replace_filename = filename + ".replace";
    std::ofstream fichier_replace(replace_filename);
    if (!fichier_replace.is_open())
    {
        std::cerr << "Impossible d'ouvrir le fichier de sortie : " << replace_filename << std::endl;
        fichier_in.close();
        return 1;
    }
    std::string ligne1, ligne2;
    if (std::getline(fichier_in, ligne1) && std::getline(fichier_in, ligne2))
    {
        fichier_replace << ligne2 << std::endl;
        fichier_replace << ligne1;
    }
    else
    {
        std::cerr << "Erreur lors de la lecture des lignes" << std::endl;
    }
    fichier_in.close();
    fichier_replace.close();
    return 0;
}
