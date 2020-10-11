#! /bin/sh

# If a preselection exists, use it
has_presel=$(bspc query --nodes --node '.!automatic')

if [ ! -z $has_presel ]; then
        exit 0
fi

# Check if root node is horizontal (sorry you need "jq" for this)
firstSplit=$(bspc query -T -d -n '@/' | jq -r '.splitType')

if [ $firstSplit = 'horizontal' ]; then
        # Horizontal mode, create the main window on the left
        echo "node=@/"
        echo "split_dir=west"
        echo "split_ratio=0.7"
        exit 0
fi

# Otherwise, it depends on the number of existing (non-float) windows
num=$(bspc query -N -n '.leaf.!floating' -d | wc -l)

if [ $num -eq 0 ]; then
        # No window, just put it here
        exit 0
elif [ $num -eq 1 ]; then
        # One window, split east
        echo "split_dir=east"
        echo "split_ratio=0.7"
else
        # More than one window, split south
        echo "node=@/2"
        echo "split_dir=south"
        echo "split_ratio=0.5"
fi
