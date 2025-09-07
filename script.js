document.getElementById('contactForm').addEventListener('submit', function(e) {
  e.preventDefault();
  const message = document.getElementById('responseMessage');
  message.textContent = "Thanks for reaching out! We'll get back to you shortly.";
});
