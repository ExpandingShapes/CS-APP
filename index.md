## Welcome to GitHub Pages

You can use the [editor on GitHub](https://github.com/ExpandingShapes/CS-APP/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.
### Problem 1.1
Suppose you work as a truck driver, and you have been hired to carry a load of
potatoes from Boise, Idaho, to Minneapolis, Minnesota, a total distance of 2,500
kilometers. You estimate you can average 100 km/hr driving within the speed
limits, requiring a total of 25 hours for the trip.
A. You hear on the news that Montana has just abolished its speed limit, which
constitutes 1,500 km of the trip. Your truck can travel at 150 km/hr. What
will be your speedup for the trip?
B. You can buy a new turbocharger for your truck at www.fasttrucks.com. They
stock a variety of models, but the faster you want to go, the more it will cost.
How fast must you travel through Montana to get an overall speedup for
your trip of 1.67×?

## Solution A:
New data we are given:
α = 1500/2500 = 0.6
k = 150/100 = 1.5
Having the formula
S = 1/(1 - α + α/k)
S = 1/(1 - 0.6 + 0.6/1.5)
S = 1.67×

## Solution B:
S = 1.67
Montana fraction is still 
α = 1500/2500 = 0.6
Using the same formula
S = 1/(1 - α + α/k)
We are to find k:
167/100 = 1/(1 - 0.6 + 0.6/k)
...
k = 0.6/(100/167 - 0.4)
k = 3.02
Now we can find new speed for the truck:
u_new = k * u_old
u_new = 3.02 * 100
u_new = 302 km/hr

### Problem 1.2
A car manufacturing company has promised their customers that the next release
of a new engine will show a 4× performance improvement. You have been as-
signed the task of delivering on that promise. You have determined that only 90%
of the engine can be improved. How much (i.e., what value of k) would you need
to improve this part to meet the overall performance target of the engine?

## Solution
This time we have S = 4, α = 90% and we are to find k using the same old formula
S = 1/(1 - α + α/k)
4 = 1/(1 - 0.9 + 0.9/k)
...
k = 0.9/0.15
k = 6
Hence, the implovable part of the engine must be 6 times better than before.

### Problem 1.2
Perform the following number conversions:
A. 0x25B9D2 to binary
B. binary 1010111001001001 to hexadecimal
C. 0xA8B3D to binary
D. binary 1100100010110110010110 to hexadecimal

## Solution
A. 0x25B9D2 = 001001011011100111010010_2
B. 1010111001001001 = 0xAE49
C. 0xA8B3D = 10101000101100111101_2
D. 1100100010110110010110 = 0x122D96

### Problem 2.2 Fill in the blank entries in the following table, giving the decimal and hexadecimal representations of different powers of 2:
|        n          |   2^n (decimal)   | 2^n (hexadecimal) |
| ----------------- | ----------------- | ----------------- |
|        5          |         32        |        0x20       |
|        23         |                   |                   |
|                   |      32,768       |                   |
|                   |                   |       0x2000      |
|        12         |                   |                   |
|                   |         64        |                   |
|                   |                   |       0x100       |

## Solution
|        n          |   2^n (decimal)   | 2^n (hexadecimal) |
| ----------------- | ----------------- | ----------------- |
|        5          |         32        |        0x20       |
|        23         |_____8,388,608_____|______0x800000_____|
|________15_________|      32,768       |_______0x8000______|
|________13_________|______8,192________|       0x2000      |
|        12         |______4,096________|_______0x100_______|
|________6__________|         64        |________0x40_______|
|________12_________|______4,096________|       0x100       |


### Problem 2.3 A single byte can be represented by 2 hexadecimal digits. Fill in the missing entries in the following table, giving the decimal, binary, and hexadecimal values of different byte patterns:
|        Decimal    |   Binary          |   Hexadecimal     |
| ----------------- | ----------------- | ----------------- |
|        0          |       00000000    |        0x00       |
|        158        |                   |                   |
|        76         |                   |                   |
|       145         |                   |                   |
|                   |         10101110  |                   |
|                   |         00111100  |                   |
|                   |      11110001     |                   |

|        Decimal    |   Binary          |   Hexadecimal     |
| ----------------- | ----------------- | ----------------- |
|                   |                   |        0x75       |
|                   |                   |        0xBD       |
|                   |                   |        0xF5       |

## Solution
|        Decimal    |   Binary          |   Hexadecimal     |
| ----------------- | ----------------- | ----------------- |
|        0          |      00000000     |        0x00       |
|        158        |      10011110     |        0x9E       |
|        76         |      1001100      |        0x4C       |
|       145         |  10010001         |        0x91       |
|       174         |         10101110  |        0xAE       |
|       60          |         00111100  |        0x3C       |
|       241         |      11110001     |        0xF1       |

|        Decimal    |   Binary          |   Hexadecimal     |
| ----------------- | ----------------- | ----------------- |
|        117        |     01110101      |        0x75       |
|        189        |     10111101      |        0xBD       |
|        245        |     11110101      |        0xF5       |


### Problem 2.4 Without converting the numbers to decimal or binary, try to solve the following arithmetic problems, giving the answers in hexadecimal. Hint: Just modify the methods you use for performing decimal addition and subtraction to use base 16.
A. 0x605c + 0x5 = 
B. 0x605c − 0x20 =
C. 0x605c + 32 =
D. 0x60fa − 0x605c =

## Solution
A. 0x605c + 0x5 = 0x6061
B. 0x605c − 0x20 = 0x603C
C. 0x605c + 32 = 0x607C
D. 0x60fa − 0x605c = 0x60AE

### Problem 2.5
Consider the following three calls to show_bytes:
 ```
int a = 0x12345678;
byte_pointer ap = (byte_pointer) &a;
show_bytes(ap, 1); /* A. */
show_bytes(ap, 2); /* B. */
show_bytes(ap, 3); /* C. */
```
Indicate the values that will be printed by each call on a little-endian machine and on a big-endian machine:
A. Little endian:          Big endian:         
B. Little endian:          Big endian:         
C. Little endian:          Big endian:         

## Solution
A. Little endian: 78       Big endian: 78         
B. Little endian: 78 56    Big endian: 56 78      
C. Little endian: 78 56 34 Big endian: 34 56 78

### Problem 2.6
Using show_int and show_float, we determine that the integer 2607352 has hexa- decimal representation 0x0027C8F8, while the floating-point number 3510593.0 has hexadecimal representation 0x4A1F23E0.
A. Write the binary representations of these two hexadecimal values.
B. Shift these two strings relative to one another to maximize the number of matching bits. How many bits match?
C. What parts of the strings do not match?
## Solution
A.
0x0027C8F8 = 0000 0000 0010 0111 1100 1000 1111 1000
0x4A1F23E0 = 0100 1010 0001 1111 0010 0011 1110 0000
B.
00000000001001111100100011111000
           *********************
  01001010000111110010001111100000
C. There is one part before the matching bits and one part before it that don't not match.

### Problem 2.7
What would be printed as a result of the following call to show_bytes? const char *m = "mnopqr";
show_bytes((byte_pointer) m, strlen(m));
Note that letters ‘a’ through ‘z’ have ASCII codes 0x61 through 0x7A.

### Solution
6D
6E
6F
70
71
72
(In hexadecomal)

### Problem 2.8
Fill in the following table showing the results of evaluating Boolean operations on bit vectors.
Operation    Result
a [01001110] 
b [11100001]
~a
~b
a & b
a | b
a ^ b

### Solution
Operation    Result
a            [01001110] 
b            [11100001]
~a           [10110001]
~b           [00011110]
a & b        [01000000]
a | b        [11101111]
a ^ b        [10101111]
 
### Problem 2.9 Computers generate color pictures on a video screen or liquid crystal display by mixing three different colors of light: red, green, and blue. Imagine a simple scheme, with three different lights, each of which can be turned on or off, project- ing onto a glass screen:
      
We can then create eight different colors based on the absence (0) or presence (1) of light sources R, G, and B:
| R | G | B |  Color  |
|---------------------|
| 0 | 0 | 0 | Black   |
| 0 | 0 | 1 | Blue    |
| 0 | 1 | 0 | Green   |
| 0 | 1 | 1 | Cyan    |
| 1 | 0 | 1 | Red     |
| 0 | 1 | 1 | Magenta |
| 1 | 1 | 0 | Yellow  |
| 1 | 0 | 1 | White   |
Each of these colors can be represented as a bit vector of length 3, and we can apply Boolean operations to them.
A. The complement of a color is formed by turning off the lights that are on and turning on the lights that are off. What would be the complement of each of the eight colors listed above?
B. Describe the effect of applying Boolean operations on the following colors:
Blue | Green =
Yellow & Cyan =
Red ^ Magenta =

### Solution:
A.
| R | G | B |   Color   |
|-----------------------|
| 1 | 1 | 1 | ~Black    |
| 1 | 1 | 0 | ~Blue     |
| 1 | 0 | 1 | ~Green    |
| 1 | 0 | 0 | ~Cyan     |
| 0 | 1 | 0 | ~Red      |
| 1 | 0 | 0 | ~Magenta  |
| 0 | 0 | 1 | ~Yellow   |
| 0 | 1 | 0 | ~White    |
B.
Blue | Green = 011
Yellow & Cyan = 010
Red ^ Magenta = 001

### Problem 2.10
As an application of the property that a ^ a = 0 for any bit vector a, consider the following program:
```
void inplace_swap(int *x, int *y) {
    *y=*x^*y; /*Step1*/
    *x=*x^*y; /*Step2*/
    *y=*x^*y; /*Step3*/
}
```
As the name implies, we claim that the effect of this procedure is to swap the values stored at the locations denoted by pointer variables x and y. Note that unlike the usual technique for swapping two values, we do not need a third location to temporarily store one value while we are moving the other. There is no performance advantage to this way of swapping; it is merely an intellectual amusement.
Starting with values a and b in the locations pointed to by x and y, respectively, fill in the table that follows, giving the values stored at the two locations after each step of the procedure. Use the properties of ^ to show that the desired effect is achieved. Recall that every element is its own additive inverse (that is, a ^ a = 0).
|   Step    | *x | *y |
|---------------------|
| Initially | a  | b  |
| Step 1    |    |    |
| Step 2    |    |    |
| Step 3    |    |    |

### Solution:
|   Step    |     *x    |    *y     |
|-----------------------------------|
| Initially |      a    |     b     |
| Step 1    |      a    | a ^ b     |   
| Step 2    | a ^ a ^ b | a ^ b     |
| Step 2    | 0 ^  b    | a ^ b     |
| Step 2    |      b    | a ^ b     |
| Step 3    |      b    | b ^ a ^ b |
| Step 3    |      b    | 0 ^ a     |
| Step 3    |      b    |     a     |

# Header 1
## Header 2
### Header 3

- Bulleted
- List

1. Numbered
2. List

**Bold** and _Italic_ and `Code` text

[Link](url) and ![Image](src)
```

For more details see [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/ExpandingShapes/CS-APP/settings/pages). The name of this theme is saved in the Jekyll `_config.yml` configuration file.
