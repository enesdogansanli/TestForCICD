# Testin for Build ESP32

This project is a simple CI/CD implementation. Basically referenced from ESP32 files. Additionally, the on: push command has been added. With this command, the CI CD mechanism will be affected every time the project is pushed.

*This project is just for the build.*

```yml
on: push

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - name: Checkout repo
      uses: actions/checkout@v2
      with:
        submodules: 'recursive'
    - name: esp-idf build
      uses: espressif/esp-idf-ci-action@v1
      with:
        esp_idf_version: 'latest'
        target: esp32
        path: 'hello_world'
```

## REFERENCES

[ESP32 - Base Command](https://github.com/marketplace/actions/espressif-iot-development-framework-esp-idf)