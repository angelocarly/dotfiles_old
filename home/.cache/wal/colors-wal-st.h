const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1a1a1a", /* black   */
  [1] = "#6b4747", /* red     */
  [2] = "#8d7138", /* green   */
  [3] = "#856237", /* yellow  */
  [4] = "#3c3c49", /* blue    */
  [5] = "#3c342e", /* magenta */
  [6] = "#5d5a4b", /* cyan    */
  [7] = "#ccbaad", /* white   */

  /* 8 bright colors */
  [8]  = "#4a4a4a",  /* black   */
  [9]  = "#6b4747",  /* red     */
  [10] = "#8d7138", /* green   */
  [11] = "#856237", /* yellow  */
  [12] = "#3c3c49", /* blue    */
  [13] = "#3c342e", /* magenta */
  [14] = "#5d5a4b", /* cyan    */
  [15] = "#eae2dc", /* white   */

  /* special colors */
  [256] = "#1a1a1a", /* background */
  [257] = "#856237", /* foreground */
  [258] = "#ccbaad",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
