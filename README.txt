NONONONOYES

Like yes(1), but more sophisticated.

Looks at its name, which much be composed exclusively of yeses and no's, and
repeatedly outputs a sequence of y and n lines accordingly.

Examples:

    $ nonononoyes
    n
    n
    n
    n
    y
    n
    n
    n
    n
    y
    ^C

    $ yesyesyesyesno
    y
    y
    y
    y
    n
    y
    y
    y
    y
    n
    ^C

    $ cp nonononoyes noyesnonoyes
    $ ./noyesnonoyes
    n
    y
    n
    n
    y
    ^C

    $ nononoyes | ./somescript.sh

Author: Sijmen J. Mulder <ik@sjmulder.nl>
