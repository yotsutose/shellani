# shell animation
shell animation

# preview
<img width="955" alt="スクリーンショット 2022-03-16 14 11 42" src="https://user-images.githubusercontent.com/61626658/158521010-43882518-99ea-4567-9ed2-7cc3b10386c6.png">

# preparation
- opencvのインストール(brew install opencv)
- pkg-configのインストール(brew install pkg-config)
- opencvのライブラリパスをよしなに(pkg configのコマンド)
- pkg-configのパスを通す(export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig/)
- vscodeのインテリジェンス(.vscode/c_cpp_properties.json)

# command
```
c++ -std=c++14 risu.cpp `pkg-config --cflags opencv4` `pkg-config --libs opencv4`
./a.out
```

# sankou
https://minus9d.hatenablog.com/entry/20130126/1359194404
https://qiita.com/PruneMazui/items/8a023347772620025ad6
