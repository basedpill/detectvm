# VMware and VBox Detector 👋
![Swagger Validator](https://img.shields.io/swagger/valid/3.0?specUrl=https%3A%2F%2Fraw.githubusercontent.com%2FOAI%2FOpenAPI-Specification%2Fmaster%2Fexamples%2Fv2.0%2Fjson%2Fpetstore-expanded.json) ![GitHub last commit](https://img.shields.io/github/last-commit/mayhapsDev/detectvm) ![rating](https://img.shields.io/badge/Rating-5%2F5-brightgreen)

## ✨ Overview ✨
• Detects VMware (If VMware tools are installed)
• Detects Oracle VirtualBox
• Self deletes if a vm is detected

## Prerequisites

Uses standard libraries
Can be built using g++ (Sometimes cannot run on VMs using gcc unsure why)
```
g++ antivm.cpp -o antivm.exe -static-libgcc -static-libstdc++
```

## Demo 🎥
### VMware Demonstration
![VMware Demonstration](demos/demo.gif)
### VirtualBox Demonstration
![VirtualBox Demonstration](demos/demo2.gif)

## Author

- char*#1337 on discord
- mayhapsDev on GitHub

## 🤝 Contributing

Contributions, issues and feature requests are welcome!

Feel free to check 

## Show your support

Give a ⭐️ if this project helped you!


## 📝 License

No licence
