# CS-330
CS 330 Structure and Org language 
//
C++ Tutorial for CS 330: Programming Language Project.

## The History behind C++
>What is the name of your language?

C++

>When/where was it created, and by whom? Was is written to address a particular problem or need?


The programming language was created, designed & developed by a Danish Computer Scientist – Bjarne Stroustrup at Bell Telephone Laboratories (now known as Nokia Bell Labs) in Murray Hill, New Jersey. He wanted a flexible & a dynamic language which was similar to C with all its features, but with additionality of active type checking, basic inheritance, default functioning argument, classes, inlining, etc. and hence C with Classes (C++) was launched. C++ has been traced back to about 1979 when Stroustrup was doing some development for his PhD.

*from: https://www.geeksforgeeks.org/history-of-c/*

>What types of programming is your language primarily used for? If your language is multi-purpose, provide some examples of different projects it's been used for.


C++ is used to code many different things including but not limited to Internet of Things (IoT) devices, video games, databases, web browsers, operating systems , virtual reality projects, flight simulation software.

Some projects that C++ was used for are:

MySQL server,
Adobe Photoshop,
Adobe Illustrator,
Google Chrome Browser,
Maya (3D software used for animation and other graphics),
and Mozilla Firefox


>Where will you get information about this language when it's time to start programming in it? At the end of your assignment, provide a list of the names of books, website URLs, or any other resources that relate to your language in particular.


Some of the resources that I will use will include: 

https://www.youtube.com/watch?v=ZzaPdXTrSb8
and 
https://www.youtube.com/watch?v=McojvctVsUs


## Getting Started with C++
>What did you need to do to install the language?

First you need to choose what type of IDLE, I went with Visual Studio Code(VSCode) since I have familiarity with it, and it is already installed on my laptop. If you choose to go with VSCode then you need to install the C++/C extension on VSCode as well as a compiler (I went with Clang since it is better suited for macs). 

>How do you run programs in that language?

To get a program running in C++ you will first need to "run build" your code compilling it altogether, and then you can run the file as perusual in VSCode with the Run button. 

>How do you write comments in your language?
To write comments in C++ you will use // This would be a single line comment

To comment out multiple lines of code, encase the section in slashes and astericks:

/* This can comment out a big chunk of code */

or 

on macs you can highlight all the lines you want to comment out then click command /

## Reserved Words
There are some words that should not be used because they are apart of the build in process for C++.

These key word include:
and, and_eq, asm,auto,bitand, bitor, bool, break, case, catch, char, class, compl, const, double, not_eg, throw, dynamic_cast, operator, true, else, enum
explicit, extern, false, float, for, friend, goto, inline, int, const-cast, long, or, or_eg, try, typedef, private, typeid, protected, typename, public, union, register, unsigned, reinterpret-cast, using, return, virtual, short, void, signed, volatile, sizeof, wchar_t, static, while, static_cast, Xor, continue, mutable, struct, xor_eg, default, namespace, switch, delete, new, template, do, not, this.

## Variable naming rules
- Reserved Words are not allowed to be used 
- Variables must be unique from one another (cannot have two variables both named x)
- Must begin with a letter or underscore (1name is not acceptable but oneName or _Name are)
- Very case sensitive, making myVariable and myvariable, are considered two different identifiers
- Variables cannot have spaces or special characters like !, @, $, &, etc.
- Numbers can be a part of a variable as long as they are not at the beginning (hello1 is fine)

## Naming conventions
Data types must be defined since C++ is an explicit statically typed programming language. It is strongly typed, which a compiler enforces. By doing this, you can make sure that you are not trying to combine a sentence with a number. If the "mutable" keyword is not used before the variable assignment, C++ variables are not mutable. This enables you to modify the variable's value in the future.

## Booleans
Boolean values can be represented in coding by using true or false. They are, however, registered as 0 and 1.
Below gives you an example:
#Chelsea remember to add the code example 

## Conditional Statements
There aren't many different conditional statements available in C++. There are IF statements that can operate independently. IF/ELSE statements are required since ELSE cannot stand alone. ELSE IF statements, which are sandwiched between the IF and ELSE statements and can't be used alone. Finally, there is a SWITCH statement, which performs the same job as the Java switch statement by condensing various conditions and outcomes into a single unit.



