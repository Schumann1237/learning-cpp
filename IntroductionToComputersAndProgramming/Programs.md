## Programs and Programming Languages 
### What is a Program?
A computer program is a set of instructions that tells the computer how to solve a problem or perform a task. Collectively, these instructions are called an algorithm. An algorithm is a set of well-defined steps for performing a task or solving a problem.

A computer's CPU can only process *machine language*, which is a stream of binary numbers consisting of only 1s and 0s. Each different type of CPU has its own _machine language_.  If you wrote a machine language program for computer A and then wanted to run it on computer B, you would have to rewrite the program in computer B's machine language.

__Programming Language__, which uses words instead of numbers, were invented to ease the task of programming. Programmers save their programs in text files, and then use special software to convert their programs to machine language.

### Programming Languages
There are two categories of programming languages: low-level and high-level. A low-level language is close to the level of computers, which means it resembles the numeric machine language. A high-level language is the easiest for people to learn because they are closer to the level of human-readability.

### Source Code, Object Code, and Executable Code
The C++ statements written by a programmer are called source code, and the file they are saved in is called the *source file*.

After the source code is saved to a file, the process of translating it to machine language can begin. A program called the *preprocessor* reads the source code then searches of special lines that begin with the # symbol. These lines contain commands that cause the preprocessor to modify the source code in some way. 

During the next phase the *compiler* steps through the preprocessed source code, translating each source code instruction into the appropriate machine language instruction. This process will uncover any *syntax errors* that may be in the program. Syntax errors are illegal ues of key words, operators, punctuation, and other language elements. If the program is free of syntax errors, the compiler stores the translated machine language instructions, which are called *object code*, in an *object file*. 

Although an object file contains machine language instructions, it is not a complete program. Here is why: C++ is equipped with a library of prewritten code for performing common operations or sometimes-difficult tasks. *For example, the library contains hartware-specific code for displaying messages on the screen and reading input from the keyboard. It also provides routines for mathematical functions.* This collection of code, called the *run-time library*, is extensive. 

Programs almost always use some part of it. When the compilar generates an object file, however, it does not include machine code for any run-time library routines the program might have used.

During the last phase of the translation process, another program called the *linker* combines the object file with the necessary library routines. Once the linker has finished with this step, an executable file is created. The executable file contains machine language instructions, or executable code, and is ready to run on the computer.