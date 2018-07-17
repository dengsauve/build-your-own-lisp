# Build Your Own Lisp
My Attempt to build my own lisp working through the tutorial found [here](http://www.buildyourownlisp.com/)

## Useful Information
**Compile and run**
`cc -std=c99 -Wall your_file.c -o output_file_name && ./output_file_name`

**Compile and run - Link program with editline**
`cc -std=c99 -Wall your_file.c -ledit -o output_file_name && ./output_file_name`

**compile flags**
- -o: outfile
- -std=c99: c version to compile to
- -ledit: tells compiler to link editline library