mkdir -p ~/.config/systemd/user
cp bat.service ~/.config/systemd/user/bat.service
systemctl --user enable bat.service
systemctl --user start bat.service
