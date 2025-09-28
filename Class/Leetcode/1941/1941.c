bool areOccurrencesEqual(char* s) {
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0,
        k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s2 = 0, t = 0,
        u = 0, v = 0, w = 0, x = 0, y = 0, z = 0,
        array[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    float soma = 0, insurance = 0, countAlpha = 0, test = 0;

    for (int count = 0; count < strlen(s); count++) {
        switch (s[count]) {
        case 'a':
            a++;
            break;
        case 'b':
            b++;
            break;
        case 'c':
            c++;
            break;
        case 'd':
            d++;
            break;
        case 'e':
            e++;
            break;
        case 'f':
            f++;
            break;
        case 'g':
            g++;
            break;
        case 'h':
            h++;
            break;
        case 'i':
            i++;
            break;
        case 'j':
            j++;
            break;
        case 'k':
            k++;
            break;
        case 'l':
            l++;
            break;
        case 'm':
            m++;
            break;
        case 'n':
            n++;
            break;
        case 'o':
            o++;
            break;
        case 'p':
            p++;
            break;
        case 'q':
            q++;
            break;
        case 'r':
            r++;
            break;
        case 's':
            s2++;
            break;
        case 't':
            t++;
            break;
        case 'u':
            u++;
            break;
        case 'v':
            v++;
            break;
        case 'w':
            w++;
            break;
        case 'x':
            x++;
            break;
        case 'y':
            y++;
            break;
        case 'z':
            z++;
            break;
        }
    }

    // If not zero, increments different letters counter.
    if (a != 0) {
        countAlpha++;
        array[0] = a;
    }
    if (b != 0) {
        countAlpha++;
        array[1] = b;
    }
    if (c != 0) {
        countAlpha++;
        array[2] = c;
    }
    if (d != 0) {
        countAlpha++;
        array[3] = d;
    }
    if (e != 0) {
        countAlpha++;
        array[4] = e;
    }
    if (f != 0) {
        countAlpha++;
        array[5] = f;
    }
    if (g != 0) {
        countAlpha++;
        array[6] = g;
    }
    if (h != 0) {
        countAlpha++;
        array[7] = h;
    }
    if (i != 0) {
        countAlpha++;
        array[8] = i;
    }
    if (j != 0) {
        countAlpha++;
        array[9] = j;
    }
    if (k != 0) {
        countAlpha++;
        array[10] = k;
    }
    if (l != 0) {
        countAlpha++;
        array[11] = l;
    }
    if (m != 0) {
        countAlpha++;
        array[12] = m;
    }
    if (n != 0) {
        countAlpha++;
        array[13] = n;
    }
    if (o != 0) {
        countAlpha++;
        array[14] = o;
    }
    if (p != 0) {
        countAlpha++;
        array[15] = p;
    }
    if (q != 0) {
        countAlpha++;
        array[16] = q;
    }
    if (r != 0) {
        countAlpha++;
        array[17] = r;
    }
    if (s2 != 0) {
        countAlpha++;
        array[18] = s2;
    }
    if (t != 0) {
        countAlpha++;
        array[19] = t;
    }
    if (u != 0) {
        countAlpha++;
        array[20] = u;
    }
    if (v != 0) {
        countAlpha++;
        array[21] = v;
    }
    if (w != 0) {
        countAlpha++;
        array[22] = w;
    }
    if (x != 0) {
        countAlpha++;
        array[23] = x;
    }
    if (y != 0) {
        countAlpha++;
        array[24] = y;
    }
    if (z != 0) {
        countAlpha++; // Quantidade de letras diferentes que aparecem
        array[25] = z;
    }

    for (int countFinal = 0; countFinal < 26; countFinal++) {
        if (array[countFinal] != 0) {
            soma += array[countFinal];
            insurance = array[countFinal];
            // printf( "\nInsurance: %d\n", insurance );
        }
    }

    // printf("\nQuantidade de letras diferentes: %d\n", countAlpha);
    // printf("Soma: %d\n" , soma);

    test = soma / countAlpha;

    // printf("\nTest: %f\n", test);

    if ( test == insurance ) {
        printf("VERDADE\n");
        return true;
    } else if ( test != insurance ) {
        printf("FALSO!\n");
        return false;
    }
    return 0;
}