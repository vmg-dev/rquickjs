#!/bin/bash
set -e

echo "[INFO]: 🎯  Checking for the Wasm target..."
if ! rustup target list --installed | grep -q wasm32-unknown-unknown; then
  echo "[INFO]: 📦  Installing Wasm target..."
  rustup target add wasm32-unknown-unknown
fi

echo "[INFO]: 🌀  Compiling to Wasm..."
cd "$(dirname "$0")"
cargo build --lib --release --target wasm32-unknown-unknown --features "bindgen"

echo "[INFO]: ✅  Successfully built rquickjs-sys for wasm32-unknown-unknown"
echo "Output available at: ../target/wasm32-unknown-unknown/release/librquickjs_sys.wasm"