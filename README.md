# le Challenge des paramtres

## Résultats obtenus

Pendant l'exécution, le programme alloue de plus en plus de mémoire pour les paramètres de la fonction. À un certain point, il atteint la limite de mémoire disponible sur la machine, ce qui provoque une erreur de type bad_alloc indiquant une erreur d'allocation de mémoire.

L'erreur se produit parce que la machine ne peut plus allouer suffisamment de mémoire pour contenir tous les paramètres dans le vecteur. Cela dépend des ressources disponibles, notamment la RAM et la gestion de la mémoire par le système d'exploitation.

![error c++](https://github.com/user-attachments/assets/4cb69f4f-f4bc-4a92-9b6c-b33c0b23242b)

## Conclusion

Le nombre maximum de paramètres qu'une fonction peut accepter en C++ est directement lié aux limitations matérielles de l'ordinateur sur lequel le programme est exécuté. Sur des machines avec plus de mémoire, ce nombre peut être beaucoup plus élevé, mais il finira toujours par atteindre une limite fixée par la capacité de la machine.
