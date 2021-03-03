const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#c03000", /* red     */
  [2] = "#b1d631", /* green   */
  [3] = "#fecf35", /* yellow  */
  [4] = "#426870", /* blue    */
  [5] = "#6d506d", /* magenta */
  [6] = "#4bb5c1", /* cyan    */
  [7] = "#e2e2e5", /* white   */

  /* 8 bright colors */
  [8]  = "#5f5f5f",  /* black   */
  [9]  = "#ff3a78",  /* red     */
  [10] = "#a6cd07", /* green   */
  [11] = "#b5c865", /* yellow  */
  [12] = "#4a7781", /* blue    */
  [13] = "#ff3b77", /* magenta */
  [14] = "#4bb5c1", /* cyan    */
  [15] = "#e2e2e5", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#ff3a78",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
