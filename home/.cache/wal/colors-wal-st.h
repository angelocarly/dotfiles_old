const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1b1b", /* black   */
  [1] = "#366a7f", /* red     */
  [2] = "#407e95", /* green   */
  [3] = "#ae4a4c", /* yellow  */
  [4] = "#5098b3", /* blue    */
  [5] = "#a7ba5e", /* magenta */
  [6] = "#91cfb9", /* cyan    */
  [7] = "#c5c6c6", /* white   */

  /* 8 bright colors */
  [8]  = "#535454",  /* black   */
  [9]  = "#366a7f",  /* red     */
  [10] = "#407e95", /* green   */
  [11] = "#ae4a4c", /* yellow  */
  [12] = "#5098b3", /* blue    */
  [13] = "#a7ba5e", /* magenta */
  [14] = "#91cfb9", /* cyan    */
  [15] = "#c5c6c6", /* white   */

  /* special colors */
  [256] = "#1a1b1b", /* background */
  [257] = "#c5c6c6", /* foreground */
  [258] = "#c5c6c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
