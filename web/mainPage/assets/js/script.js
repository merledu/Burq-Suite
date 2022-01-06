function new_file() {
    let filename = prompt("Enter File Name");
    const li = document.createElement("li");
    const file = document.createElement("button");
    file.setAttribute("onclick", `open_file(${filename})`);
    document.getElementById("tree").appendChild(li).appendChild(file);
    eel.new_file(filename);
}
function open_file(filename) {
    eel.open_file(filename);
}