const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#252525", /* black   */
  [1] = "#CD546C", /* red     */
  [2] = "#A5AF86", /* green   */
  [3] = "#CD7860", /* yellow  */
  [4] = "#7A9388", /* blue    */
  [5] = "#917154", /* magenta */
  [6] = "#767D75", /* cyan    */
  [7] = "#C2C2A8", /* white   */

  /* 8 bright colors */
  [8]  = "#454545",  /* black   */
  [9]  = "#EF545F",  /* red     */
  [10] = "#BDC79E", /* green   */
  [11] = "#E88773", /* yellow  */
  [12] = "#94B1A3", /* blue    */
  [13] = "#989584", /* magenta */
  [14] = "#9DA69E", /* cyan    */
  [15] = "#DBDAC1", /* white   */

  /* special colors */
  [256] = "#181512", /* background */
  [257] = "#eddcd3", /* foreground */
  [258] = "#EF545F",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
