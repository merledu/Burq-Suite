const { remote, ipcRenderer } = require('electron');

function lalala(){
    ipcRenderer.send('createBrowserWindow', "Window_2");

    // const remote = require('electron').remote;
    remote.getCurrentWindow().close();
}