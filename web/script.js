// OPEN CLOSE SIDE BAAR


function openMenu(evt, cityName) {
    // Declare all variables
    var i, tabcontent, tablinks;
    console.log(evt.currentTarget.classList.contains("active"))
    if(evt.currentTarget.classList.contains("active")){
        // Get all elements with class="tabcontent" and hide them
        tabcontent = document.getElementsByClassName("tabcontent2");
        for (i = 0; i < tabcontent.length; i++) {
            tabcontent[i].style.display = "none";
        }

        // Get all elements with class="tablinks" and remove the class "active"
        tablinks = document.getElementsByClassName("tablinks2");
        for (i = 0; i < tablinks.length; i++) {
            tablinks[i].className = tablinks[i].className.replace(" active", "");
        }

        //complete width of editor
        var editor = document.getElementById("main_editor");
        editor.style.width = "96%";
        var bit_conf = document.getElementById("bitstream");
        bit_conf.style.width = "96%";
        var footer = document.getElementById("foot2");
        footer.style.marginLeft = "4%";
        
    } else {

        // Get all elements with class="tabcontent" and hide them
        tabcontent = document.getElementsByClassName("tabcontent2");
        for (i = 0; i < tabcontent.length; i++) {
            tabcontent[i].style.display = "none";
        }

        // Get all elements with class="tablinks" and remove the class "active"
        tablinks = document.getElementsByClassName("tablinks2");
        for (i = 0; i < tablinks.length; i++) {
            tablinks[i].className = tablinks[i].className.replace(" active", "");
        }

        document.getElementById(cityName).style.display = "block";
        evt.currentTarget.classList.add("active");
        //complete width of editor
        var editor = document.getElementById("main_editor");
        editor.style.width = "81%";
        var bit_conf = document.getElementById("bitstream");
        bit_conf.style.width = "81%";
        var footer = document.getElementById("foot2");
        footer.style.marginLeft = "19%";
    }
}
function stylizeEditors(editor){
    // let editor = document.getElementsByClassName("editorx");
    // for(let i = 0; i<editor.length;i++),,,{
        console.log(editor);
        CodeMirror.fromTextArea(
        editor,
        {
            lineNumbers: true,
            matchBrackets: true,
            theme: "ayu-dark",
            mode: "text/x-c",
            autoRefresh: true,
            scrollbars:true,
            
        }
    ).setSize(null, "100%")
    // }

}

stylizeEditors();



function openTab(evt, tabName, fullFileName) {
    // Declare all variables
    var i, tabcontent, tablinks;
  
    // Get all elements with class="tabcontent" and hide them
    tabcontent = document.getElementsByClassName("tabcontent");
    for (i = 0; i < tabcontent.length; i++) {
      tabcontent[i].style.display = "none";
    }
  
    // Get all elements with class="tablinks" and remove the class "active"
    tablinks = document.getElementsByClassName("tablinks");
    for (i = 0; i < tablinks.length; i++) {
      tablinks[i].className = tablinks[i].className.replace(" active", "");
    }
  
    // Show the current tab, and add an "active" class to the button that opened the tab
    document.getElementById(tabName).style.display = "block";
    evt.currentTarget.className += " active";

    var filPather = document.getElementById("tab_name_space");
    filPather.innerHTML = fullFileName;
  }

// document.getElementById("defaultOpen").click();


function openNewProject(){
    var main = document.getElementById("main");
    var newProj = document.getElementById("new");
    main.style.display = "none";
    newProj.style.display = "block";
}

function changeSoC(comp){
    var core = document.getElementById("core");
    var dev = document.getElementById("devices");
    var bus = document.getElementById("bus");
    core.style.display = "none";
    dev.style.display = "none";
    bus.style.display = "none";
    if(comp === "core"){
        core.style.display = "block";
    } else if(comp === "devices"){
        dev.style.display = "block";
    } else if (comp === "bus"){
        bus.style.display = "block";
    }
}

function changeV(comp){
    var core = document.getElementById("Vcore");
    var dev = document.getElementById("Vdevices");
    var bus = document.getElementById("Vbus");
    core.style.display = "none";
    dev.style.display = "none";
    bus.style.display = "none";
    if(comp === "Vcore"){
        core.style.display = "block";
    } else if(comp === "Vdevices"){
        dev.style.display = "block";
    } else if (comp === "Vbus"){
        console.log("hello")
        bus.style.display = "block";
    }
}
function changeC(comp){
    var core1= document.getElementById("Qcore");
    var core = document.getElementById("Ccore");
    var dev = document.getElementById("Cdevices");
    var bus = document.getElementById("Cbus");
    core.style.display = "none";
    dev.style.display = "none";
    bus.style.display = "none";
    core1.style.display="none";

    if(comp === "Ccore"){
        core.style.display = "block";
    } else if(comp === "Cdevices"){
        dev.style.display = "block";
    } else if (comp === "Cbus"){
        bus.style.display = "block";
    }
 else if (comp === "Qcore"){
    core1.style.display = "block";
}
}


function changeProject(evt,proj){
    var listt=[];
    var soc = document.getElementById("soc");
    var coreP = document.getElementById("coreP");
    var comp = document.getElementById("comp");
    var verif = document.getElementById("verif");
    var sdk = document.getElementById("sdk");
    soc.style.display = "none";
    coreP.style.display = "none";
    comp.style.display = "none";
    verif.style.display = "none";
    sdk.style.display = "none";

    if(proj === "soc"){
        soc.style.display = "block";
        var listt=[];
        listt.push("soc");
       

    } 
    else if(proj === "core"){
        var listt=[];
        coreP.style.display = "block";
        listt.push("core");
    }
    else if(proj === "comp"){
        comp.style.display = "block";
        listt.push("comp");
    } 
    else if (proj === "verif"){
        var listt=[];
        verif.style.display = "block";
        listt.push("verification");
    } else if (proj === "sdk"){
        var listt=[];
        sdk.style.display = "block";
        listt.push("sdk");
    }

    var btns = document.getElementsByClassName("config-btn");
    for (i = 0; i < btns.length; i++) {
        btns[i].className = btns[i].className.replace(" active", "");
      }
    evt.currentTarget.className += " active";
    eel.datasend(listt)
}

function changeComponent(evt, comp){

    var btns = document.getElementsByClassName("comp-btn");
    for (i = 0; i < btns.length; i++) {
        btns[i].className = btns[i].className.replace(" active", "");
      }
    evt.currentTarget.className += " active";

    var core = document.getElementsByClassName("comp-core");
    for (i = 0; i < core.length; i++) {
        core[i].style.display = "none";
      }
    var dev = document.getElementById("comp-dev");
    dev.style.display = "none";

    var bus = document.getElementById("comp-bus");
    bus.style.display = "none";

    if(comp === "core"){
        var core = document.getElementsByClassName("comp-core");
    for (i = 0; i < core.length; i++) {
        core[i].style.display = "block";
      }
    } else if (comp === "dev"){
        dev.style.display = "block";
    } else if (comp === "bus"){
        bus.style.display = "block";
    }

}


function openBitstreamConfig(){
    var main = document.getElementById("main_editor");
    var bitstream = document.getElementById("bitstream");
    main.style.display = "none";
    bitstream.style.display = "block";
}
function closeBitstreamConfig(){
    var main = document.getElementById("main_editor");
    var bitstream = document.getElementById("bitstream");
    main.style.display = "block";
    bitstream.style.display = "none";
}

function switchBitstreamConfig(conf){
    var confs = document.getElementsByClassName("confs");
    for (i = 0; i < confs.length; i++) {
        confs[i].style.display = "none";
    }
    document.getElementById(conf).style.display = "block"; 
}

