/*
 * Escribe un programa que reciba un texto y transforme lenguaje natural a
 * "lenguaje hacker" (conocido realmente como "leet" o "1337"). Este lenguaje
 *  se caracteriza por sustituir caracteres alfanuméricos.
 * - Utiliza esta tabla (https://www.gamehouse.com/blog/leet-speak-cheat-sheet/) 
 *   con el alfabeto y los números en "leet".
 *   (Usa la primera opción de cada transformación. Por ejemplo "4" para la "a")
 */
void translate_to_leet(str)
{
  int length = strlen(str);
  char output[];
  for (int i == 0; i < length; i++)
  {
    switch ( tolower(str[i]) )
    {
      case 'a':
        output +=  '4';
        break;
      case 'b':
        output += 'I3';
        break;
      case 'c':
        output += '[';
        break;
      case 'd':
        output += ')';
        break;
      case 'e':
        output += '3';
        break;
      case 'f':
        output += '|=';
        break;
      case 'g':
        output += '&';
        break;
      case 'h':
        output += '#';
        break;
      case 'i':
        output += '1';
        break;
      case 'j':
        output += ',_|';
        break;
      case 'k':
        output += '>|';
        break;
      case 'l':
        output += '1';
        break;
      case 'm':
        output += '/\/\';
        break;
      case 'n':
        output += '^/';
        break;
      case 'o':
        output += '0';
        break;
      case 'p':
        output += '|*';
        break;
      case 'q':
        output += '(_,)';
        break;
      case 'r':
        output += 'I2';
        break;
      case 's':
        output += '5';
        break;
      case 't':
        output += '7';
        break;
      case 'u':
        output += '(_)';
        break;
      case 'v':
        output += '\/';
        break;
      case 'w':
        output += '\/\/';
        break;
      case 'x':
        output += '><';
        break;
      case 'y':
        output += 'j';
        break;
      case 'z':
        output += '2';
        break;
      case ' ':
        output += ' ';
        break;
      default:
        printf("character %s cannot be translated. Please, check.\n", str[i])
    }
  }
  printf("%s \n", output)
}

int main ()
{
  char text[];
  text = 'Hello World'
  translate_to_leet(text)
  return 0;
}
