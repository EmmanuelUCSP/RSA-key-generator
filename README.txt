Algoritmo RSA key

primero tenemos la funcion gcd
que servira como auxiliar en el algoritmos RSA y

Segundo se define la funcion RSA que recive los parametros
"double" de "p" "q" y el "mensaje";

    primero generamos 2 numeros aleatorios y definimos
    "φ(n)" como "fi_n" que es igual a "(p-1)*(q-1)";

    despues definimos "e" y con un while nos aseguramos del
    corpimo "e>1" utilizando el "gcd(e,φ(n))"

    definimos "d" y a "k" que puede tomar cualquier valor arbitrario
    siempre y cuando "  d*e = 1 + k *φ(n) "
    para lo cual se utiliza c=pow(msg,e) y m = pow(c,d)
    seguidos de c=fmod(c,n) y  m=fmod(m,n)

Por ultimo hacemos la imprecion de los datos
para que puedan ser visualizados en pantalla