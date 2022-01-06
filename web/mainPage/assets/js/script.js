function new_file() {
    let filename = prompt("Enter File Name");
    const li = document.createElement("li");
    const file = document.createElement("button");
    document.getElementById("tree").appendChild(li).appendChild(file);
    eel.new_file(filename);
}