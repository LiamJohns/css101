
console.log('JavaScript');
//$('nav').hide();
$(document).ready(function(){
$('#home, #about, #services,#booking').hide();


$('#homeNav').click(function() {
  $('#home').show();
    $('#services').hide();
      $('#about').hide();
      $('#booking').hide();


});
$('#servicesNav').click(function() {
  $('#services').show();
    $('#home').hide();
      $('#about').hide();
      $('#booking').hide();


});
$('#aboutNav').click(function() {
  $('#home').show();
    $('#services').hide();
      $('#about').hide();
      $('#booking').hide();


});
$('#bookingNav').click(function() {
  $('#booking').show();
    $('#home').hide();
      $('#services').hide();
      $('#about').hide();


});
