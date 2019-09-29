const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#211f19", /* black   */
  [1] = "#b1a277", /* red     */
  [2] = "#b4b27d", /* green   */
  [3] = "#a4b883", /* yellow  */
  [4] = "#a8bd8d", /* blue    */
  [5] = "#90ba87", /* magenta */
  [6] = "#bc8b9a", /* cyan    */
  [7] = "#c7c7c5", /* white   */

  /* 8 bright colors */
  [8]  = "#585752",  /* black   */
  [9]  = "#b1a277",  /* red     */
  [10] = "#b4b27d", /* green   */
  [11] = "#a4b883", /* yellow  */
  [12] = "#a8bd8d", /* blue    */
  [13] = "#90ba87", /* magenta */
  [14] = "#bc8b9a", /* cyan    */
  [15] = "#c7c7c5", /* white   */

  /* special colors */
  [256] = "#211f19", /* background */
  [257] = "#c7c7c5", /* foreground */
  [258] = "#c7c7c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
