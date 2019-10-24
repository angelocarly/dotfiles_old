const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#262626", /* black   */
  [1] = "#d75f5f", /* red     */
  [2] = "#afaf00", /* green   */
  [3] = "#ffaf00", /* yellow  */
  [4] = "#83adad", /* blue    */
  [5] = "#d485ad", /* magenta */
  [6] = "#85ad85", /* cyan    */
  [7] = "#dab997", /* white   */

  /* 8 bright colors */
  [8]  = "#8a8a8a",  /* black   */
  [9]  = "#d75f5f",  /* red     */
  [10] = "#afaf00", /* green   */
  [11] = "#ffaf00", /* yellow  */
  [12] = "#83adad", /* blue    */
  [13] = "#d485ad", /* magenta */
  [14] = "#85ad85", /* cyan    */
  [15] = "#ebdbb2", /* white   */

  /* special colors */
  [256] = "#262626", /* background */
  [257] = "#dab997", /* foreground */
  [258] = "#dab997",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
