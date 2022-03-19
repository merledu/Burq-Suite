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
        var footer = document.getElementById("foot2");
        footer.style.marginLeft = "19%";
    }
}


let editor = document.getElementsByClassName("editorx");
for(let i = 0; i<editor.length;i++){
    CodeMirror.fromTextArea(
    editor[i],
    {
        lineNumbers: true,
        matchBrackets: true,
        theme: "ayu-dark",
        mode: "text/x-scala",
        autoRefresh: true,
        scrollbars:true,
        
    }
).setSize(null, "100%")
}



function openTab(evt, tabName) {
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
  }

document.getElementById("defaultOpen").click();
