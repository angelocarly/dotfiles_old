#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P0000000
                 \e]P15f8787
                 \e]P2dd9999
                 \e]P3a06666
                 \e]P4888888
                 \e]P5999999
                 \e]P6aaaaaa
                 \e]P7c1c1c1
                 \e]P8333333
                 \e]P95f8787
                 \e]PAdd9999
                 \e]PBa06666
                 \e]PC888888
                 \e]PD999999
                 \e]PEaaaaaa
                 \e]PFc1c1c1
                 \ec'
