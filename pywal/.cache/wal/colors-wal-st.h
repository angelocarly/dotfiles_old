const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2b2b2b", /* black   */
  [1] = "#da4939", /* red     */
  [2] = "#a5c261", /* green   */
  [3] = "#ffc66d", /* yellow  */
  [4] = "#6d9cbe", /* blue    */
  [5] = "#b6b3eb", /* magenta */
  [6] = "#519f50", /* cyan    */
  [7] = "#e6e1dc", /* white   */

  /* 8 bright colors */
  [8]  = "#5a647e",  /* black   */
  [9]  = "#da4939",  /* red     */
  [10] = "#a5c261", /* green   */
  [11] = "#ffc66d", /* yellow  */
  [12] = "#6d9cbe", /* blue    */
  [13] = "#b6b3eb", /* magenta */
  [14] = "#519f50", /* cyan    */
  [15] = "#f9f7f3", /* white   */

  /* special colors */
  [256] = "#2b2b2b", /* background */
  [257] = "#e6e1dc", /* foreground */
  [258] = "#e6e1dc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
