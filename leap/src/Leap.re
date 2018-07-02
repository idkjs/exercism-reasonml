/*
 ```text
 on every year that is evenly divisible by 4
   except every year that is evenly divisible by 100
     unless the year is also evenly divisible by 400
 ```

 see mod docs: https://reasonml.github.io/api/Pervasives.html#VAL(mod)
 */

/* let check_year = year => year mod 4 === 0 ? print_endline("Yes") : false; */
/* doesnt work because `rei` file specifies `isLeapYear` so compiler doesnt know waht `check_year` is.

   Also seems like `print_endline("Yes")` is not of type `unit` which is required by the `.rei`. Not sure what that means exactly.*/
/* let isLeapYear = year => year mod 4 === 0 ? true : false; */

/* changed name to name in `rei`. This passes 3 or 4 test. Failing for divisible by 100. Are we supposed to be reading the test files? */

/* add if `if year mod 4` is true then check if the year div'd by 100 is true. So we can chain the condition we want to check. */

/* adding if year is not divisible by 100 so divide the year by 100 and if that isnt = to zero and year is evenly divisible by 400, return true, otherwise, return false */

let isLeapYear = year =>
  year mod 4 === 0 ? year mod 100 != 0 || year mod 400 === 0 : false;