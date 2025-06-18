# shell.nix
with import <nixpkgs> {};

mkShell {
  buildInputs = [
    gcc
    gdb
    clang-tools # opcional: para linting y análisis
    valgrind    # opcional: para detección de errores de memoria
    cmake       # si usas cmake
  ];

  shellHook = ''
    echo "Entorno de desarrollo en C activado."
  '';
}