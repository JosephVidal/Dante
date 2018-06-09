# Dante
Mazes generator/solver project for Epitech

# build
```
$ make
```

clean:
```
$ make fclean
```

# Run
Generator:
```
$ cd generator
$ ./generator x y
```

Solver:
```
$ cd solver
$ ./solver maze.txt
```

For a clear output:
```
$ ./solver maze.txt | sed -e "s/*/ /g" | grep 'o'
```