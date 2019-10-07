void operator(char op)
{   op=0;
    char n;
    switch(n)
    {
        case("suma") : op = 43;
        break;
        case("diferenta") : op = 45;
        break;
        case("inmultire") : op = 42;
        break;
        case("mod") : op = 37;
        break;
        case("impartire") : op = 47;
        break;
        default : printf("operatorul nu este niciuna operatiile date");
    }
}
