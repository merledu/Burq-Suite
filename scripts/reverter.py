def reverter(port, file):
    file = open(file)
    content = file.readlines()
    file.close()

    line = content[25]
    if "createSplashWindow" not in line:
        line = line.replace("createMainWindow","createSplashWindow")
    content[25] = line
    print(content[25])

    line = content[22]
    content[22] = f"win.loadURL('http://localhost:{port}/splash.html');\n"

    file = open("index.js", "w")
    file.write("".join(content))
    file.close()