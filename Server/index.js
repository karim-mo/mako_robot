var app = require('express')();
var server = require('http').Server(app);
var io = require('socket.io')(server);


server.listen(9000, function () {
    console.log("Server started..\n");
});

io.on('connection', function (socket) {
    console.log("A Client Connected.");
});

