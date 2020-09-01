# Maintainer: Me lmao
pkgname="dwmblocks"
pkgver=r63.9c1977f
pkgrel=1
pkgdesc="Modular status bar for dwm written in c."
arch=('x86_64')
url='https://github.com/torrinfail/dwmblocks'
license=('ISC')
depends=('libxft-bgra')
makedepends=('git')
source=('dwmblocks::git://github.com/DragonGhost7/dwmblocks.git')
md5sums=('SKIP')

pkgver() {
cd "$pkgname"
printf "r%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

build() {
	cd "$pkgname"
	make
}

package() {
	cd "$pkgname"
	install -Dm755 ./dwmblocks "$pkgdir/usr/local/bin/dwmblocks"
}
