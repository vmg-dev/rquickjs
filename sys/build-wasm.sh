export RUSTFLAGS="--Z wasm_c_abi=spec"
wasm-pack build --target web --release --features bindgen
