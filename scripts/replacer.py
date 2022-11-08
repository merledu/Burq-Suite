def replacer(port):
    file = open("index.js")
    content = file.readlines()
    file.close()

    line = content[25]
    if "createMainWindow" not in line:
        line = line.replace("createSplashWindow","createMainWindow")
    content[25] = line
    print(content[25])

    line = content[12]
    content[12] = f"win.loadURL('http://localhost:{port}/index.html');"

    file = open("index.js", "w")
    file.write("".join(content))
    file.close()