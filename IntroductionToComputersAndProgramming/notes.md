# Introduction to Computers and Programming
---
### Why program?
<p>A program is a set of instructions that a computer
follows to perform a task. Commonly referred to as software. Software is essential to a computer because without it, a computer can do nothing.<p>

Listed below are a few of the things that must be designed for any real-world computer programs:
- the logical flow of the instructions
- the mathematical procedures
- the appearance of the screens 
- the way information is presented to the user
- the program's "user-friendliness"
- manuals and other forms of written documentation
---
### Computer Systems: Hardware and Software
#### Hardware
Hardware refers to the physical components that a computer is made of. A computer is a system of devices. A typical computer system consists of the following major components:
- the central processing unit (CPU)
- main memory
- secondary storage devices
- input devices
- output devices

##### Central processing unit (CPU)
When a computer is performing the tasks that a program tells it to do, we say that the computer is running or executing the program. The CPU is the part of a computer that runs programs. The CPU is the most important component in a computer because without it, the computer could not run software.

Today, CPUs are small chips known as microprocessors. The CPU's job is to fetch instructions, follow the instructions and produce some result. Internally, the central processing unit consists of two parts: **the control unit** and the **arithmetic and logic unit** The control unit coordinates all of the computer's operations and it is responsible for determining where to get the next instruction and regulating the other major components of the computer with control signals. The arithmetic and logic unit, as its name suggests, is designed to perform mathematical operations. 

A program is a sequence of instructions stored in the computer's memory. When a computer is running a program, the CPU is engaged in a process known formally as the *fetch/decode/execute cycle*. The steps in the fetch/decode/execute cycle are as follows:

**Fetch:**  
The CPU's control unit fetches, from main memory, the next instruction in the sequence of program instructions.

**Decode:**  
The instruction is encoded in the form of a number. The control unit decodes the instruction and generates an electronic signal.

**Execute:**  
The signal is routed to the appropriate component of the computer (such as the ALU, a disk drive, or some other device). The signal causes the component to perform an operation.

These steps are repeated as long as there are instructions to perform.

#### Main Memory
The main memory is the computer's work area. This is where the computer stores a program while the program is running, as well as the data that the program is working with. For example, suppose you are using a word processing program to write an essay for one of your classes. While you do this, both the word processing program and the essay are stores in main memory. 

The main memory is commonly known as *random access memory* or RAM. The CPU is able to quickly access data stored at any random location in RAM. RAM is usually a volatile type of memory that is used only for temporary storage while a program is running. When the computer is turned off, the contents of RAM are erased. The RAM is stored in small chips.

A computer's memory is divided into tiny storage locations known as bytes. One byte is enough memory to store only a letter of the alphabet or a small number. In order to do anything meaningful, a computer must have lots of bytes.

Each byte is divided into eight smaller storage locations known as bits. The term bit stands for _binary digit_. Computer scientists usually think of bits as tiny switches that can be either on or off. Bits are tiny electrical components that can hold either a positive(_on_) or a negative(_off_) charge. 

Each byte is assigned a unique number known as an _address_. The addresses are ordered from lowest to highest. A byte is identified by its address in much the same way a post office box is identified by an address.

#### Secondary Storage
Secondary storage is a type of memory that can hold data for long periods of time—even when there is no power to the computer. Frequently used programs are stored in secondary memory and loaded into main memory as needed. Important information, such as documents and data, is saved to secondary storage as well.

The most common secondary storage is the disk drive. It stores data by magnetically encoding it onto a circular disk. most computers have a disk drive mounted inside their case. External disk drives, which connect to one of the computer's communication ports, are also available. 

Additionally, floppy disk drives were popular for so many years. A floppy disk records data onto a small floppy disk, which can be removed from the drive. While the use of floppy disk drives has declined, the people favoured USB drives which are superior. USB drives are small devices that plug into the computer's USB(_universal serial bus_) port and appear to the system as a disk drive. USB drives use _flash memory_ to store data and are inexpensive, reliable, and small enough to be carried in your pocket.

Optical devices such as the CD(_compact disc_) and the DVD(_digital versatile disc_) are popular for data storage. Data is not recorded magnetically on an optical disc, but encoded as a series of pits on the disc surface. CD and DVD drives use a laser to detect the pits and thus read encoded data. Optical discs hold large amounts of data, and because recordable CD and DVD drives are now commonplace, they are good mediums for creating backup copies of data.

#### Input Devices
Input device collects information from the outside world and sends it to the computer. Common devices are the keyboard, mouse and microphone. Disk drives, CD/DVD drives, and USB drives can also be considered input devices because programs and information are retrieved from them and loaded into the computer's memory.

#### Output Device
An output device formats and presents any information the computer sends to the outside world. Common devices are monitors, printers, and speakers. Disk drives, USB drives, and CD?DVD recorders can also be considered output devices because the CPU sends them information to be saved.

### Software
There are two categories of software: system software and application software. 

#### System Software

- *Operating Systems* control the internal operations of the computer's hardware, manage devices connected to the computer, allow data to be saved to and retrieved from storage devices and allow other programs to run on the computer.

- *Utility Programs* perform specialised tasks that enhances the computer's operation or safeguard data. Examples are virus-scanners, file-compression programs, and data-backup programs.

- *Software Development Tools* are used to create, modify, and test software. Examples are compilers, and integrated development environments(_IDE_).

#### Application Software
Application softwares make a computer useful for everyday task. Examples are Microsoft Word, Web browsers, game programs, and e-mail programs.

### What is a Program?
A computer program is a set of instructions that tells the computer how to solve a problem or perform a task. Collectively, these instructions are called an algorithm. An algorithm is a set of well-defined steps for performing a task or solving a problem.

A computer's CPU can only process *machine language*, which is a stream of binary numbers consisting of only 1s and 0s. Each different type of CPU has its own _machine language_.  If you wrote a machine language program for computer A and then wanted to run it on computer B, you would have to rewrite the program in computer B's machine language.

__Programming Language__, which uses words instead of numbers, were invented to ease the task of programming. Programmers save their programs in text files, and then use special software to convert their programs to machine language.

#### Programming Languages
There are two categories of programming languages: low-level and high-level. A low-level language is close to the level of computers, which means it resembles the numeric machine language. A high-level language is the easiest for people to learn because they are closer to the level of human-readability.

#### Source Code, Object Code, and Executable Code
The C++ statements written by a programmer are called source code, and the file they are saved in is called the *source file*.

After the source code is saved to a file, the process of translating it to machine language can begin. A program called the *preprocessor* reads the source code then searches of special lines that begin with the # symbol. These lines contain commands that cause the preprocessor to modify the source code in some way. 

During the next phase the *compiler* steps through the preprocessed source code, translating each source code instruction into the appropriate machine language instruction. This process will uncover any *syntax errors* that may be in the program. Syntax errors are illegal ues of key words, operators, punctuation, and other language elements. If the program is free of syntax errors, the compiler stores the translated machine language instructions, which are called *object code*, in an *object file*. 

Although an object file contains machine language instructions, it is not a complete program. Here is why: C++ is equipped with a library of prewritten code for performing common operations or sometimes-difficult tasks. *For example, the library contains hartware-specific code for displaying messages on the screen and reading input from the keyboard. It also provides routines for mathematical functions.* This collection of code, called the *run-time library*, is extensive. 

Programs almost always use some part of it. When the compilar generates an object file, however, it does not include machine code for any run-time library routines the program might have used.

During the last phase of the translation process, another program called the *linker* combines the object file with the necessary library routines. Once the linker has finished with this step, an executable file is created. The executable file contains machine language instructions, or executable code, and is ready to run on the computer.

### What is a Program Made of?

#### Language Elements
All programming languages have a few things in common

|Language Element| Description|
|---|---|
|Key Words|Words that have a special meaning. Key words may only be used for their intended purpose. Ley words are also known as reserved words.|
|Programmer-Defined Identifiers|Words or names defined by the programmer. They are symbolic names that refer to variables or programming routines.|
|Operators|Operators perform operations on one or more operands. An operand is usually a piece of data, like a number.|
|Punctuation|Punctuation characters that mark the beginning or ending of a statement of separate items in a list.|
|Syntax|Rules that must be followed when constructing a program. Syntax dictates how key words and operators may be used, and where punctuation symbols must appear.|

~~~cpp
This program calculates the user's pay
#include <iostream>
using namespace std;

int main ()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
} 
~~~
#### Key Words (Reserved Words)
Three of C++'s key words appe