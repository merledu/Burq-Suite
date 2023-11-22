const { app, BrowserWindow, ipcMain } = require('electron');
const PORT = require('./port.json');


const createMainWindow = () => {
  const win = new BrowserWindow({show: false,frame:false,icon: __dirname + '/web/assets/icons/flash96.png', webPreferences: {
    nodeIntegration: true, contextIsolation: false, enableRemoteModule: true
   } });
   win.maximize();
    
    win.once('ready-to-show', () => {win.show();});
  
win.loadURL('http://localhost:53911/index.html');
win.loadURL(`http://localhost:${PORT.port}/index.html`);
  }

const createSplashWindow = () => {
    const win = new BrowserWindow({height:600, width:1200 , icon: __dirname + '/web/assets/icons/flash96.png',frame:false,webPreferences: {
        nodeIntegration: true, contextIsolation: false
      } });
 

    // win.loadFile("splash.html")
win.loadURL(`http://localhost:${PORT.port}/splash.html`);
}
app.whenReady().then(() => {
    createSplashWindow()
});

ipcMain.on('openChildWindow', (event, arg) => {
    createMainWindow();
});
function openTheMainWindow(){
  createMainWindow()
}


app.on('window-all-closed', () => {
    if (process.platform !== 'darwin') app.quit()
});

process.env['ELECTRON_DISABLE_SECURITY_WARNINGS'] = 'true';

// function close_everything(){
//     app.quit();
// }
// document.getElementById('close_btn').addEventListener('click', (event) => {
//     // close_everything()
//     win.webContents.executeJavaScript('').then(console.log("HELLLII"));
    
// })

