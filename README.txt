NONONONOYES

Like yes(1), but more sophisticated: it can do nonononoyes, yesyesyesyesno,
yesnomaybe, or any pseudo-nonononoyes sequence.

It does so by looking at its name, which much be composed exclusively of
yeses, no's, and maybes, and repeatedly outputing a sequence of y and n lines
accordingly.

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

    $ yesnomaybe
    y
    n
    y
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

By Sijmen J. Mulder <ik@sjmulder.nl>
