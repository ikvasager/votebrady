try { var radio } catch (err) {}
try { var vote_btn } catch (err) {}
try { var back_btn } catch (err) {}
function select() {
    radio = document.getElementById('PDI_answer44811670')
    vote_btn = document.getElementById('pd-vote-button9794855')
    back_btn = document.querySelector('a.pds-return-poll')
}
function eventFire(el, etype){
  if (el.fireEvent) {
    el.fireEvent('on' + etype);
  } else {
    var evObj = document.createEvent('Events');
    evObj.initEvent(etype, true, false);
    evObj.which = el
    el.dispatchEvent(evObj);
  }
}

setInterval(function() { 
    select()
    try { 
        radio.click()
        eventFire(vote_btn, 'click')
    } catch (e) { console.warn("paused to initiate vote", e) }
}, 1500)

setInterval(function() {
    select()
    try { back_btn.click() } catch (e) { console.warn("paused to go back") }
}, 1000, 500)
