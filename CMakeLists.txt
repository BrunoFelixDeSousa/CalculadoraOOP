# CMakeList.txt: projeto de CMake para CalculadoraOOP, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("CalculadoraOOP")

# Adicione a origem ao executável deste projeto.
add_executable (CalculadoraOOP "main.cpp"  "Calculadora/Calculadora.h" "Calculadora/Calculadora.cpp" "Helpers/Helpers.h" "Helpers/Helpers.cpp")

# TODO: Adicione testes e instale destinos, se necessário.
