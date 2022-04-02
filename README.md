# HW for Data structure - CS214 ; supervisor Dr mohammed mahdy
# decimal-to-binary
Use stack to convert a positive integer into its binary representation <br />
example:<br />
user entered : 25 <br />
the output is : 11001

```
for (; num > 0; num /= 2) {

        r = num % 2;   
        push(r);    
    }
```
 *This part is the main thing which take the reminder of the number and get the pinary representation*
