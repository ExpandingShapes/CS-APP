## Welcome to GitHub Pages

You can use the [editor on GitHub](https://github.com/ExpandingShapes/CS-APP/edit/gh-pages/index.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.
### Problem 1.1

Problem 1.1
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

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://docs.github.com/categories/github-pages-basics/) or [contact support](https://support.github.com/contact) and we’ll help you sort it out.
