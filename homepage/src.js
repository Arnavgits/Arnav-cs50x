document.addEventListener('DOMContentLoaded', () =>{
    
    let form = document.getElementById('form');
    

    form.addEventListener('submit', () =>{

        event.preventDefault();

        const ctr1a = document.getElementById('18plus').checked;
         const ctr2a = document.getElementById('work').checked;

        if (ctr1a && ctr2a) {
        document.getElementById('qualified').innerHTML= 
        `<div class="alert alert-success" role="alert">
  "Congratulations! You are an official member.";</div>`;
    } else {
        document.getElementById('qualified').innerHTML= 
        `<div class="alert alert-danger" role="alert">
  "Sorry, But You are not eligible to become a member"</div>`;
    }
    })

})

