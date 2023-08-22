include dirs.mk

.PHONY: quick

quick:
	cd $(zmk_path)/app && \
	west build -d build/left 
	mv $(zmk_path)/app/build/left/zephyr/zmk.uf2 ./builds/left.uf2


quick_both:
	cd $(zmk_path)/app && \
	west build -d build/left && \
	west build -d build/right
	mv $(zmk_path)/app/build/left/zephyr/zmk.uf2 ./builds/left.uf2
	mv $(zmk_path)/app/build/right/zephyr/zmk.uf2 ./builds/right.uf2


full:
	cd $(zmk_path)/app && \
	west build -p -d build/left -b nice_nano_v2 -- -DSHIELD="wysteria_left nice_view_adapter nice_view"-DZMK_CONFIG="$(zmk_config_path)/config" -Wno-dev && \
	west build -p -d build/right -b nice_nano_v2 -- -DSHIELD="wysteria_right nice_view_adapter nice_view"-DZMK_CONFIG="$(zmk_config_path)/config" -Wno-dev
	mv $(zmk_path)/app/build/left/zephyr/zmk.uf2 ./builds/left.uf2
	mv $(zmk_path)/app/build/right/zephyr/zmk.uf2 ./builds/right.uf2
