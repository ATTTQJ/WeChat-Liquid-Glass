#!/usr/bin/env bash
set -euo pipefail

project_dir="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
stage_dir="$project_dir/.package/root"
package_dir="$project_dir/packages"
plugin_dir="$stage_dir/Library/MobileSubstrate/DynamicLibraries"
control_dir="$stage_dir/DEBIAN"

rm -rf "$project_dir/.package" "$package_dir"
mkdir -p "$plugin_dir" "$control_dir" "$package_dir"

cp "$project_dir/layout/Library/MobileSubstrate/DynamicLibraries/WCGlass.dylib" \
  "$plugin_dir/WCGlass.dylib"
cp "$project_dir/layout/Library/MobileSubstrate/DynamicLibraries/WCGlass.plist" \
  "$plugin_dir/WCGlass.plist"
cp "$project_dir/control" "$control_dir/control"

# The checked-in binary has a deliberately modified __TEXT section. Replace the
# stale upstream code signature on the staged copy without changing the source
# artifact kept in git.
ldid -S "$plugin_dir/WCGlass.dylib"

package="$package_dir/com.atttqj.wclgauthcachepoc_0.3.0_iphoneos-arm.deb"
dpkg-deb --root-owner-group -Zxz --build "$stage_dir" "$package"

echo "Built $package"
shasum -a 256 "$package" "$plugin_dir/WCGlass.dylib"
