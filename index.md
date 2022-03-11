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

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

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
