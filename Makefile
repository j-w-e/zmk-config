# dirs.mk is a gitignored file with locations of zmk dir, and zmk-config dir
include dirs.mk

.PHONY: quick

quick:
	cd $(zmk_path) && \
	source .venv/bin/activate && \
	cd app && \
	west build -d build/left && \
	deactivate
	mv $(zmk_path)/app/build/left/zephyr/zmk.uf2 ./builds/left.uf2
	cp ./builds/left.uf2 /Volumes/NICENANO

right:
	cd $(zmk_path) && \
	source .venv/bin/activate && \
	cd app && \
	west build -d build/right && \
	deactivate
	mv $(zmk_path)/app/build/right/zephyr/zmk.uf2 ./builds/right.uf2
	cp ./builds/right.uf2 /Volumes/NICENANO

quick_both:
	cd $(zmk_path) && \
	source .venv/bin/activate && \
	cd app && \
	west build -d build/left && \
	west build -d build/right && \
	deactivate
	mv $(zmk_path)/app/build/left/zephyr/zmk.uf2 ./builds/left.uf2
	mv $(zmk_path)/app/build/right/zephyr/zmk.uf2 ./builds/right.uf2


full:
	cd $(zmk_path) && \
	source .venv/bin/activate && \
	cd app && \
	west build -p -d build/left -b nice_nano_v2 -- -DSHIELD="wysteria_left nice_view_adapter nice_view" -DZMK_CONFIG="$(zmk_config_path)/config" -Wno-dev && \
	west build -p -d build/right -b nice_nano_v2 -- -DSHIELD="wysteria_right nice_view_adapter nice_view" -DZMK_CONFIG="$(zmk_config_path)/config" -Wno-dev && \
	deactivate
	mv $(zmk_path)/app/build/left/zephyr/zmk.uf2 ./builds/left.uf2
	mv $(zmk_path)/app/build/right/zephyr/zmk.uf2 ./builds/right.uf2


test:
	cd $(zmk_path) && source .venv/bin/activate && pip -V && deactivate
