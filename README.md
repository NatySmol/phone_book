# phone_book
CZ:
Napište program implementující "telefonní seznam". Místo údajů o jednotlivých lidech v něm budeme evidovat pouze čísla (kladná celá). Program se bude ovládat ze standardního vstupu.

Na vstupní řádce vždycky bude kód operace a případně číslo, které bude parametrem operace. Operace budou tyto:

1 - vlož číslo do seznamu
2 - smaž číslo ze seznamu
4 - setřiď seznam (sestupně)
5 - vypiš
6 - konec
Za operacemi 1 a 2 bude nasledovat mezerou oddělené číslo, které se má vložit resp. vymazat.

Tedy například řádek "1 5" bude znamenat "přidej do seznamu číslo 5". Řádek "2 4" znamená "smaž ze seznamu číslo 4".

Při výpisu uvádějte každé číslo na zvláštní řádek. Pokud chceme mazat ze seznamu číslo, které v něm není, operaci ignorujte.

EN:
Write a program implementing a "phone directory". Instead of individual people's data, it will only store numbers (positive integers). The program will be controlled from the standard input.

The input line will always contain an operation code and optionally a number that will be the parameter for the operation. The operations will be as follows:

1 - Insert a number into the directory
2 - Delete a number from the directory
4 - Sort the directory in descending order
5 - Print the directory
6 - Exit

For operations 1 and 2, a space-separated number will follow indicating the number to insert or delete, respectively.

For example, the line "1 5" means "insert the number 5 into the directory". The line "2 4" means "delete the number 4 from the directory".

When printing the directory, each number should be on a separate line. If an attempt is made to delete a number that is not in the directory, ignore the operation.
