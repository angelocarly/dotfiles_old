#!/usr/bin/env sh

# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
while pgrep -x polybar >/dev/null; do sleep 1; done

# Wait until monitors are found for 5 seconds
echo $(xrandr --query | grep " connected" | cut -d"" -f1) >> /home/magnias/output
echo $(xrandr --query) >> /home/magnias/output

if type "xrandr"; then
  for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
    MONITOR=$m polybar --reload magnias &
  done
else
  polybar --reload magnias &
fi

echo "launched polybar"

