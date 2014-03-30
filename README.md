# Bagels

The game of bagels. It's an obscure game where you try to guess three numbers, and use the feedback to aid you.

## Rules

### The number to guess is actually three numbers

Though it can be thought of as a 3-digit number, and is even entered like one

### Input

Your input has to be three numbers, no more, no less.

| Example | Valid |
|:-------:|:-----:|
|   521   |  Yes  |
|   21    |  No   |
|   4961  |  No   |
|   54a   |  No   |

### Numbers range from 0-9

| Example | Valid |
|:-------:|:-----:|
|   123   |  Yes  |
|   108   |  Yes  | 
|   091   |  Yes  |
|   f0a   |  No   |

### Each number is unique.

| Example | Valid |
|:-------:|:-----:|
|   057   |  Yes  |
|   128   |  Yes  |
|   660   |   No  |
|   000   |   No  |

### You have 10 guesses

If you can't guess the three numbers in 10 guesses, you lose.

### Feedback

|  Term  | Meaning |
|:------:|:-------:|
| Bagels | None of the guesses are correct |
| Pico   | A guess is correct, but in the wrong place |
| Fermi  | A guess is both correct and in the correct place |

Additionally, multiple instances of `pico` and `fermi` can occur.

For example, `fermi pico`.

## Compilation / Installation

In a bash prompt, use `make`

```bash
    user@hostname /some/dir $ make
```

### List of make commands

```bash
    $ make                   # to compile
    $ sudo make install      # to install
    $ sudo make uninstall    # to uninstall
    $ make clean             # to clean /src of .o files
    $ make build             # to prepare a release
```

Or you could download a release, which has a pre-compiled binary, as well as a shell scripts for installation and uninstallation of that binary. 

Though there is no guarantee that it will run (for instance, you could get a message saying "cannot excute binary file"), which is why using make is recommended.
