#!/bin/bash
PRIMARY=eDP1

MONITORS=$(xrandr | grep ' connected' | cut -d' ' -f1)
COUNT=$(echo $MONITORS | wc -w)

case "$COUNT" in
	1)
		bspc monitor $MONITORS -d 1 2 3 4 5 6 7 8 9 10
		;;
	2)
		bspc monitor $(echo $MONITORS | cut -d' ' -f1) -d 1 2 3 4 5
		bspc monitor $(echo $MONITORS | cut -d' ' -f2) -d 6 7 8 9 10
		;;
	3)
		bspc monitor $(echo $MONITORS | cut -d' ' -f1) -d 1 2 3 4 5
		bspc monitor $(echo $MONITORS | cut -d' ' -f2) -d 6 7 8 9
		bspc monitor $(echo $MONITORS | cut -d' ' -f3) -d 10
		;;
esac

