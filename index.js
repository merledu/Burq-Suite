const { app, BrowserWindow } = require('electron');


const createMainWindow = () => {
  const win = new BrowserWindow({show: false,frame:false,icon: __dirname + '/web/assets/icons/flash96.png', webPreferences: {
    nodeIntegration: true
   } });
   win.maximize();
    
    win.show();
  
    // win.loadFile("index.html")
    win.loadURL('http://localhost:8007/index.html');
  }

const createSplashWindow = () => {
    const win = new BrowserWindow({height:600, width:1200 , icon: __dirname + '/web/assets/icons/flash96.png',frame:false,webPreferences: {
        nodeIntegration: true
      } });
 

    // win.loadFile("splash.html")
    win.loadURL('http://localhost:8012/splash.html');
}
app.whenReady().then(() => {
    createSplashWindow()
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

